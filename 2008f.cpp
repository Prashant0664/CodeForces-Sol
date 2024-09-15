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


ll help(vector<ll>&v){
    ll gcdd=0;
    for(int i=0;i<v.size();i++){
        gcdd=gcd(v[i],gcdd);
    }
    return gcdd;
}
void help2(vector<ll>&v, ll k){
    bool f=0;
    ll n=v.size();
    for(int i=0;i<n-1;i++){
        if(f==1)continue;
        ll d=v[i+1]-v[i]-1;
        if(k>d)
            k-=d;
        else{
            cout<<v[i]+k<<endl;
            f=1;
        }
    }
    if(f==1){
        return;
    }
    pn(v[n-1]+k);
}
void help(){
    ll n,m,k=0;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll j;
        cin>>j;
        v.push_back(j);
    }
    ll g=help(v);
    if(g==0){
        if(n!=1){
            cout<<k<<endl;
            return;
        }
    }
    else if(g==1 && n!=1){
        pn(n+k-1);
        return;
    }
    ll c=0;

    if(n==1)
        if(k>v[0]){
            pn(k);
            return;
        }
        else{
            pn(k-1);
            return;
        }
    if(g==0 && n!=1){
        cout<<k<<endl;
        return;
    }
    if(g==1 && n!=1){
        cout<<n+k-1<<endl;
        return;
    }
    for(ll i=0;i<n;i++){
        v[i]=g*i;
    }
    help2(v,k);
    
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        help();
    }
    return 0;
}