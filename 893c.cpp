#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

ll find(map<ll,vector<ll>>&mp, map<ll,ll>&cost, vector<int>&vis, ll i){
    vis[i]=1;
    ll ans=cost[i];
    queue<ll>q;
    q.push(i);
    while(!q.empty()){
        ll x=q.front();
        q.pop();
        for(auto y:mp[x]){
            if(!vis[y]){
                vis[y]=1;
                ans=min(ans,cost[y]);
                q.push(y);
            }
        }
    }
    return ans;
}

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    map<ll,ll>cost;
    for(int i=0;i<n;i++){
        cin>>v[i];
        cost[i]=v[i];
    }
    if(m==0){
        ll sum=accumulate(v.begin(),v.end(),0LL);
        pn(sum);
        return;
    }
    map<ll,vector<ll>>mp;
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        a--;b--;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    ll ans=0;
    vector<int>vis(n+1,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            ans+=find(mp,cost,vis,i);
            // cout<<ans<<" ";
            // cout<<ans<<endl;
        }
    }
    pn(ans);
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