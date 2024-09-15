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

ll solve(vector<ll>&pref,vector<ll>&suff,vector<ll>&v,vector<ll>&v2, int i, ll ans){
    ll ans2=0;
    int l=i,r=i+1;
    while(l>=0 && r<v2.size()){
        ans2+=(v[l]*v2[r]);
        ans2+=(v[r]*v2[l]);
        // cout<<ans2<<" ";
        ans=max(ans,ans2+pref[l]+suff[r+1]);
        // cout<<l<<" "<<r<<" "<<ans2<<endl;
        l--,r++;
        // ans=0;
    }
    return ans;
}
ll solve2(vector<ll>&pref,vector<ll>&suff,vector<ll>&v,vector<ll>&v2, int i, ll ans){
    ll ans2=v[i]*v2[i];
    int l=i-1,r=i+1;
    while(l>=0 && r<v2.size()){
        ans2+=(v[l]*v2[r]);
        ans2+=(v[r]*v2[l]);
        ans=max(ans,ans2+pref[l]+suff[r+1]);
        // cout<<l<<" "<<r<<" "<<ans;
        // // endo;
        l--,r++;
    }
    return ans;
}
void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n,0),v2(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    vector<ll>pref(n+1,0);
    vector<ll>suff(n+1,0);
    vector<ll>v3;
    for(ll i=0;i<n;i++){
        ll x=v[i]*v2[i];
        v3.push_back(x);
    }
    for(int i=0;i<n;i++){
        pref[i+1]=v3[i]+pref[i];
    }
    for(int i=n;i>=1;i--){
        suff[i-1]=suff[i]+v3[i-1];
    }
    // debug(suff);
    // debug(pref);
    ll ans=pref[n];
    // ll g=solve(pref,suff,v,v2,0,ans);
    // debug(g);
    // ans=max(ans,g);
    for(int i=0;i<n;i++){
        ans=max(ans,solve(pref,suff,v,v2,i,ans));
        ans=max(ans,solve2(pref,suff,v,v2,i,ans));
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