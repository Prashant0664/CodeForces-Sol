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
#define mod 421412341324321
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

void hashing(string s, vector<ll>&v, map<ll,ll>&mp){
    ll mul=0;
    ll mul2=0;
    ll prev=1;
    ll n=s.length();
    for(int i=0;i<n;i++){
        ll g=s[i];
        mul*=257;
        mul+=g;
        mul%=mod;
        mul2+=prev*s[n-1-i];
        prev*=257;
        mul2%=mod;
        prev%=mod;
        if(mul==mul2){
            mp[i+1]=mul;
        }
    }
    return;
}
bool check(vector<ll>&v, string &s, ll mid, map<ll,ll>&mp){
    if(mid==0)return 1;
    ll mul=0;
    ll mul2=1;
    ll prev=1;
    for(int i=0;i<mid;i++){
        mul*=257;
        mul+=s[i];
        mul%=mod;
        prev*=257;
        prev%=mod;
    }
    for(int i=mid;i<s.length()-1;i++){
        mul*=257;
        mul+=s[i];
        mul%=mod;
        mul-=prev*s[i-mid];
        while(mul<0){
            mul+=mod;
        }
        if(mul==mp[mid]){
            return 1;
        }
    }
    return 0;
}
void solution(){
    ll n,m;
    string s;
    cin>>s;
    n=s.length();
    vector<ll>v;
    ll l=1;
    // for(ll i=1;i<=257;i++)
        // l=lcm(l,i);
    map<ll,ll>mp;
    hashing(s,v,mp);
    if(mp.size()==0){
        cout<<"Just a legend\n";
        return;
    }
    for(auto &[i,j]:mp){
        v.push_back(i);
    }
    debug(v);
    hashing(s,v,mp);
    ll low=0,high=v.size()-1;
    ll ans=-1;
    while(low<=high){
        ll mid=(low+high)>>1;
        if(check(v,s,v[mid],mp)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(ans==-1){
        pn("Just a legend")
        return;
    }
    for(int i=0;i<v[ans];i++){
        cout<<s[i];
    }
    // pn("_");
    endo;
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