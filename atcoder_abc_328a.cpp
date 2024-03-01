#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n,c,m,k,a,b=0,x;
    string s;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c<=x){
            b+=c;
        }
    }
    cout<<b<<endl;
    // vector<ll>v(n);
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}