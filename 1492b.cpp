#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    priority_queue<ll> pq;
    set<ll>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        pq.push(v[i]);
        st.insert(v[i]);
    }
    stack<ll>stk;
    for(int i=n-1;i>=0;i--){
        if(v[i]==pq.top()){
            cout<<v[i]<<" ";
            pq.pop();
            while(!stk.empty()){
                cout<<stk.top()<<" ";
                stk.pop();
            }
            while(!pq.empty() && st.find(pq.top())==st.end()){
                pq.pop();
            }
            st.erase(v[i]);
        }
        else{
            stk.push(v[i]);
            st.erase(v[i]);
        }
    }
    cout<<endl;
    return;
}

int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}