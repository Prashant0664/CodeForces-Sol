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
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=1;
    ll c=count(v.begin(),v.end(),1);
    if(c==0){
        pn(0);
        return;
    }
    ll s=0,e=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            s=i;
            break;
        }
    }
    ll prev=s+1;
    for(int i=s+1;i<n;i++){
        if(v[i]==1){
            e=i;
            ans*=(e+1-prev);
            // cout<<ans<<endl;
            prev=e+1;
        }
    }
    pn(ans);
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