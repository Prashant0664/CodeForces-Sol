#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll help(ll m){
    return max(0LL,m-2);
}
bool check(vector<ll>v,ll m,ll n){
    if((n==v[m-1] && 2==v[0]) || ((n-1)==v[m-1] && 1==v[0]))
        return 1;
    return 0;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
    ll n,m,k;
    cin>>n>>m>>k;
    ll ans=0;
    vector<ll>v(m,0);
    for(int i=0;i<m;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<m;i++){
        if(v[i]-v[i-1]>=3){
            v.push_back(v[i-1]+2);
        }
    }
    for(int i=1;i<m;i++)
        if((v[i]-v[i-1])==2)
            ans++;
    if((check(v,m,n)))
        ans++;
    ll j=help(m);
    cout<<ans+j<<endl;
    }
    return 0;
}