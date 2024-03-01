#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    string s;
    for(int i=0;i<m;i++){
        s+=char(97+i);
    }
    string ans=s;
    for(int i=1;i<n;i++){
        ans+=s;
    }
    cout<<ans<<endl;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}