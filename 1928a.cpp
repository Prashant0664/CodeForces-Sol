#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    if((n==1 && m==1) || (m%2==1 && n%2==1)){
        cout<<"No\n";
        return;
    }
    
    if(n%2==1){
        int k=n,l=m;
        l/=2;
        k*=2;
        if((k==n && l==m) || (k==m && l==n)){
            cout<<"No\n";
            return;
        }
    }
    if(m%2==1){
        int k=n,l=m;
        k/=2;
        l*=2;
        if((k==n && l==m) || (k==m && l==n)){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
    
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