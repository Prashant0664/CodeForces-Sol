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

// GBGBGB
int gold(string s, ll n){
    vector<int>v;
    int c=0;
    char prev='G';
    for(int i=0;i<n;i++){
        if(s[i]==prev){
            c++;
        }
        else{
            prev=s[i];
            v.push_back(c);
            c=1;
        }
    }
    v.push_back(c);
    int ans=0;
    debug(v);
    if(v.size()>=5){
        for(int i=1;i<v.size();i+=2){
            if(i!=v.size()-1){
                if(v[i]==1){
                    ans=max(ans,v[i-1]+v[i+1]+1);
                }
                else{
                    ans=max(ans,v[i-1]+1);
                }
            }
        }
        for(int i=0;i<v.size();i+=2){
            ans=max(ans,v[i]+1);
        }
    }
    int m=v.size();
    if(m==1){
        ans=v[0];
    }
    else if(m==2){
        ans=v[0];
    }
    else if(m==3){
        if(v[1]==1){
            ans=v[0]+v[2];
        }
        else{
            ans=max(v[0]+1,v[2]+1);
        }
    }
    else if(m==4){
        if(v[1]==1){
            ans=v[0]+v[2]+1;
        }
        else{
            ans=max(v[0]+1,v[2]+1);
        }
    }
    for(int i=0;i<v.size();i+=2){
        ans=max(ans,v[i]);
    }
    return ans;
}
// BGBGBGB
int black(string s, ll n){
    vector<int>v;
    int c=0;
    char prev='S';
    for(int i=0;i<n;i++){
        if(s[i]==prev){
            c++;
        }
        else{
            prev=s[i];
            v.push_back(c);
            c=1;
        }
    }
    // BG
    debug(v);
    if(v.size()%2)v.push_back(c);
    int m=v.size();
    int ans=0;
    if(m>=5){
        for(int i=1;i<m;i++){
            if(v[i]==1){
                ans=max(ans,v[i-1]+v[i+1]+1);
            }
            else{
                ans=max(ans,v[i-1]+1);
            }
        }
        ans=max(ans,v[m-1]+1);
    }
    if(m==4){
        if(v[2]==1){
            ans=max(ans,v[1]+v[3]);
        }
        else ans=max({ans,v[1],v[3]});
    }
    if(m==2){
        ans=max(ans,v[1]);
    }
    // debug(v);
    return ans;
}

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    // pn(s.length());
    // return;
    if(s[0]=='G'){
        ll goldi=gold(s,n);
        pn(goldi);
    }
    else{
        ll goldi=black(s,n);
        pn(goldi);
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