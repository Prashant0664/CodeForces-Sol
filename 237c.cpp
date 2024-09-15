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

bool check(ll mid, vector<int>&pref, ll n, ll m){
    int c=0;
    ll a=n;
    for(int i=a;i<=mid+a-1;i++){
        // if(i>m-mid+1)break;
        if(pref[i])c++;
    }
    return c;
}

void solution(){
    ll a,b,c,k;
    int p[1001000];
    cin>>a>>b>>k;
  for(int i=2;i<b+10;++i)p[i]=1;
  for(int i=2;i<b+10;++i)if(p[i])for(int j=i+i;j<b+10;j+=i)p[j]=0;
  for(int i=1;i<b+10;++i)p[i]+=p[i-1];
  int lo=0,hi=b-a+2;
  while(lo<hi){
    int m=(lo+hi)>>1,f=1;
    for(int i=a-1;f&&i+m<=b;++i)if(p[i+m]-p[i]<k)f=0;
    if(f)hi=m;else lo=m+1;
  }
  cout<<((lo>b-a+1)?-1:lo)<<endl;
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