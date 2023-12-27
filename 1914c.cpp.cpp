#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int help(vector<int>v,vector<int>v2,int i,int k,set<int>st,vector<int>vis,vector<vector<vector<int>>>&dp){
    if(k==0){
        return 0;
    }
    if(i==v.size()){
        int m=0;
        if (!st.empty())
            m = *(st.rbegin()); 
        return k*m;
    }
    if(dp[i][k][vis[i]]!=-1){
        return dp[i][k][vis[i]];
    }
    int t=0;
    int nt=0;
    if(vis[i]==1){
        int m=0;
        if (!st.empty())
            m = *(st.rbegin()); 
        t+=m;
        t+=help(v,v2,i,k-1,st,vis,dp);
        return dp[i][k][vis[i]]=t;
    }
    else{
        int m=0;
        if (!st.empty())
            m = *(st.rbegin()); 
        int h=0;
        h=m+help(v,v2,i,k-1,st,vis,dp);
        int mm=0;
        nt+=v[i];
        st.insert(v2[i]);
        vis[i]=1;
        mm=nt+help(v,v2,i+1,k-1,st,vis,dp);
        return dp[i][k][vis[i]]=max(h,mm);
    }
}
void solution(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    int ans=0,f=0,maxi=0;
    for(int i=0;i<n;i++){
        if(i==k)break;
        else{
            ans=ans+v[i],maxi=max(maxi,v2[i]);
            f=max(ans+(k-i-1)*maxi,f);
        }
    }
    cout<<f<<endl;
    return;
    vector<int>vis(1000000+6,0);
    set<int>st;
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(k+1,vector<int>(n+10,-1)));
    cout<<help(v,v2,0,k,st,vis,dp)<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
}