#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll d;
    cin>>d;
    vector<ll>v;
    ll a=0,b=INT_MAX;
    for(ll i=1;i*i<=d;i++){
        if(abs(i*i-d)<b){
            b=abs(i*i-d);
            a=i;
        }
    }
    cout<<a<<endl;
    b=INT_MAX;
    ll c=0;
    for(ll i=1;i*i<=d;i++){
        if(abs(a*a+i*i-d)<b || abs((a-1)*(a-1)+i*i-d)<b || abs((a+1)*(a+1)+i*i-d)<b){
            b=min({abs(a*a+i*i-d),abs((a-1)*(a-1)+i*i-d),abs((a+1)*(a+1)+i*i-d)});
            // b=abs(a*a-i*i-d);
            c=i;
        }
    }
    return;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}