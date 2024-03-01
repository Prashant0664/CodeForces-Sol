#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n;
        map<ll,ll>mp;
        map<ll,ll>mp2;
        vector<vector<ll>>v(n);
        for(int i=0;i<n;i++){
            vector<ll>nn;
            nn.pb(i);
            ll k;
            cin>>k;
            nn.pb(k);
            v[i]=nn;
        }
        sort(v.begin(),v.end(),[](vector<ll>a,vector<ll>b){return a[1]>b[1];});
        for(int i=0;i<n;i++){
            // cout<<v[i][1]<<" "<<v[i][0]<<endl;
            v[i].pb(i+1);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i][2]<<" ";
        }
        cout<<endl;
        // reverse(v.b÷egin(),v.end());
        
    }
}