#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll l=m,r=m;
    for(int i=0;i<k;i++){
        ll a,b;
        cin>>a>>b;
        if(max(l,a)<=min(r,b)){
            l=min(l,a);
            r=max(r,b);
        }
    }
    pn(r-l+1);
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