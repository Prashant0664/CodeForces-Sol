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

void dfs(vector<vector<int>>&v, int i, vector<int>&vis, vector<int>&ans){
    vis[i]=1;
    ans.push_back(i);
    for(auto &k:v[i]){
        if(!vis[k]){
            dfs(v,k,vis,ans);
        }
    }
    return;
}
void solution(){
    ll n,m;
    cin>>n;
    map<pair<int,int>,int>mp;
    for(int i=0;i<n-2;i++){
        int a, b, c;
        cin>>a>>b>>c;
        a--,b--,c--;
        mp[{min(a,b),max(a,b)}]++;
        mp[{min(a,c),max(a,c)}]++;
        mp[{min(b,c),max(b,c)}]++;
    }
    vector<vector<int>>v(n);
    vector<int>ends;
    for(auto &[i,j]:mp){
        int a=i.first,b=i.second;
        if(j==2){
            v[a].push_back(b);
            v[b].push_back(a);
        }
    }
    int st=1;
    for(int i=0;i<n;i++){
        if(v[i].size()==1){
            st=i;
            break;
        }
    }
    vector<int>vis(n,0),ans;
    dfs(v,st,vis,ans);
    debug(ans);
    for(int i=0;i<n;i++){
        if(!vis[i])ends.push_back(i);
    }
    int beg=0,end=0;
    if(mp.find({min(ends[0],ans[0]), max(ends[0],ans[0])})!=mp.end()){
        beg=ends[0];
        end=ends[1];
    }
    else{
        beg=ends[1];
        end=ends[0];
    }
    cout<<beg+1<<" ";
    for(auto &i:ans){
        cout<<i+1<<" ";
    }
    cout<<end+1<<" ";
    endo;
    // debug(v);
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