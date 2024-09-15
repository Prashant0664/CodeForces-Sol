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
#define mod 1000000007
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

ll w1(ll a,ll b,ll c){
    ll mini=min({a,b,c});
    ll ans=0;
    ans+=mini;
    a-=mini,b-=mini,c-=mini;
    ans+=a/3;
    ans+=b/3;
    ans+=c/3;
    return ans;
}
ll w2(ll a, ll b, ll c){
    // debug(a,b,c);
    ll h=w1(a,b,c);
    ll ans=0;
    ans+=a/3;
    a-=(a/3)*3;
    ll g=ans+w1(a,b,c);
    ans+=b/3;
    b-=(b/3)*3;
    g=max(g,ans+w1(a,b,c));
    ans+=c/3;
    c-=(c/3)*3;
    // debug(a,b,c,ans);
    g=max(g,ans+w1(a,b,c));
    // debug(max({ans,g,h}));
    return max({ans,g,h});
}
void solution(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=0;
    ans=max(ans,w2(b,c,a));
    ans=max(ans,w2(a,b,c));
    ans=max(ans,w2(c,a,b));
    ans=max(ans,w2(a,c,b));
    ans=max(ans,w2(c,b,a));
    ans=max(ans,w2(b,a,c));
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