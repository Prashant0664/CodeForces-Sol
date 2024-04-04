#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    vector<ll>v(n);
    ll f=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
        ll h=v[i]%(m+k);
        if(h%(m+k)>=m){
            f=1;
        }
    }
    if(f==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}