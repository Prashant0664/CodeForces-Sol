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

void dfs(vector<vector<int>>&v, int i, map<int,int>&mp, vector<int>&isvis){
    if(mp.find(i)!=mp.end())return;
    mp[i]++;
    isvis[i]=0;
    for(auto &k:v[i]){
        dfs(v,k,mp,isvis);
    }
    return;
}
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    ll k;
    cin>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }
    vector<vector<int>>adj(n);
    vector<int>isvis(n,0);
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        isvis[a]=1;
        isvis[b]=1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(isvis[i]){
            int maxi=0,sum=0;
            map<int,int>mp;
            dfs(adj,i,mp,isvis);
            map<int,int>mp2;
            for(auto &[i,j]:mp){
                mp2[v[i]]+=j;
                maxi=max(maxi,mp2[v[i]]);
                sum+=j;
                debug(i,j);
            }
            ans+=(sum-maxi);
            debug(i);
        }
    }
    pn(max(0,ans));
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