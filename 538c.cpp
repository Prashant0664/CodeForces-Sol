// /*
//        ___      _      ___     ____   _    _   ____     _____  
//       |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
//         | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
//     |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
//     |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

//                   ____         _      __  __ 
//                  |  _ \       / \    |  \/  |
//                  | |_) |     / _ \   | \  / |
//                  |  _ <     / ___ \  | |\/| |
//                  |_|  \_\  /_/   \_\ |_|  |_|

// */
// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// #define mod 1000000007
// #define pll pair<ll,ll>
// #define pii pair<int,int>
// typedef long long int ll;

// void __print(int x) {cerr << x;}
// void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
// void __print(unsigned x) {cerr << x;}
// void __print(unsigned long x) {cerr << x;}
// void __print(unsigned long long x) {cerr << x;}
// void __print(float x) {cerr << x;}
// void __print(double x) {cerr << x;}
// void __print(long double x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}

// template<typename T, typename V>
// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif

// ll find(pll p1, pll p2){
//     ll ans=0;
//     ll diff=abs(p2.first-p1.first);
//     ll a=0,b=diff;
//     ll hd=abs(p2.second-p1.second);
//     ans=max(ans,(a+b+hd)/2);
//     debug((a+b+hd)/2);
//     return ans;
// }

// void solution(){
//     ll n,m;
//     cin>>m;
//     cin>>n;
//     vector<pll>v(2);
//     ll ans=0;
//     ll lst=0;
//     ll fst=1e9;
//     ll df=1e9;
//     ll dl=1;
//     v[0]={0,0};
//     for(int i=0;i<n;i++){
//         ll a1,b1;
//         cin>>a1>>b1;
//         lst=b1;
//         dl=a1;
//         df=min(df,a1);
//         fst=min(fst,b1);
//         ans=max(ans,b1);
//         v[1]={a1,b1};
//         if(i>0){
//             if(abs(v[1].second-v[0].second)>abs(v[1].first-v[0].first)){
//                 cout<<"IMPOSSIBLE"<<endl;
//                 return;
//             }
//         }
//         ans=max(ans,find(v[1],v[0]));
//         v[0]={a1,b1};
//     }
//     pll a={0,0};
//     pll b={df,fst};
//     ans=max({ans,m-dl+lst});
//     ans=max(ans,find(a,b));
//     // ans=max(ans,m-lst);
//     pn(ans);
//     return;
// }
// int main(){
//     int _=1;
//     // cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cassert>
#include <cstdio>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;

template<class T>
bool uin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
bool uax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(10);
    cout << fixed;
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
#endif

    int N, M;
    cin >> N >> M;
    vi d(M), h(M);
    forn(i, M) cin >> d[i] >> h[i];
    int ans = max(h[0] + d[0] - 1, h[M - 1] + (N - d[M - 1]));
    bool ok = true;
    forn(i, M - 1) {
        ok &= abs(h[i] - h[i + 1]) <= d[i + 1] - d[i];
        ans = max(ans, max(h[i], h[i + 1]) + (d[i + 1] - d[i] - abs(h[i] - h[i + 1])) / 2);
    }
    if (!ok) cout << "IMPOSSIBLE\n";
    else cout << ans << '\n';

#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}