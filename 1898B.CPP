#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    map<ll,ll>mp;
    ll small=v[n-1];

    for(int i=n-1;i>=0;i--){
        if(v[i]<=small){small=v[i];continue;}
        ll cnt=v[i]/small;
        ans+=cnt-1;
        small=(v[i]%small==0)?small:v[i]%small;
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solution();
    }
}