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

ll fac(ll n){
    ll ans=1;
    for(ll i=1;i<=n;i++)ans*=i;
    return ans;
}

ll fact(string n){
    ll ans=1;
    for(int i=0;i<n.length();i++){
        ans*=fac(n[i]-'0');
    }
    return ans;
}
void solution(){
    string n,m;
    cin>>n;
    // ll temp=fact(n);
    string s=n;
    int c=0;
    string ans="";
    for(int i=0;i<n.length();i++){
        if(s[i]=='1' || s[i]=='0')c++;
        else ans+=s[i];
    }
    ans="";
    for(auto &i:s){
        if(i=='0' || i=='1' || i=='4' || i=='6' || i=='8' || i=='9' ){

        }
        else ans+=i;
    }
    vector<int>v(10,0);
    for(int i=2;i<10;i++){
        v[i]=count(s.begin(),s.end(),i+'0');
    }
    for(int i=2;i<10;i++){
        if(i==4){
            for(int j=0;j<v[i];j++){
                ans+="223";
            }
        }
        if(i==6){
            for(int j=0;j<v[i];j++){
                ans+="53";
            }
        }
        if(i==8){
            for(int j=0;j<v[i];j++){
                ans+="2227";
            }
        }
        if(i==9){
            for(int j=0;j<v[i];j++){
                ans+="7332";
            }
        }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    pn(ans);
    return;


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