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
typedef double ll;

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
    double n,m;
    cin>>n;
    // cin>>m;
    string s;
    m=n;
    // cin>>s;
    vector<pair<double,int>>v,v2;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if((double((int)x))==x){
            v2.push_back({x,i});
            sum+=x;
        }
        else v.push_back({x,i});
    }
    n=v.size();
    ll sum2=sum;
    debug(sum);
    for(int i=0;i<n;i++){
        if(v[i].first<0){
            sum+=(int)(v[i].first);
            v[i].first=(int)v[i].first;
        }
        else{
            sum+=int(v[i].first)+1;
            v[i].first=(int)v[i].first+1;
        }
        // pn(sum);
    }
    int i=0;
    debug(v);
    while(sum>0){
        if(sum>1){
            v[i].first-=1;
            sum-=1;
        }
        else if(sum==1){
            v[i].first-=1;
            sum--;
        }
        else if(sum==0){
            break;
        }
        i++;
    }
    vector<int>ans(m,0);
    for(int i=0;i<n;i++){
        ans[v[i].second]=v[i].first;
    }
    for(auto &i:v2){
        ans[i.second]=i.first;
    }
    printv(ans);
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