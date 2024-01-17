#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int s1=0,t1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1' && t[i]=='0'){
            s1++;
        }
        if(t[i]=='1' && s[i]=='0'){
            t1++;
        }
    }
    int ans=abs(s1-t1);
    int f=0;
    if(s1>t1){
        f=s1-ans;
    }
    else{
        f=t1-ans;
    }
    // cout<<f<<" ";
    ans+=f;
    cout<<ans<<endl;
    return;
    for(int i=0;i<n;i++){
        if(s[i]==t[i] && s[i]=='0'){
            continue;
        }
        
    }
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
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