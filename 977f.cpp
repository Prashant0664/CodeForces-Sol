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
#define pn(x) std::cout<<x<<endl;
#define ps(x) std::cout<<x<<' ';
#define endo std::cout<<endl;
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

void dfs(map<int,vector<int>>&mp, vector<ll>&v, int x, vector<int>&vis, int &c){
    if(vis[x]>=c){
        return;
    }
    vis[x]=c;
    // cout<<x<<" ";
    auto t=mp[v[x]];
    auto h=upper_bound(t.begin(),t.end(),x);
    if(h==t.end()){
        return;
    }
    c++;
    dfs(mp,v,*h,vis,c);
    return;
}
void dfs2(map<int,vector<int>>&mp, vector<ll>&v, int x, vector<int>&vis, vector<int>&ans){
    auto t=mp[v[x]];
    // std::cout<<x+1<<" ";
    ans.push_back(x+1);
    auto h=upper_bound(t.begin(),t.end(),x);
    if(h==t.end()){
        return;
    }
    dfs2(mp,v,*h,vis,ans);
    return;
}

void help(vector<ll>v, ll n){
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        mp[v[i]-1].push_back(i);
    }
    vector<int>ans;
    // for(auto &[i,j]:mp){
    //     cout<<i<< ": ";
    //     for(auto x:j){
    //         cout<<x<<" ";
    //     }
    //     endo;
    // }
    vector<int>vis(n+1,-1);
    int c=0;
    int node=0;
    // dfs(mp,v,0,vis,c);
    // return; 
    for(int i=0;i<n;i++){
        int ans=0;
        dfs(mp,v,i,vis,ans);
        // debug(i,ans);
        if(ans>c){
            c=ans;
            node=i;
        }
    }
    // debug(vis);
    dfs2(mp,v,node,vis,ans);
    pn(ans.size());
    printv(ans);
}

void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    help(v,n);

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