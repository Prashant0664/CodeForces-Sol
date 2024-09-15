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

int check(vector<int>v, int n, int a, int b){
    int diff=b-a;
    int c=0;
    v[1]=b;
    for(int i=2;i<n;i++){
        if(v[i]-v[i-1]==diff)continue;
        else if(v[i]+1-v[i-1]==diff){
            c++;
            v[i]++;
        }
        else if(v[i]-1-v[i-1]==diff){
            c++;
            v[i]--;
        }
        else return -1;
    }
    return c;
}

void solution(){
    int n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n<=2){
        pn(0);
        return;
    }
    int ans=INT_MAX;
    int a=-1;
    a=check(v,n,v[0],v[1]);
    if(a!=-1)ans=min(ans,a);
    a=check(v,n,v[0]-1,v[1]);
    if(a!=-1)ans=min(ans,a+1);
    a=check(v,n,v[0],v[1]-1);
    if(a!=-1)ans=min(ans,a+1);
    a=check(v,n,v[0]+1,v[1]);
    if(a!=-1)ans=min(ans,a+1);
    a=check(v,n,v[0],v[1]+1);
    if(a!=-1)ans=min(ans,a+1);
    a=check(v,n,v[0]-1,v[1]-1);
    if(a!=-1)ans=min(ans,a+2);
    a=check(v,n,v[0]-1,v[1]+1);
    if(a!=-1)ans=min(ans,a+2);
    a=check(v,n,v[0]+1,v[1]-1);
    if(a!=-1)ans=min(ans,a+2);
    a=check(v,n,v[0]+1,v[1]+1);
    if(a!=-1)ans=min(ans,a+2);
    if(ans==INT_MAX){
        pn(-1);
    }else{
        pn(ans);
    }
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