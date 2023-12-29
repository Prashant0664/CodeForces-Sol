#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll help(vector<ll>v1,vector<ll>v2,int i,int m,vector<vector<ll>>&v){
    if(i==v1.size() || m==0){
        ll mini=INT_MAX;
        ll maxi=INT_MIN;
        for(int j=0;j<v1.size();j++){
            mini=min(v1[j],mini);
            maxi=max(maxi,v1[j]);
        }
        return maxi-mini;
    }
    if(v[i][m]!=-1){
        return v[i][m];
    }
    int ns=0;
    ns=help(v1,v2,i+1,m,v);
    int sp=0;
    ll j=v1[i];
    v1[i]=v2[i];
    v2[i]=j;
    sp=help(v1,v2,i+1,m-1,v);
    return v[i][m]=min({sp,ns});
}
void solution(){
 ll n;
 cin>>n;
 vector<ll>v(n);
 ll sum=0;
 for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
 }
 ll r=sqrt(sum);
 if(r*r==sum){
    cout<<"YES\n";
    return;
 }
 cout<<"NO\n";
    
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}