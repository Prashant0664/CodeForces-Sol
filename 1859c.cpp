#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(i,n) for(i;i<n;i++)
typedef long long int ll;
ll ans(ll s,ll n){
ll a,b,c,d,e;
        for(int i=1;i<=n;i++){
            a=0;
            b=0;
            c=1;
            d=n;
            e=1;
            for(int j=1;j<=i;j++){
                a+=c*e;
                b=max(b,c*d);
                ++e;
                ++c;
            }
            for(int j=i+1;j<=n;j++){
                a+=c*d;
                b=max(b,c*d);
                // ++e;
                // ++c;
                --d;
                ++c;

            }
            s=max(s,a-b);
        }
        return s;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        // string s;
        // cin>>s;
        // n=s.length();
        ll s=0;
        s=(n*(n+1)*(2*n+1))/6;
        // cout<<s<<endl;
        s=0;
        for(int i=1;i<=n;i++){
            s+=i*i;
        }
        s=s-(n*n);
        s=s-((n-1)*(n-1));
        s+=(n*(n-1));
        // s-=(n-1)*n;
        // s-=(n*(n-1));
        // s+=()
        // cout<<s<<endl;
        
        cout<<ans(s,n)<<endl;
        // continue;
        vector<ll>v(n);
        vector<ll>v2;
        vector<ll>v3;
        vector<vector<ll>>v4;
        for(int i=0;i<n;i++){
            int m;
            // cin>>m;
            // cin>>v[i];
        }
        // cout<<endl;

    }
}