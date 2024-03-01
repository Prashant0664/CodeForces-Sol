#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// 1010011001
// -1 1 -1 2 -2 2 -1
int ans(string nums,int i,int k,int zc,vector<vector<int>>&dp){
    if(k==0){
        return 0;
    }
    if(i==nums.size()){
        return 1e6+5;
    }
    if(dp[i][k]!=-1)return dp[i][k];
    int a=INT_MAX,b=INT_MAX;
    if(nums[i]=='1'){
        a=ans(nums,i+1,zc,zc,dp);
        b=1+ans(nums,i+1,k-1,zc,dp);
    }
    else{
        a=ans(nums,i+1,k-1,zc,dp);
    }
    return dp[i][k]=min(a,b);
}
void solution(){
    // string v="1010011001";
    // int k=v.size()-1;
    // vector<vector<int>>dp(v.length()+1,vector<int>(k+1,-1));
    // cout<<ans(v,0,k,k,dp)<<"\n";
    // return;
    ll n,m,k;
    cin>>n>>m>>k;
    int ans=1e9;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        int si=-1,ei=-1;
        for(int j=0;j<m;j++){
            if(v[i][j]=='o'){
                c++;
            }
            if(c>=k){
                cout<<0<<"\n";
                return;
            }
            if(v[i][j]=='x'){
                if(si==-1){
                    si=j+1;
                    ans=min(ans,helper())
                }
            }
        }
    }
    // string s;
    // // cin>>s;
    // vector<ll>v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
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