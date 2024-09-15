/*
       ___      _      ___     ____   _    _   ____     _____  
      |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
        | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
    |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
    |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

                  ____         _      __  __ 
                 |  _ \       / \    |  \/  |
                 | |_) |     / _ \   | \  / |
                 |  _ <     / ___ \  | |\/| |
                 |_|  \_\  /_/   \_\ |_|  |_|

*/
#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007LL
#define pll pair<ll,ll>
#define pii pair<int,int>
typedef long long int ll;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ll modPow(ll x, ll y=mod-2){
    if (y == 0)
        return 1;
    
    ll p = modPow(x, y / 2);
    ll g=((p%mod)*(p%mod))%mod;
    if(y%2==1){
        return ((g%mod)*(x%mod))%mod;
    }
    return g;
}
void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=accumulate(v.begin(),v.end(),0LL);
    ll ans=0;
    for(int i=0;i<n;i++){
        ll a=ans;
        ll k=sum-v[i];
        ll k2=v[i];
        ll a1=k%mod;
        ll a2=k2%mod;
        ll e=((a1)*(a2));
        e%=mod;
        ll g=(mod+(a%mod)+(e%mod))%mod;
        swap(ans,g);
        if(i==n-1){
            goto her;
        }
    }
    her:
    ll k=n,k2=n-1;
    ll a1=k%mod;
    ll a2=k2%mod;
    ll h=((a1)*(a2));
    h%=mod;
    ll gf=modPow(h,mod-2);
    ll e=ans,a=gf;
    a1=e%mod,a2=a%mod;
    h=(a1*a2);
    h%=mod;
    ll res=0;
    res=h;
    // ll res=((e%mod)*(a%mod))%mod;
    pn(res);
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