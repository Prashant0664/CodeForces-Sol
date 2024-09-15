#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
typedef long long int ll;
ll help(ll n, ll d, ll sum, ll f, vector<vector<int>>&dp){
    if(sum==0 && f==1){
        return 1;
    }
    if(sum<=0)return 0;
    if(dp[sum][f]!=-1)return dp[sum][f];
    ll ans=0;
    for(int j=1;j<n+1;j++){
        if(j>=d){
            ans+=help(n,d,sum-j,1,dp);
        }
        else{
            ans+=help(n,d,sum-j,f,dp);
        }
        ans%=mod;
    }
    return dp[sum][f]=ans;
}

// ll help(ll n, ll m, ll sum, ll f, vector<vector<int>>&memo){
//     if(sum==0 && f==1){
//         return 1;
//     }
//     if(sum<0){
//         return 0;
//     }
//     ll ans=0;
//     if(sum==0 && f==0)return 0;
//     if(memo[sum][f]!=-1)return memo[sum][f];
//     for(int i=1;i<=n;i++){
//         if(i>=m){
//             ans+=help(n, m, sum-i, 1, memo);
//         }
//         else{
//             ans+=help(n, m, sum-i, f, memo);
//         }
//         ans%=mod;
//     }
//     return memo[sum][f]=ans;
// }

void solution(){
    ll sum,n,d;
    cin>>sum>>n>>d;
    vector<vector<int>>dp(sum+1,vector<int>(2,-1));
    ll ans=help(n, d, sum, 0LL, dp);
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