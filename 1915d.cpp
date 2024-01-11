#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    // vector<ll>v(n);
    // for(int i=0;i<n;i++){
        // cin>>v[i];
    // }
    string ans="";
    int i=n-1;
    while(i>=0){
        if(s[i]=='a' || s[i]=='e'){
            ans+=s[i];
            ans+=s[i-1];
            i-=2;
            ans+='.';
        }
        else{
            ans+=s[i];
            ans+=s[i-1];
            ans+=s[i-2];
            i-=3;
            ans+='.';
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.substr(1,ans.size()-1)<<"\n";
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