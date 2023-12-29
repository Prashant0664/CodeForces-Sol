#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll xr=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        xr^=v[i];
    }
    if(xr==0){
        cout<<0<<endl;return;
    }
    // cout<<xr<<endl;
    if(n%2==1){
        cout<<xr<<endl;
    }
    else if(n%2==0 && xr!=0){
        cout<<-1<<endl;
    }
}
int main(){
    int _;
    cin>>_;
    while(_--){
        solution();
    }
}