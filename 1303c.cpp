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

bool help(string &s, string &t, int i, int j, vector<vector<int>>&dp){
    if(i==s.length())return 1;
    if(j>=t.length() || j<0 )return 0;
    if(s[i]!=t[j])return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    bool a=help(s,t,i+1,j+1,dp);
    bool b=help(s,t,i+1,j-1,dp);
    return dp[i][j]=a|b;
}

bool check(string s, string t){
    int i=0;
    int n=t.length();
    int m=s.length();
    for(;i<n;i++){
        if(s[0]==t[i]){
            break;
        }
    }
    int j=0;
    if(i==n)return 0;
    vector<vector<int>>dp(n*2+m,vector<int>(m*2+n,-1));
    // return 1;
    return help(s,t,0,i,dp);
}
void solution(){
    ll n,m;
    // cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    n=s.length();
    string ans(100,'1');
    int j=50;
    int i=0;
    while(i<s.length()){
        ans[j]=s[i];
        if(i<n-1){
            if(s[i+1]==ans[j-1]){
                j--;
            }
            else if(s[i+1]==ans[j+1]){
                j++;
            }
            else if(ans[j+1]=='1'){
                j++;
            }
            else{
                j--;
            }
        }
        if(j<0 || j>=100){
            pn("NO")
            return;
        }
        i++;
    }
    string res="";
    set<char>st;
    for(auto &i:ans){
        if(i!='1'){
            res+=i;
            st.insert(i);
        }
    }
    for(char c='a';c<='z';c++){
        if(st.find(c)==st.end()){
            res+=c;
        }
    }
    map<char,int>mp;
    for(auto &i:res){
        mp[i]++;
        if(mp[i]==2){
            cout<<"NO"<<endl;
            return;
        }
    }
    // pn("YES");
    // return;
    // debug(res);
    if(check(s,res)){
        pn("YES");
        pn(res);
    }
    else{
        pn("NO");
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