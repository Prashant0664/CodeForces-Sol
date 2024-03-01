#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    n--;
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
        cin>>x;
        mp[x]++;
    }
    ll c=0;
    for(auto [i,j]:mp){
        if(j==1){
            c++;
        }
    }
    cout<<c<<endl;
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}