#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll help(vector<ll>v,vector<ll>v2,vector<ll>vis,ll f){
    int g=0;
    for(ll i=0;i<v.size();i++){
        if(vis[i]==0){
            g=1;
            break;
        }
    }
    if(g==0){
        ll ls=0,rs=0;
        for(ll i1=0;i1<v.size();i1++){
            ls+=v[i1];
            rs+=v2[i1];
        }
        return ls-rs;
    }
    if(f==0){
        ll ans=INT_MIN;
        for(ll i=0;i<v.size();i++){
            if(vis[i]){
                continue;
            }
            ll m=v[i];
            v[i]-=1;
            ll nn=v2[i];
            v2[i]=0;
            vis[i]=1;
            ans=max(ans,help(v,v2,vis,!f));
            v[i]=m;
            vis[i]=0;
            v2[i]=nn;
        }
        return ans;
    }
    else{
        ll ans=INT_MIN;
        for(ll i=0;i<v.size();i++){
            if(vis[i]){
                continue;
            }
            ll m=v2[i];
            v2[i]-=1;
            ll nn=v[i];
            v[i]=0;
            vis[i]=1;
            ans=max(ans,help(v,v2,vis,!f));
            v2[i]=m;
            vis[i]=0;
            v[i]=nn;
        }
        return ans;
    }
    // return ans;

}
void solution()
{
    ll n;
    cin>>n;
    vector<ll> v(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<pair<ll,ll>>v3;
    for(int i=0;i<n;i++)
    v3.push_back({v[i]+v2[i],i});
    sort(v3.begin(),v3.end());
    reverse(v3.begin(),v3.end());
    bool f=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(!f){
            ans+=v[v3[i].second];
            ans--;
        }
        else{
            ans-=v2[v3[i].second];
            ans++;
        }
        f=!f;
    }
    cout<<ans<<endl;
    // ll ans=0;
    // vector<ll>vis(n,0);
    // ans=help(v,v2,vis,0);
    // cout<<help(v,v2,vis,1)<<endl;
    // cout<<help(v2,v,vis,0)<<endl;
    // cout<<help(v2,v,vis,1)<<endl;
    // cout<<ans<<endl;

    
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
}