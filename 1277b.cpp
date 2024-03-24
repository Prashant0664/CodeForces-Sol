#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    set<ll>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            st.insert(v[i]);
        }
    }
    priority_queue<ll>pq;
    for(auto &i:st){
        pq.push(i);
    }
    ll c=0;
    while(!pq.empty()){
        ll x=pq.top();
        pq.pop();
        if(x%2==0 && (x/2)%2==0 && st.find(x/2)==st.end()){
            st.insert(x/2);
            pq.push(x/2);
        }
        // cout<<x<<" ";
        c++;
    }
    pn(c);
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