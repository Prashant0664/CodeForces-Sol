#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    if(n==1){
        cout<<v[0]-1<<endl;
    }
    else{
        for(int i=0;i<n-1;i++){
            if(i==0 && v[i]>v[i+1]){
                ans+=(v[i]-v[i+1]);
                ans--;
                continue;
            }
            if(v[i]>v[i+1]){
                ans+=(v[i]-v[i+1]);
            }
        }
        cout<<ans<<endl;
    }
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