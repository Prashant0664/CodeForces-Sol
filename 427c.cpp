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

void dfs(int i,vector<vector<int>>&adj,vector<int>&vis,stack<int>&st){
    vis[i]=1;
    for(auto x:adj[i]){
        if(!vis[x]){
            dfs(x,adj,vis,st);
        }
    }
    st.push(i);
}

void dfs2(int i,vector<vector<int>>&adj,vector<int>&vis,ll &t,ll &c, map<ll,ll>&mp, vector<ll>&a){
    vis[i]=1;
    c=a[i];
    t=min(t,a[i]);
    mp[a[i]]++;
    for(auto x:adj[i]){
        if(!vis[x]){
            dfs2(x,adj,vis,t,c,mp,a);
        }
    }
    return;
}

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector<vector<int>>adj(n),adj2(n);
    stack<int>st;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        adj[b].push_back(a);
        adj2[a].push_back(b);
    }
    vector<int>vis(n,0);
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        if(!vis[i]){
            mp.clear();
            dfs(i,adj2,vis,st);
        }
    }
    vis.assign(n,0);
    ll ans=1;
    ll cost=0;
    while(!st.empty()){
        auto i=st.top();
        st.pop();
        if(!vis[i]){
            ll t=INT_MAX;
            ll c=0;
            dfs2(i,adj,vis,t,c,mp,a);
            cost+=t;
            ans*=mp[t];
            mp.clear();
            // return;
        }
    }
    if(m==0){
        cout<<cost<<' '<<1%mod<<endl;
        return;
    }
    cout<<cost<<' '<<ans%mod<<endl;
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