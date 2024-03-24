#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll x,k,n;
    cin>>x>>k;
    cin>>n;
    ll d=k-x%k;
    if((x+d)>n){
        pn(-1);
        return;
    }
    for(int j=0;(j*k+x+d)<=n;j++){
        cout<<j*k+d<<' ';
    }
    pn('\n');
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