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

void bfs(vector<vector<ll>>&v,vector<ll>&dis,vector<ll>&vis,ll x){
    
    queue<int>q;
    q.push(x);
    vis[x]=1;
    while(!q.empty()){
        int a=q.front();
        q.pop();
        for(auto x:v[a]){
            if(!vis[x]){
                vis[x]=1;
                dis[x]=dis[a]+1;
                q.push(x);
            }
        }
    }
}
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    ll x,y;
    cin>>x>>y;
    x--,y--;
    string s;
    // cin>>s;
    vector<vector<ll>>v(n);
    set<pll>st;
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
        st.insert({a,b});
        st.insert({b,a});
    }

    vector<ll>dis(n,0);
    vector<ll>vis(n,0);

    bfs(v,dis,vis,x);
    vector<ll>dis2(n,0);
    vis.resize(0);
    vis.resize(n);
    bfs(v,dis2,vis,y);
    ll d=dis2[x];
    // vector<ll>vis(n,0);
    // debug(dis);
    // debug(dis2);
    // debug(d);
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==min(x,y) && j==max(x,y)){
                continue;
            }
            if(i==j)continue;
            if(st.find({i,j})==st.end()){
                if(dis[i]+dis2[j]+1>=d && dis[j]+dis2[i]+1>=d){
                    // cout<<n-1<<endl;
                    // cout<<i<<" "<<j<<endl; 
                    ans++;
            }
            }
        }
    }
    pn(ans);
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