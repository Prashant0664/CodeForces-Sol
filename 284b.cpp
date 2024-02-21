#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    int iK=0,a=0,f=0;
    for(auto i:s){
        if(i=='F') f++;
        if(i=='A') a++;
        if(i=='I') iK++;
    }
    if(iK==1)cout<<iK<<"\n";
    else if(a>0 && iK==0) cout<<a<<"\n";
    else cout<<0<<"\n";
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}