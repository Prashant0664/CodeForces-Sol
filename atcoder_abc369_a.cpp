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
set<vector<int>>st;
int help(vector<int>v, int a, int b, int c){
    v[0]=a,v[1]=b,v[2]=c;
    if(v[0]==0){
        v[0]=v[1]-(v[2]-v[1]);
        sort(v.begin(),v.end());
        st.insert(v);
        return 1;
    }
    if(v[1]==0){
        if((v[0]+v[2])%2!=0)return 0;
        v[1]=(v[0]+v[2])>>1;
        sort(v.begin(),v.end());
        st.insert(v);
        return 1;
    }
    if(v[2]==0){
        v[2]=v[1]+(v[1]-v[0]);
        sort(v.begin(),v.end());
        st.insert(v);

        
return 1;
    }
}

void solution(){
    int n,m;
    int a,b;
    cin>>a>>b;
    vector<int>v(3,0);
    string s;
    // cin>>s;
    int ans=0;
    ans+=help(v,a,b,0);
    ans+=help(v,a,0,b);
    ans+=help(v,0,a,b);
    ans+=help(v,0,b,a);
    ans+=help(v,b,a,0);
    ans+=help(v,b,0,a);
    pn(st.size());
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