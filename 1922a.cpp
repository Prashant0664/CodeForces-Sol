#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    string s,t,m;
    cin>>s>>t>>m;
    for(int i=0;i<n;i++){
        if(s[i]!=m[i] && t[i]!=m[i]){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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