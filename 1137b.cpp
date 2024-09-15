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

string longestPrefix(string &s) {
    long h = 0, mul = 1, inverseMod26 = 576923081;
    for (int i = 0, j = s.length() - 1; j >= 0; ++i, --j) {
        h = (h * 26 + s[i] - '0') % mod;
        mul = mul * 26 % mod;
    }
    long h1 = h, h2 = h;
    for (int i = 0, j = s.length() - 1; j > 0; ++i, --j) {
        mul = mul * inverseMod26 % mod;
        h1 = (h1 - (s[j] - '0')) * inverseMod26 % mod;
        h2 = (mod + h2 - mul * (s[i] - '0') % mod) % mod;
        if (h1 == h2) {
            if (s.compare(0, j, s, i + 1, s.size() - i - 1) == 0)
                return s.substr(0, j);
        }
    }
    return "";
}
void solution(){
    ll n,m;
    // cin>>n;
    // cin>>m;
    string t,s;
    cin>>s;
    cin>>t;
    map<char,int>mp;
    for(auto &i:s){
        mp[i]++;
    }
    n=s.length();
    int i=0;
    string common=longestPrefix(t);
    debug(common);
    int f=0;
    if(common.length()>=t.length()/2){
        f=1;
    }
    while(n--){
        if(mp[t[i]]>0){
            cout<<t[i];
            mp[t[i]]--;
        }
        else break;
        i++;
        if(i==t.length())break;
        i%=t.length();
    }
    i=common.length();
    while(n--){
        if(mp[t[i]]>0){
            cout<<t[i];
            mp[t[i]]--;
        }
        else break;
        i++;
        if(i==t.length()){
            i%=(t.length());
            i+=common.length();
        }
    }
    for(auto &[i,j]:mp){
        while(j--){
            cout<<i;
        }
    }
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