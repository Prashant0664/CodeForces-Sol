#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,c=0;
    cin>>n>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==1)c++;
    }
    if(c==0 || (m%2==0 && c==n)){
        cout<<"NO\n";
        return;
    }
    m-=(n-c);
    if(m<=0 || m%2==1 || c>m){
        cout<<"yes\n";
        return;
    }
    cout<<"no\n";

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