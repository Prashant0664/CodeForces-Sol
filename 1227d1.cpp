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

void solve(vector<ll>&v, ll n, vector<ll>&v2, map<ll,vector<ll>>mp){
    ll k,x;
    cin>>k>>x;
    set<ll>stk;
    vector<ll>ans;
    int prev=INT_MAX;
    for(int i=n-k;i<n;i++){
        auto t=mp[v2[i]];
        // debug(t);
        int st=-1;
        for(int j=0;j<t.size();j++){
            if(stk.find(t[j])!=stk.end()){
                continue;
            }
            if(t[j]<prev && prev==INT_MAX){
                prev=t[j];
                st=t[j];
                break;
            }
            else if(st==-1 && t[j]<prev){
                st=t[j];
            }
            else if(st!=-1 && t[j]>prev){
                st=t[j];
                break;
            }
            else if(st==-1 && t[j]>prev){
                st=t[j];
                break;
            }
        }
        stk.insert(st);
        ans.push_back(st);
    }
    sort(ans.begin(),ans.end());
    // debug(ans);
    cout<<v[ans[x-1]]<<endl;
}
void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n),v2(n);
    map<ll,vector<ll>>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        v2[i]=v[i];
        mp[v[i]].push_back(i);
    }
    sort(v2.begin(),v2.end());
    cin>>m;
    while(m--){
        solve(v,n,v2,mp);
    }
    return;
}
int main(){
    int _=1;
    while(_--){
        solution();
    }
    return 0;
}