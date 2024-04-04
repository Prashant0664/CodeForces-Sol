#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n; cin>>n;
    vector<ll> dp(n+5,0);
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll x; cin>>x;
        dp[i]=min(dp[i-1]+1,x);
        ans+=dp[i];
    }
    cout<<ans<<"\n";
// }
    // ll n,m;
    // cin>>n;
    // // cin>>m;
    // string s;
    // // cin>>s;
    // vector<ll>v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // int in=1;
    // int ans=0;
    // ll c=0;
    // for(int i=0;i<n;i++){
    //     if(v[i]<in){
    //         ans+=(c*(c+1))/2;
    //         in=1;
    //         c=1;
    //     }
    //     else{
    //         c++;
    //         in++;
    //     }
    // }
    // ans+=c*(c+1)/2;
    // pn(ans);
    // pn("---------")
    // return;
    
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}