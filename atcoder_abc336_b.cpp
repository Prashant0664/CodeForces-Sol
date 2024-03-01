#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    ll ans=0;
    string s="";
    while(n!=0){
        int j=n%2;
        n/=2;
        if(j==1)break;
        ans++;
        // s+=to_string(j);
    }
    cout<<ans<<endl;
    return;
    cout<<s<<endl;
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