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
int dp[110][5];
int help(vector<int>&v, int i, int prev){
    if(i==v.size()){
        return 0;
    }
    if(dp[i][prev+1]!=-1)return dp[i][1+prev];
    int g=1+help(v,i+1,-1);
    int ans=0;
        if(v[i]==0){
            ans=1+help(v,i+1,-1);
        }
        if(v[i]==1){
            if(prev==1){
                ans=1+help(v,i+1,-1);
            }
            else{
                ans=help(v,i+1,1);
            }
        }
        if(v[i]==2){
            if(prev==2){
                ans=1+help(v,i+1,-1);
            }
            else{
                ans=help(v,i+1,2);
            }
        }
        if(v[i]==3){
            if(prev==1){
                int b=help(v,i+1,2);
                ans=b;
            }
            else if(prev==2){
                int a=help(v,i+1,1);
                ans=a;
            }
            else{
                int a=help(v,i+1,1);
                int b=help(v,i+1,2);
                ans=min(a,b);
            }
        }
    return dp[i][prev+1]=min(ans,g);
}

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<< help(v,0,-1);
    // int prev=-1;
    // ll ans=0;
    // // i con, 2 bal
    // for(int i=0;i<n;i++){
    //     if(v[i]==0){
    //         ans++;
    //         prev=-1;
    //         continue;
    //     }
    //     if(v[i]==1){
    //         if(prev==-1){
    //             ans++;
    //             prev=1;
    //         }
    //         else if(prev==1){
    //             prev=-1;
    //         }
    //         else{
    //             ans++, prev=1;
    //         }
    //     }
    //     if(v[i]==2){
    //         if(prev==-1){
    //             ans++;
    //             prev=2;
    //         }
    //         else if(prev==2){
    //             prev=-1;
    //         }
    //         else{
    //             ans++, prev=2;
    //         }
    //     }
    //     if(v[i]==3){

    //     }
    // }
    // return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}