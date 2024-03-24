#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check(ll k,vector<ll>v,set<ll>st){
    for(int i=0;i<v.size();i++){
        if(st.find(v[i]^k)==st.end()){
            return false;
        }
    }
    return true;
}
void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    set<ll>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    for(int i=1;i<1200;i++){
        if(check(i,v,st)){
            cout<<i<<"\n";
            return;
        }
    }
    cout<<-1<<
    "\n";
    return;

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