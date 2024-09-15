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
ll inf=1e12;
bool dfs2(vector<vector<ll>>&adj, ll i, vector<ll>&v, vector<ll>&vis, ll z, ll &mid){
    ll d=v[i]-z;
    if(d<0){
        z+=abs(d);
    }
    // cout<<i<<"  "<<d<<" "<<z<<" "<<v[i]<<endl;
    if(z>inf)return false;
    vis[i]=1;
    if(adj[i].size()==1 && d<0){
        return 0;
    }
    else if(adj[i].size()==1 && d>=0){
        return 1;
    }
    bool ans=1;
    for(auto &k:adj[i]){
        if(!vis[k]){
            ans&=dfs2(adj,k,v,vis,z,mid);
        }
    }
    return ans;
}

bool check(vector<vector<ll>>&adj, ll mid, vector<ll>&v, ll n){
    vector<ll>vis(n,0);
    ll diff=mid-v[0];
    bool c=1;
    vis[0]=1;
    for(auto &i:adj[0]){
        c&=dfs2(adj,i,v,vis,diff,mid);
    }
    return c;
}
void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    vector<vector<ll>>adj(n);
    ll maxi=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        maxi=max(maxi,(ll)v[i]);
    }
    vector<ll>v2(n+1,-1);
    for(ll i=0;i<n-1;i++){
        cin>>v2[i+1];
        v2[i+1]--;
        adj[i+1].push_back(v2[i+1]);
        adj[v2[i+1]].push_back(i+1);
    }
    ll low=v[0],high=INT_MAX;
    ll ans=0;
    // bool c=check(adj,3,v,n);
    // pn(c);
    // return;
    while(low<=high){
        ll mid=(low+high)>>1;
        bool c=check(adj,mid,v,n);
        // debug(mid);
        if(c){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    pn(ans);
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