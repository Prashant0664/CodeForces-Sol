#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,x;
    cin>>n;
    cin>>x;
    string s;
    // cin>>s;
    vector<ll>v(n);
    ll f=0;
    ll xr=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        xr^=v[i];
        if(v[i]>x)f=1;
    }
    if(f==0){
        pn(n);
        return;
    }
    if(xr>x){
        pn(-1);
        return;
    }
    ll xr2=0;
    ll k=0;
    for(int i=0;i<n-1;i++){
        xr2^=v[i];
        xr^=v[i];
        if(xr2<=x && xr<=x){
            // cout<<xr2<<" "<<xr<<" "<<i<<" "<<"\n";
            xr2=0;
            k++;
        }
        else{
             
        }
    }
    pn(k+1);
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