#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>takee(ll n){
    vector<ll>v(1+n);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    return v;
}
void check(ll &ind, ll &k){
        if(ind<=k){

        }
        else ind=1;
        return;
}
ll solvi(ll n,ll k,ll d,vector<ll>v1,vector<ll>v2, ll te, ll ans, ll ind){
    ll cur=0;
    for(ll indexi=1;indexi<=te;indexi++){
        ind++;
        cur=0;
        for(ll i=1;i<=n;i++)
            if(v1[i]==i)cur++;
        cur=cur + (d-indexi)/2;
        for(int i=1;i<=v2[ind-1];i++){
            v1[i]++;
        }
        ans=max(cur,ans);
        check(ind,k);
    }
    return ans;
}
void solution(){
    ll n,k,d;
    cin>>n>>k>>d;
    ll ans=0,ind=1;
    vector<ll>v1(n+1),v2(k+1);
    v1=takee(n);
    v2=takee(k);
    ll te=0;
    if(2*n+1<d){
        te=2*n+1;
    }
    else{
        te=d;
    }
    cout<<solvi(n,k,d,v1,v2,te,ans,ind)<<endl;
    return;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
}