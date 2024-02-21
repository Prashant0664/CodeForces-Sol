#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    int e=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(e==1 || v[i]%2==0){
            cout<<1<<endl;
            e=1;
        }
        else cout<<2<<endl;
    }
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