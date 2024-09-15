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

ll help(ll a, ll k, vector<ll>&dp){
    if(a==k)return dp[a]=2LL;
    if(a<k)
        return dp[a]=1LL;
    if(dp[a]!=-1)return dp[a]%mod;
    if(a-k>=0 && a-1>=0)
        return dp[a]=(help(a-1,k,dp)%mod+help(a-k,k,dp)%mod)%mod;
}
void solution(ll k, vector<ll>&pref){
    ll n,m;
    cin>>n;
    cin>>m;
    // pn(pref[m+1]);
    // debug(pref[m+1],pref[m],pref[n]);
    pn(pref[m+1]-pref[n]);
    return;
}
int main(){
    int _=1;
    cin>>_;
    ll k;
    cin>>k;
    ll g=1e5+10;
    ll ans=0;
    vector<ll>dp(g+1,-1);
    for(int i=0;i<k;i++){
        dp[i]=1;
    }
    dp[k]=2;
    dp[g]=help(g-1,k,dp)%mod;
    vector<ll>pref(g+2,0);
    // debug(dp);
    for(int i=0;i<dp.size();i++){
        if(dp[i]>0){
            pref[i+1]=(pref[i]%mod+dp[i]%mod)%mod;
        }
        else{
            pref[i+1]=pref[i]%mod;
        }
    }
    while(_--){
        solution(k,pref);
    }
    return 0;
}