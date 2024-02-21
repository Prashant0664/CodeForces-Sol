#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x=0;
    x=a/2+b/2+c/2;
    ll mx=max(a-1,0LL)+max(b-1,0LL)+max(c-1,0LL);
    // cout<<mx<<" ";
    ll mn=max({a,b,c})-min({a,b,c})-1-(a+b+c-(max({a,b,c})+min({a,b,c})));
    if(d<=mx && d>=mn){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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