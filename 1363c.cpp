#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
typedef long long int ll;
int dfs(vector<vector<ll>>&adj, ll i, vector<ll>&vis, ll &m, int &d){
    vis[i]=1;
    int c=0;
    if(i==(m-1)){
        d++;
        return -1;
    }
    for(auto x:adj[i]){
        if(vis[x]==0){
            c+=dfs(adj,x,vis,m,d);
        }
    }
    return c+1;
}
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector<vector<ll>>adj(n);
    vector<ll>indegree(n,0);
    map<int,int>mp;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        indegree[a]++;
        indegree[b]++;
        if(a==m-1){
            mp[b]=1;
        }
        else if(b==m-1){
            mp[a]=1;
        }
    }
    if(n==1){
        pn("Ayush")
        return;
    }
    // print adj in form a: nodes...
    // for(int i=0;i<n;i++){
    //     ps(i);
    //     ps(":")printve(adj[i]);
    //     endo;
    // }
    vector<ll>v2;
    for(ll i=0;i<n;i++){
        if(indegree[i]==1){
            v2.push_back(i);
        }
    }
    ll c=0;
    // printv(v2);
    vector<ll>v(n,0);
    int d=0;
    for(ll i=0;i<v2.size();i++){
        if(mp[v2[i]]==1){
            d++;
            continue;
        }
        if(v2[i]==m-1){
            pn("Ayush")
            return;
        }
        // int a=dfs(adj,v2[i],v,m,d);
        // if(a<=0)continue;
        // // ps("a:");pn(a);
        // c+=a;
    }
    if(n%2){
        pn("Ashish")
    }
    else{
        pn("Ayush")
    }
    return;
    // if(c==0){
    //     pn("Ashish")
    //     return;
    // }
    // cout<<c<<" "<<d<<endl;
    // if(c%2 && d%2==0){
    //     pn("Ashish")
    // }
    // else{
    //     pn("Ayush");
    // }
    // // pn(c);
    // return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}