#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
typedef long long int ll;

bool help(ll m,ll b,ll s,ll c,vector<pair<ll,ll>>&v,ll n){
    if(m==0)return 1;
    ll sum=0;
    for(int i=0;i<3;i++){
        ll b2=m*b;
        ll s2=m*s;
        ll c2=m*c;
        sum+=b2*v[0].second;
        sum+=s2*v[1].second;
        sum+=c2*v[2].second;
    }
    return sum<=n;
}
void solution(){
    ll b,s,c,n;
    string t;
    cin>>t;
    for(auto &i:t){
        if(i=='B')b++;
        else if(i=='S')s++;
        else c++;
    }
    vector<pair<ll,ll>>v(3);
    for(int i=0;i<3;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<3;i++){
        cin>>v[i].second;
    }
    cin>>n;
    ll l=0,r=1e13;
    ll ans=0;
    while(l<=r){
        ll m=(l+r)>>1;
        if(help(m,b,s,c,v,n)){
            ans=m;
            l=m+1;
        }else{
            r=m-1;
        }
    }
    pn(ans);
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