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


void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<string>s;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        s.push_back(temp);
    }
    vector<vector<ll>>dp(n,vector<ll>(2,1e15));
    for(int i=0;i<n;i++){
        if(i==0){
            dp[i][0]=0;
            dp[i][1]=v[i];
        }else{
            string t=s[i-1];
            string t1=s[i];
            reverse(t.begin(),t.end());
            reverse(t1.begin(),t1.end());
            if(s[i]>=s[i-1]){
                dp[i][0]=min(dp[i][0],dp[i-1][0]);
            }
            if(s[i]>=t){
                dp[i][0]=min(dp[i][0],dp[i-1][1]);
            }
            if(t1>=s[i-1]){
                dp[i][1]=min(dp[i][1],dp[i-1][0]);
            }
            if(t1>=t){
                dp[i][1]=min(dp[i][1],dp[i-1][1]);
            }
            dp[i][1]+=v[i];
        }
    }
    // debug(dp);
    ll ans=min(dp[n-1][0],dp[n-1][1]);
    if(ans>=1e15){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
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