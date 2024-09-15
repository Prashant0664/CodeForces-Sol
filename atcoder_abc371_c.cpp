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
#define pb push_back
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

ll help(vector<int>&v, vector<vector<int>>cost, vector<vector<int>>gv, vector<vector<int>>hv, ll &n){
    ll ans=0;
    // debug(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            int nx=v[i],ny=v[j];
            if(gv[i][j]!=hv[nx][ny]){
                // cout<<i+1<<" "<<j+1<<endl;
                ans+=abs(gv[i][j]-hv[nx][ny])*cost[nx][ny];
                gv[i][j]=0;
                gv[j][i]=0;
                hv[nx][ny]=0;
                hv[ny][nx]=0;
            }
        }
    }
    return ans;
}

void solution(){
    ll n,m;
    cin>>n;
    ll gm;
    ll hm;
    cin>>gm;
    vector<vector<int>>gv(n+1,vector<int>(n+1,0));
    for(int i=0;i<gm;i++){
        ll a,b;
        cin>>a>>b;
        a--,b--;
        gv[a][b]++;
    }    
    cin>>hm;
    vector<vector<int>>hv(n+1,vector<int>(n+1,0));
    for(int i=0;i<hm;i++){
        ll a,b;
        cin>>a>>b;
        a--,b--;
        hv[a][b]++;
    }    
    vector<vector<int>>cost(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j)continue;
            // if(cost[i][j]!=0)continue;
            cin>>cost[i][j];
            cost[j][i]=cost[i][j];
        }
    }
    // debug(cost);
    ll ans=LLONG_MAX;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        v[i]=i;
    }
    // vector<int>vv={1,2,4,0,3};
    vector<int>vv={3,0,1,4,2};
    int h=help(vv,cost,gv,hv,n);
    debug(h);
    do {
        ll d=help(v,cost,gv,hv,n);
        ans=min(ans,d);
        // if(d)cout<<d<<" ";
    } while (next_permutation(v.begin(),v.end()));
    pn(ans);
    pn(1);
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