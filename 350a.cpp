#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    ll mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
    }
    ll ans=0;
    ll tl=max(maxi,mini*2);
    for(int i=0;i<m;i++){
        ll k;
        cin>>k;
        if(k<=tl)ans=-1;
    }
    if(0==ans)pn(tl)
    else pn(ans)
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