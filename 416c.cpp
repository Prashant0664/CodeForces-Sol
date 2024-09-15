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
    // cin>>m;
    string s;
    // cin>>s;
    vector<pair<ll,pair<ll,int>>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second.first>>v[i].first;
        v[i].second.second=i+1;
    }
    sort(v.begin(),v.end(),greater<pair<ll,pair<ll,int>>>());
    // ll m;
    cin>>m;
    vector<pair<ll,int>>v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i].first;
        v2[i].second=i+1;
    }
    sort(v2.begin(),v2.end(),greater<pll>());
    int i=0,j=0;
    ll ans=0;
    vector<pll>arr;
    debug(v2);
    debug(v);
    set<ll>st;
    reverse(v2.begin(),v2.end());
    vector<int>vis(m,0);
    for(auto &i:v){
        for(int j=0;j<m;j++){
            if(!vis[j] && v2[j].first>=i.second.first){
                arr.push_back({i.second.second,v2[j].second});
                ans+=i.first;
                vis[j]=1;
                break;
            }
        }
    }
    // while(i<n && j<m){
    //     if(v[i].second.first<=v2[j].first){
    //         arr.push_back({v[i].second.second,v2[j].second});
    //         ans+=v[i].first;
    //         i++;
    //         j++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    ps(arr.size())
    pn(ans);
    for(auto &i:arr){
        ps(i.first);pn(i.second);
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