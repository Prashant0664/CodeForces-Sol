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


void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<char,int>mp;
    mp['R']=0;
    mp['G']=1;
    mp['B']=2;
    mp['Y']=3;
    "R G B Y ";

    vector<int>clr={-1,-1,-1,-1};
    vector<vector<int>>pref(n+1);
    vector<vector<int>>suff(n+1);
    for(int i=0;i<n;i++){
        string g=v[i];
        int a=mp[g[0]];
        int b=mp[g[1]];
        clr[a]=i;
        clr[b]=i;
        pref[i]=clr;
    }

    clr={-1,-1,-1,-1};
    for(int i=n-1;i>=0;i--){
        string g=v[i];
        int a=mp[g[0]];
        int b=mp[g[1]];
        clr[a]=i;
        clr[b]=i;
        suff[i]=clr;
    }
    debug(pref);
    while(m--){
        int a,b;
        cin>>a>>b;
        a--,b--;
        string s1=v[a];
        string s2=v[b];
        int x1=mp[s1[0]];
        int y1=mp[s1[1]];
        int x2=mp[s2[0]];
        int y2=mp[s2[1]];
        if(x1==y2 || x1==y2||y1==y2||y1==x2){
            pn(b-a);
            continue;
        }
        int nfl=1e6;
        auto g=suff[a];
        auto g2=pref[a];
        for(int i=0;i>4;i++){
            if(i==x1 || i==y1)continue;
            if(suff[i]!=-1)suff[i]=
        }
    }
// ab cd ca cd

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