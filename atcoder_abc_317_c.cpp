#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik, n) for (int i = ik; i < n; i++)
typedef long long int ll;


ll dfs(ll i,vector<ll>&vis,vector<vector<vector<ll>>>adj){
    vis[i]=1;
    ll ans=0;
    for(auto ik:adj[i]){
        if(!vis[ik[0]]){
            ans=max(ans,ik[1]+dfs(ik[0],vis,adj));
            // cout<<endl<<ans<<endl;
        }
    }
    return ans;
}   

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<vector<ll>>>adj(n);
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    vector<vector<ll>>v(n,vector<ll>(n,INT_MIN));
     for(int i=0;i<n;i++){
        for(int j=0;j<adj[i].size();j++){
            v[i][adj[i][j][0]]=adj[i][j][1];
            v[adj[i][j][0]][i]=adj[i][j][1];
        }
    }
    
    for(int i=0;i<n;i++){
        v[i][i]=0;
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(i==k)continue;
                if(v[k][i]<(v[k][j]+v[j][i]) && (v[k][j]!=INT_MIN && v[j][i]!=INT_MIN)){
                    v[k][i]=v[k][j]+v[j][i];
                }
            }
        }
        cout<<"<<<<<<<<<<<<<<<<<\n";
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<">>>>>>>>>>>>>>>>>>\n";
        v[j][j]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }








    // for(int i=0;i<n;i++){
    //     sort(adj[i].begin(),adj[i].end(),[](vector<ll>a,vector<ll>b){return a[1]>b[1];});
    // }
   
    // // cout<<"-";
    // int ans=0;
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     vector<ll>vis(n,0);
    //     for(int j=0;j<n;j++){
    //         if(!vis[j]){
    //             int g=dfs(i,vis,adj);
    //             if(g>ans){
    //                 cout<<i<<" ";
    //             }
    //             ans=max(ans,g);
    //         }
    //     }
    // }
    // // cout<<endl<<"---- ";
    // cout<<ans<<endl;

}