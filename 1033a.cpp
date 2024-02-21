#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    ll qx,qy,kx,ky,tx,ty;
    cin>>qx>>qy>>kx>>ky>>tx>>ty;
    if(qx<=kx && tx<=qx){
        cout<<"NO\n";
        return;
    }
    if(qx>=kx && tx>=qx){
        cout<<"NO\n";
        return;
    }
    if(qy<=ky && ty<=qy){
        cout<<"NO\n";
        return;
    }
    if(qy>=ky && ty>=qy){
        cout<<"NO\n";
        return;
    }
    if(abs(tx-qx)==abs(ty-qy)){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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