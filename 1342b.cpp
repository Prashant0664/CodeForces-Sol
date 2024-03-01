#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    // cin>>n;
    string s;
    cin>>s;
    n=s.length();
    ll oc=0,zc=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            oc++;
        }else{
            zc++;
        }
    }
    if(zc==n || oc==n){
        cout<<s<<endl;
        return;
    }
    cout<<s[0];
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            if(s[i]=='0'){
                cout<<'1';
            }else{
                cout<<'0';
            }
            cout<<s[i];
        }
        else{
            cout<<s[i];
        }
    }
    cout<<endl;
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