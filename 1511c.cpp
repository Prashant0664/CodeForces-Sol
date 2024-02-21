#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        if(mp.find(k)==mp.end()){
            mp[k]=i;
        }
    }
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        cout<<mp[x]+1<<" ";
        for(auto [i,j]:mp){
            if(j<mp[x]){
                mp[i]++;
            }
        }
        mp[x]=0;
    }
    cout<<"\n";
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