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

void help(vector<vector<ll>>&v, int i, vector<int>&vis, vector<int>&v2, vector<int>&ans, ll &cnt){
    vis[i]=1;
    int res=0;
    for(auto &k:v[i]){
        if(!vis[k]){
            res++;
            help(v,k,vis,v2,ans,cnt);
        }
        else{

        }
    }
    if(res==0){
        ans[v2[i]]+=1;
        return;
    }
    if(i!=0 && v2[i]==2)cnt++;
    return;
}
void solution(){
    ll n,m;
    cin>>n;
    vector<vector<ll>>v(n);
    vector<int>vis(n+1,0);
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    string s;
    cin>>s;
    // return;
    vector<int>v2(s.length()+10,0);
    for(int i=0;i<n;i++){
        if(s[i]=='?')v2[i]=2;
        else if(s[i]=='1'){
            v2[i]=1;
        }
        else v2[i]=0;
    }
    // return;
    vector<int>ans(min(10LL,n),0);
    ll cnt=0;
    help(v,0,vis,v2,ans,cnt);
    for(int i=0;i<ans.size();i++){
        // cout<<ans[i]<<" ";
    }
    // endo;
    int mini=2;
    ll res=0;
    ll x=ans[mini];
    ll y=ans[1];
    ll z=ans[0+1-1];
    if(v2[0]==0){
        res=res+y+(x)/2+x%2;
        pn(res);
        return;
    }
    else if(v2[0]==1){
        res=res+z+(x)/2+x%2;
        pn(res);
        return;
    }
    else if(v2[0]==1+1){
        if(z==y){
            res=res+(y+(x+cnt%2)/2);
        }
        else if(ans[0]!=y){
            res=max(z,y)+x/2;
        }
        pn(res);
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