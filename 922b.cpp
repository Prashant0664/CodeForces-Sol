#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    ll ans=0;
    set<vector<ll>>st;
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j++){
            ll xr=i^j;
            ll mini=abs(i-j);
            ll maxi=i+j;
            // std::cout<<i<<" "<<j<<" "<<xr<<" \n";
            if(xr>mini && xr<maxi && xr<=n){
                    // std::cout<<n<<" ;";
                // if(xr<=n){
                    // std::cout<<("xr ")<<xr<<"\n";
                // }
            // std::cout<<i<<" "<<j<<" "<<xr<<" \n";
                // ps(i);ps(j);pn(xr);
                st.insert({min({i,j,xr}),max({i,j,xr}),i+j+xr-min({i,j,xr})-max({i,j,xr})});
                // return;
                // ans++;
            }
        }
    }
    std::cout<<st.size();
    std::cout<<"\n";
    // pn(st.size());
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}