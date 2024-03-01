#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        ll mx=abs(v[i]-l);
        ll mn=abs(v[i]-r);
        if(v[i]>=l && v[i]<=r){
            cout<<v[i]<<" "; 
            continue;
        }
        if(v[i]>r){
            cout<<r<<" ";
            // cout<<min(r,abs(v[i]-r))<<" ";
        }
        else{
            cout<<l<<" ";
            // cout<<max(abs(v[i]-l),l)<<" ";
        }

    }
        // cout<<endl; 
    cout<<endl;
    return;

}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}