
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll help(vector<vector<ll>>&v, vector<ll>&path, vector<vector<ll>>&paths, vector<vector<ll>>&dp, int i, ll cn, ll &n){
    if(i==path.size()){
        if(cn==n-1)
            return 0;
        else return v[cn][n-1];
    }
    if(dp[i][cn]!=-1)
        return dp[i][cn];
    else{
        ll a=0;
        ll b=0;
        if(paths[path[i]][0]==cn){
            a=paths[path[i]][2];
        }
        else{
            a=v[cn][paths[path[i]][0]]+paths[path[i]][2];
        }
        if(paths[path[i]][1]==cn)
            b=paths[path[i]][2];
        else{
            b=v[cn][paths[path[i]][1]]+paths[path[i]][2];
        }
        a+=help(v,path,paths,dp,i+1,paths[path[i]][1],n);
        b+=help(v,path,paths,dp,i+1,paths[path[i]][0],n);
        return dp[i][cn]=min(a,b);
    }
}
int main(){
    vector<vector<ll>>paths;
    ll n,m;
    cin>>n;
    cin>>m;
    ll q, t, a,b;
    vector<vector<ll>>v(n,vector<ll>(n,LLONG_MAX));
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cin>>t;
        a--,b--;
        v[a][b]=min(v[a][b],t);
        v[b][a]=min(v[b][a],t);
        paths.push_back({a,b,t});
    }
    cin>>q;
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(v[i][k]!=LLONG_MAX && v[k][j]!=LLONG_MAX)
                    v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
    while(q--){
        ll k;
        cin>>k;
        vector<ll>path;
        for(int i=0;i<k;i++){
            ll x;
            cin>>x;
            x--;
            path.push_back(x-1+1);
        }
        vector<vector<ll>>dp2(k+1,vector<ll>(n+1,-1));
        ll ans=help(v,path,paths,dp2,0,0,n);
        while(next_permutation(path.begin(),path.end())){
            vector<vector<ll>>dp(k+1,vector<ll>(n+1,-1));
            ans=min(ans,help(v,path,paths,dp,0,0,n));
        }
        cout<<ans<<endl;
    }
}