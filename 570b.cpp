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
    cin>>m;
    if(n==1){
        pn(1);
        return;
    }
    if(m==n){
        pn(max(1LL,m-1));
        return;
    }
    if(m==n-1 && n==2){
        pn(n);
        return;
    }
    if(m==n-1){
        pn(m-1);
        return;
    }
    if(m<=n/2){
        pn(m+1);
        return
        ;
    }
    else{
        pn(m-1);
        return;
    }
    pn(m+1);
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