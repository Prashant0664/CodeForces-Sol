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



// int help(vector<int>&v, vector<int>&v2, vector<int>&coins, int i, int k, vector<vector<int>>&dp){
//     if(i==v2.size()){
//         if(k<0)return -1e8;
//         return 0;
//     }
//     if(k<0)return -1e8;
//     if(dp[i][k]!=-1)return dp[i][k];
//     int t=0,nt=0;
//     int x=v[v2[i]];
//     if(k-x>=0)t=coins[i]+help(v,v2,coins,i+1,k-x,dp);
//     nt=help(v,v2,coins,i+1,k,dp);
//     return dp[i][k]=max(t,nt);
// }


void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector<int>v2(n),coins(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    
    // vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    vector<int>pref(1e3+5,1e7);
    pref[0]=0;
    pref[1]=0;
    for(int i=1;i<=1e3+5;i++){
        for(int j=i;j>=1;j--){
            int x=i+i/j;
            if(x>1e3+1)break;
            pref[x]=min(pref[x],1+pref[i]);
        }
    }
    for(auto &i:v2){
        sum+=pref[i];
    }
    if(m>=sum){
        ll ans=0;
        ans=accumulate(coins.begin(),coins.end(),0LL);
        pn(ans)
        return;
    }
    vector<int>prev(m+1,0),curr(m+1,0);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            int t=0,nt=0;
            int x=pref[v2[i-1]];
            if(j-x>=0){
                t=coins[i-1]+prev[j-x];
            }
            nt=prev[j];
            curr[j]=max(t,nt);
        }
        prev=curr;
    }
    pn(curr[m]);
    // debug(pref[1]);
    // debug(pref[7]);
    // debug(pref[5]);
    // debug(pref[2]);
    // debug(pref)
    // int g=help(pref,v2,coins,0,m,dp);
    // pn(g);
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