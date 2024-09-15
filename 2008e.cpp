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

int help(string &s, int prev, int i, int f){
    if(i==s.length()){
        return 0;
    }

}

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<0<<endl;
        return;
    }
    vector<vector<int>>even,odd;
    vector<int>d(26,0);
    even.push_back(d);
    odd.push_back(d);
    int ec=0,oc=0;
    for(int i=0;i<n;i++){
        even.push_back(even.back());
        odd.push_back(odd.back());
        if(i%2==0){
            even[i+1][s[i]-'a']++;
            ec++;
        }
        else{
            odd[i+1][s[i]-'a']++;
            oc++;
        }
    }
    int maxie=0;
    int maxio=0;
    for(int i=0;i<26;i++){
        maxie=max(maxie,even[n][i]);
    }
    for(int i=0;i<26;i++){
        maxio=max(maxio,odd[n][i]);
    }
    int ans=ec-maxie+oc-maxio;
    // debug(ans);
    if(s.length()%2==0){
        pn(ans);
        return;
    }
    int ef=0,of=0;
    ans=INT_MAX;
    ec--;
    for(int i=0;i<n;i++){
        int t=s[i]='a';
        maxie=0,maxio=0;
        vector<int>feven=even[i];
        vector<int>fodd=odd[i];
        for(int j=0;j<26;j++)
            feven[j]+=(odd[n][j]-odd[i+1][j]);
        for(int j=0;j<26;j++)
            fodd[j]+=(even[n][j]-even[i+1][j]);
        for(int i=0;i<26;i++)
            maxie=max(maxie,feven[i]);
        for(int i=0;i<26;i++)
            maxio=max(maxio,fodd[i]);
        ans=min(ans,ec-maxie+oc-maxio);
    }
    pn(ans+1);
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