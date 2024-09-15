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

ll help(vector<ll>&pref, int &n, int i, int m, int &k, vector<vector<ll>>&dp, map<pair<ll,ll>,ll>&mp){
    if((i==n && m==0) || m==0)
        return 0;
    if(i==n)
        return -1;
    
    // if(dp[i][m]!=LLONG_MIN){
    //     return dp[i][m];
    // }
    if(mp.find({i,m})!=mp.end()){
        return mp[{i,m}];
    }
    ll t=INT_MIN,nt=INT_MIN;
    if(i+k<=n)t=pref[i+k-1]-pref[i-1]+help(pref,n,i+k,m-1,k,dp,mp);
    nt=help(pref,n,i+1,m,k,dp,mp);
    return mp[{i,m}]=max(t,nt);
}

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>pref(5010,0); 
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+v[i-1];
    }
    if(m*k==n){
        cout<<pref[n]<<endl;
        return;
    }
    vector<vector<ll>>dp(5010,vector<ll>(5010,0));
    map<pair<ll,ll>,ll>mp;
    for(ll i=m;i<=n;i++){
        for(ll j=1;j<=k;j++){
            ll t=-pref[i-m]+pref[i]+dp[i-m][j-1];
            ll nt=dp[i-1][j];
            dp[i][j]=max(t,nt);
        }
    }

    ll ans=dp[n][k];
    pn(ans);
    // ll ans=help(pref,n,1,k,m,dp,mp);
    // cout<<ans<<endl;
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