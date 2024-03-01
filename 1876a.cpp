#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        ll j;
        cin>>j;
        v[i].second=j;
    }

    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    sort(v.begin(),v.end());
    ll c=n-1;
    ll ans=m;
    ll i=0;
    while(c>0){
        if(v[i].first<=m){
            ans+=min(min(v[i].second,c)*v[i].first,m*min(v[i].second,c));
            c-=(v[i].second);
            i++;
        }
        else{
            ans+=m;
            c-=1;
        }
        // ans+=m;
        // c-=1;
        // cout<<c<<"  "<<ans<<endl;
        // cout<<min(v[i].first,c)<<endl;
        // ans+=min(min(v[i].second,c)*v[i].first,m*min(v[i].second,c));
        // c-=(v[i].second);
        // i++;
        // cout<<c<<" "<<ans<<endl;
        // cout<<"-\n" ;
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