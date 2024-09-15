/*
       ___      _      ___     ____   _    _   ____     _____  
      |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
        | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
    |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
    |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

                  ____         _      __  __ 
                 |  _ \       / \    |  \/  |
                 | |_) |     / _ \   | \  / |
                 |  _ <     / ___ \  | |\/| |
                 |_|  \_\  /_/   \_\ |_|  |_|

*/
#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
#define pll pair<ll,ll>
#define pii pair<int,int>
typedef long long int ll;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void dfs(vector<vector<int>>&adj, vector<int>&vis, int i, string &s, int &c){
    vis[i]=1;
    if(s[i]=='0'){
        c++;
    }
    for(auto x:adj[i]){
        if(!vis[x]){
            dfs(adj,vis,x,s,c);
        }
    }
    return;
}
void help(vector<vector<int>>&adj, vector<int>&vis, int i, string &s, int &c, vector<int>&ans){
    vis[i]=1;
    ans[i]=c;
    for(auto x:adj[i]){
        if(!vis[x]){
            help(adj,vis,x,s,c,ans);
        }
    }
    return;
}
void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    vector<ll>v(n);
    vector<vector<int>>adj(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
        adj[v[i]].push_back(i);
        adj[i].push_back(v[i]);
    }
    cin>>s;
    vector<int>vis(n,0);
    vector<int>ans(n,0);
    vector<int>vis2(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int c=0;
            dfs(adj,vis,i,s,c);
            help(adj,vis2,i,s,c,ans);
        }
    }
    printv(ans);
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