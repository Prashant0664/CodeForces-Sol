#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<ll>v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        ll h;
        cin>>h;
        v.push_back(h);
        if((v[i+1]-v[i])*a>(b)){
            k-=(b);
        }
        else{
            // cout<<v[i+1]-v[i]<<" ";
            k-=((v[i+1]-v[i])*a);
        }
        // cout<<k<<" ";
        if(k<=0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
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