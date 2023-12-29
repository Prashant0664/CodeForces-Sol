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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int b=0;
    map<char,int>mp;
    set<char>st1,st2,st3;
    for(int i=0;i<3;i++){
        mp[s1[i]]++;
        mp[s2[i]]++;
        mp[s3[i]]++;
        
    }
    if(mp['A']!=3){
        cout<<'A'<<endl;
        return;
    }
    if(mp['B']!=3){
        cout<<'B'<<endl;
        return;
    }
    if(mp['C']!=3){
        cout<<'C'<<endl;
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