#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m1(ll a,ll b,ll c,ll d){
    ll x,y;
    x=min(b,a)*d;
    y=max(a,b)-min(a,b);
    y*=c;
    return x+y;

}
ll m2(ll a,ll b,ll c,ll d){
    ll x,y;
    x=max(b,a)*d;
    y=min(a,b)-max(a,b);
    y=abs(y)*c;
    return x+y;
}
ll m3(ll a,ll b,ll c,ll d){
    ll y=b*c+a*c;
    return y;
}
void solution(){
    ll n,m,c1,c2;
    cin>>n>>m>>c1>>c2;
    ll a,b,c,d;
    a=b=c=d=0;
    a=m1(n,m,c1,c2);
    b=m2(n,m,c1,c2);
    c=m3(n,m,c1,c2);
    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
    cout<<min(a,min(b,c))<<"\n";

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