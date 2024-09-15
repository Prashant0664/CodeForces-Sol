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

// abb
// ab
// ab
// bb
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    map<char,int>mp;
    for(auto &i:s)mp[i]++;
    vector<string>v(m,"");
    for(int i=0;i<m;i++){
        v[i]+=s[i];
        mp[s[i]]--;
        if(mp[s[i]]==0)mp.erase(s[i]);
    }
    int f=0;
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            f=1;
        }
    }
    if(mp.size()==1 && f==0){
        int ind=0;
        for(auto &[i,j]:mp){
            int x=j;
            char c=i;
            while(x>0){
                v[ind]+=c;
                x--;
                ind++;
                ind%=m;
            }
            // mp.erase(i);
            
            // debug(v);
        }
    }
    else{
        for(auto &[i,j]:mp){
            string t(j,i);
            v[0]+=t;
        }
        // debug(v);
    }
    sort(v.begin(),v.end());
    pn(v[v.size()-1]);
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