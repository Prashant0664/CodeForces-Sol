#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik,n) for(int i=ik;i<n;i++)
typedef long long int ll;
vector<ll>help(ll n){
        vector<ll>v(1+n,0);
        vector<ll>v2(n+1);
        int k=1;
        for(int i=1;i<=n;i++){
            if(!v[i]){
                for(int j=i;j<=n;j*=2){
                    v[j]++;
                    v2[k++]=(j);
                }
            }
        }
        vector<int>di;
        for(int i=1;i<=n;i++){
            di.push_back(__gcd(v2[i],v2[i%n+1]));
            // cout<<v[i]<<" ";
        }

        return v2;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
               // cout<<endl;
               vector<ll>v2=help(n);
        for(int i=0;i<v2.size()-1;i++){
            // cout<<di[i]<< " ";
            cout<<v2[i+1]<<" ";
        }
        cout<<endl;
            // cin>>v[i];
    }
}