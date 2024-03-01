#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    ll sum=0,c=0,mini=INT_MAX;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            sum+=abs(v[i][j]);
            mini=min(mini,abs(v[i][j]));
            if(v[i][j]<0){
                c++;
            }
        }
    }
    if(c%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-2*mini<<endl;
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