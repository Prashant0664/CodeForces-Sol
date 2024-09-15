#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
typedef long long int ll;

void solution(){
    ll n,k,l;
    cin>>n>>k>>l;
    ll o=k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=accumulate(v.begin(),v.begin()+k+1,0LL);
    if(l==0){
        pn(sum);
        return;
    }
    if(l>=1){
        ll maxi=0;
        ll ans=0,rans=0;
        for(int k=0;k<=l;k++){
            ans=0;
            maxi=0;
            for(int i=0;i<o-k*2+1;i++){
                maxi=max(maxi,v[i]+v[i+1]);
                ans+=v[i];
            }
            rans=max(rans,ans+maxi*k);
        }
        pn(rans);
        
    }
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