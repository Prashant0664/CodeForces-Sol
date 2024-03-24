#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    unordered_map<ll,ll>mp;
    ll maxi=0;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        mp[k]++;
        maxi=max(maxi,mp[k]);
    }
    cout<<maxi<<endl;
    
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