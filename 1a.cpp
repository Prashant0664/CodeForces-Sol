#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    long long ans=1;
    ans*=(n/k+((n%k==0)?0:1));
    ans*=(m/k+((m%k==0)?0:1));
    cout<<ans<<endl;
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