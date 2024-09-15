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

bool check(string s, ll k){
    int n=s.length();
    int z=0,o=0;
    for(int i=0;i<k;i++){
        if(s[i]=='0')z++;
        else o++;
    }
    return z==o;
}

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    cin>>s;
    vector<vector<char>>v(m+1);
    vector<char>pre(m+1,'z');
    int j=0;
    int o=0,z=0;
    while(j<n){
        if(pre[j%m]=='z')pre[j%m]=s[j];
        else if(pre[j%m]=='?' && s[j]!='?')pre[j%m]=s[j];
        else if(s[j]!='?' && pre[j%m]!='?' && pre[j%m]!='z' && pre[j%m]!=s[j]){
            // pn(j)
            pn("No");
            return;
        }
        j++;
    }
    debug(pre);

    // 7 4
    // 1?0??1?
    // 1100110
    // 1?
    // ?1
    // 0?
    // ?
    j=0;
    int q=0;
    vector<int>qv;
    for(int i=0;i<n;i++){
        s[i]=pre[i%m];
    }
    while(j<m){
        if(s[j]=='0')z++;
        else if(s[j]=='1')o++;
        else{
            qv.push_back(j);
            q++;
        }
        j++;
    }
    int h=0;
    while(h<qv.size()){
        if(z>o){
            pre[qv[h++]]='1';
            o++;
        }
        else{
            pre[qv[h++]]='0';
            z++;
        }
    }
    for(int i=0;i<n;i++){
        s[i]=pre[i%m];
    }
    // pn(s);
    if(check(s,m)){
        pn("Yes");
    }
    else{
        pn("No");
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