#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    int ec=0,oc=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2==0) ec++;
        else oc++;
    }
    cin>>m;
    ll ans=0;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        if(x%2==0) ans+=ec;
        else ans+=oc;
    }
    cout<<ans<<endl;
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