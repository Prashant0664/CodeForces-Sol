#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void dfs(int i,vector<ll>&v,vector<int>&vis,int &ans,vector<ll>&ve){
    if(vis[i]){
        return;
    }
    vis[i]=1;
    ans++;
    ve.push_back(i);
    dfs(v[i],v,vis,ans,ve);
    return;
}

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n+1);
    for(int i=0;i<n;i++){
        cin>>v[i+1];
    }
    vector<int>vis(n+1,0);
    vector<ll>anss(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int ans=0;
            vector<ll>ve;
            // ve.push_back(i);
            dfs(i,v,vis,ans,ve);
            for(auto i:ve){
                anss[i]=ans;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<anss[i]<<' ';
    }
    endo;
    // printv(anss);
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