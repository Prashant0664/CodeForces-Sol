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

void dfs(vector<vector<ll>>&v, int i, set<int>&ans, int &f, ll &t, vector<int>&vis){
    if(f==1){
        ans.insert(i);
        return;
    }
    if(i==t){
        f=1;
        // cout<<"<_";
        return;
    }
    // cout<<i<<" ";
    vis[i]=1;
    for(auto &k:v[i]){
        if(!vis[k]){
            dfs(v,k,ans,f,t,vis);
        }
        if(f==1){
            break;
        }
    }
    if(f==1){
        ans.insert(i);
        return;
    }
    return;
}
void dfs2(vector<vector<ll>>&v, int i, vector<int>&vis, ll &c, set<int>&st){
    if(st.find(i)!=st.end()){
        return;
    }
    vis[i]=1;
    c++;
    // cout<<i<<" ";
    for(auto &k:v[i]){
        if(!vis[k]){
            dfs2(v,k,vis,c,st);
        }
    }
    return;
}
void solution(){
    ll n,m;
    cin>>n;
    ll x, y;
    cin>>x>>y;
    x--,y--;
    // cin>>m;
    string s;
    // cin>>s;
    vector<vector<ll>>v(n);
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);
    }
    // debug(v);
    set<int>ans;
    int f=0;
    // debug(v);
    vector<int>vis(n,0);
    dfs(v,x,ans,f,y,vis);
    if(ans.find(x)!=ans.end())ans.erase(x);
    if(ans.find(y)!=ans.end())ans.erase(y);
    // for(auto &k:ans){
    //     cout<<k+1<<' ';
    // }
    // debug(ans);
    ll a=0,b=0;
    for(auto &i:vis){
        i=0;
    }
    ans.insert(y);
    dfs2(v,x,vis,a,ans);
    ans.erase(y);
    ans.insert(x);
    // endo;
    for(auto &i:vis){
        i=0;
    }
    dfs2(v,y,vis,b,ans);
    // endo;
    // a++,b++;
    // debug(a,b);
    ll red=a*b;
    ll res=(n*(n-1));
    // debug(res);
    res-=red;
    pn(res);
    // debug(a);
    // debug(red);

    
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