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
int dp[200005][2];
int help(vector<ll>&v, ll &n, int i, int f){
    if(i>=n){
        return 0;
    }
    if(dp[i][f]!=-1)return dp[i][f];
    int a=1e7,b=1e8;
    if(f==0){
        a=help(v,n,i+1,1);
        b=help(v,n,i+2,1);
    }
    else{
        if(v[i]==1){
            a=1+help(v,n,i+1,0);
            if(i+1<n-1 && v[i+1]==1){
                b=2+help(v,n,i+2,0);
            }
            else if(i+1<n-1){
                b=1+help(v,n,i+2,0);
            }
        }
        else{
            a=help(v,n,i+1,0);
            if(i+1<n-1 && v[i+1]==1){
                b=1+help(v,n,i+2,0);
            }
            else if(i+1<n-1){
                b=help(v,n,i+2,0);
            }
        }
    }
    return dp[i][f]=min(a,b);
}

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    int g=help(v,n,0,1);
    pn(g);
    return;
}
int main(){
    int _=1;
    cin>>_;
    // cout<<sizeof(dp);
    while(_--){
        solution();
    }
    return 0;
}