#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
       ll n,m;
       cin>>n>>m;
       vector<ll>v;
       ll k=0;

       long long int mm=m;
       for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a;
        k+=a%mod;
        m-=((a%mod)*(a%mod))%mod;
        v.push_back(a);
       }




       k=k*2;
        ll a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
        b=k%mod;
        c=-m%mod;
        a=n%mod;
        discriminant =( ((b%mod)*(b%mod))%mod - (4*(a%mod)*(c%mod))%mod)%mod;
        // cout<<a<<" "<<b<<" "<<c<<endl;
    if (discriminant > 0) {
        x1 = ((-b + (ll)(sqrt(discriminant))%mod)%mod) / (2*a%mod);
        x2 = ((-b - (ll)(sqrt(discriminant))%mod)%mod) / (2*a%mod);
        cout << max(x1,x2)/2<<endl;
    }
    
    else {
        x1 = -b/(2*a);
        cout<<x1/2<<endl;
        continue;
    }



    }
    return 0;
}