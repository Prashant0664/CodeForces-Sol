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

int check(string &a, string &b){
    int c=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            a[i]=='1'?c--:c++;
        }
    }
    return c==0;
}

int help(string a, string b){
    int c=0;
    if(!check(a,b))return -1;
    for(int i=0;i<a.length();i++){
        c+=(a[i]!=b[i]);
    }
    return c;
}

void solution(){
    ll n;
    cin>>n;
    // cin>>m;
    string t,s;
    cin>>s>>t;
    if(s==t){
        pn(0);
        return;
    }
    int c=0;
    int a=-1,b=-1;
    int d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && t[i]=='1'){
            a=i;
        }
        if(s[i]=='1' && t[i]=='0'){
            b=i;
        }
    }
    int ans=1e6;
    int m=help(s,t);
    if(m!=-1){
        ans=help(s,t);
    }
    if(a!=-1){
        string ss=s;
        for(int i=0;i<n;i++){
            if(i!=a)if(ss[i]=='0')ss[i]='1';else ss[i]='0';
        }
        int m=help(ss,t);
        if(m!=-1)
        ans=min(ans,1+help(ss,t));
    }
    if(b!=-1){
        string ss=s;
        for(int i=0;i<n;i++){
            if(i!=b)if(ss[i]=='0')ss[i]='1';else ss[i]='0';
        }
        int m=help(ss,t);
        if(m!=-1)
        ans=min(ans,1+help(ss,t));
    }
    if(ans!=1e6){
        pn(ans);
    }
    else{
        pn(-1);
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