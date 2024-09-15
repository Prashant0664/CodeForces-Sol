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

vector<int> normalSieve(int n)
{
    vector<int>v={2};
    bool prime[n / 2];
    memset(prime, false, sizeof(prime));
    for (int i = 3; i * i < n; i += 2) {
        if (prime[i / 2] == false)
            for (int j = i * i; j < n; j += i * 2)
                prime[j / 2] = true;
    }
    for (int i = 3; i < n; i += 2)
        if (prime[i / 2] == false)
            v.push_back(i);
    return v;
}
void solution(){
    ll n,m;
    cin>>n;
    if(n==1){
        cout<<"1 0";
        return;
    }
    m=n;
    vector<int>v=normalSieve(n+1);
    int ans=1;
    for(int i=0;i<v.size();i++){
        if(n%v[i]==0)ans*=v[i];
    }
    map<int,int>mp;
    cout<<ans<<" ";
    int maxi=0;
    for(int i=0;i<v.size();i++){
        if(n%v[i]==0){
            while(n%v[i]==0 && n>0){
                mp[v[i]]++;
                n/=v[i];
                maxi=max(maxi,mp[v[i]]);
            }
        }
    }
    int f=0;
    for(auto &[i,j]:mp){
        if(j!=maxi)f=1;
        // cout<<i<<" "<<j<<endl;
    }
    m=1;
    while(m<maxi){
        m*=2;
    }
    if(m!=maxi)f=1;
    maxi=m;
    debug(m);
    int c=f;
    while(maxi>1){
        maxi/=2;
        c++;
    }
    pn(c);
    // debug(72*72);
    // cout<<sqrt(m)<<endl;
    // cout<<pow(2,6)*pow(3,4)<<endl;
    // int c=0;
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