#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll i=0;
    // if(n==k || m==k){
    //     cout<<"YES\n";
    //     return;
    // }
    while((n*i)<=k){
        ll h=n*i+((k-n*i)/m)*m;
        i++;
        // cout<<h<<endl;
        if(h==k){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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