#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        for(int i=0;i<n-1;i++){
            ll m;
            cin>>m;
            v.pb(m);
        }
        sort(v.begin(),v.end());
        ll sum=0;
        for(int i=1;i<n-2;i++){
            sum+=v[i];
        }
        ll left=k-sum;
        if(left<0 || left>100){
            cout<<-1<<endl;
            continue;
        }
        if(left==v[0]){
            cout<<0<<endl;
            continue;
        }
        if(left==v[n-2]){
            cout<<v[n-2]<<endl;
            continue;
        }
        if(left>=v[0] && left<=v[n-2]){
            cout<<left<<endl;
            continue;
        }
        cout<<-1<<endl;

    }
}