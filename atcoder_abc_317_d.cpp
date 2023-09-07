#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik, n) for (int i = ik; i < n; i++)
typedef long long int ll;

ll help(vector<vector<ll>>v,ll target,ll n,vector<vector<ll>>&dp){
    if(target<=0){
        return 0;
    }
    if(n==0){
        if(target-v[n][1]>0){
            return 1e9;
        }
        return v[n][0];
    }
    if(dp[n][target]!=-1){
        return dp[n][target];
    }
    ll take=v[n][0]+help(v,target-v[n][1],n-1,dp);
    ll ntake=help(v,target,n-1,dp);
    return dp[n][target]=min(take,ntake);
}



int main()
{
    
    ll n;
    cin>>n;
    vector<vector<ll>>v;
    ll count=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        if(b<a){
            count+=c;
        }
        else{
            v.pb({abs(a-b)/2+1,c});
        }
        sum+=c;
    }
    int f=0;
    if(count>sum/2+sum%2){
        cout<<0<<endl;
    }
    else{
        // sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i][0]<< " - ";
        // }
        // cout<<endl;
        ll target=sum/2+sum%2-count;
        ll ans=0;
        // cout<<sum<<endl;
        // cout<<count<<endl;
        // cout<<target<<endl;
        // cout<<"---\n";
        vector<vector<ll>>dp(n+1,vector<ll>(target+1,-1));
        ans=help(v,target,v.size()-1,dp);
        cout<<ans<<endl;
    }

}