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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b && a!=c){
        cout<<c<<endl;return;
    }
    if(b==c && b!=a){
        cout<<a<<endl;
        return;
    }
    if(a==c && a!=b){
        cout<<b<<endl;
        return;
    }

    
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}