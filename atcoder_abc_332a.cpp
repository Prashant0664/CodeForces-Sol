#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,k,s;
    cin>>n>>k>>s;
    // string s;
    vector<ll>v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        sum+=(a*b);
    }
    if(sum<k){
        cout<<sum+s<<endl;
    }
    else{
        cout<<sum<<endl;
    }
    


    
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}