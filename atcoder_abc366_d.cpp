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
#ifndef ONnINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

int find(
    vector<vector<vector<int> > >& v,vector<vector<vector<int> > >& pref, int D, int E, int F, int X, int Y, int Z)
{
    int sum = pref[X][Y][Z];
 
    if (D > 0) {
        sum -= pref[D - 1][Y][Z];
    }
    if (E > 0) {
        sum -= pref[X][E - 1][Z];
    }
    if (F > 0) {
        sum -= pref[X][Y][F - 1];
    }
 
    if (D > 0 && E > 0) {
        sum += pref[D - 1][E - 1][Z];
    }
    if (E > 0 && F > 0) {
        sum += pref[X][E - 1][F - 1];
    }
    if (F > 0 && D > 0) {
        sum += pref[D - 1][Y][F - 1];
    }
 
    if (D > 0 && E > 0 && F > 0) {
        sum -= pref[D - 1][E - 1][F - 1];
    }
 
    return sum;
}
void solution(){
    ll n,m;
    cin>>n;
    vector<vector<vector<int> > >v(n,vector<vector<int> >(n,vector<int>(n)));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cin>>v[i][j][k];
            }
        }
    }
    vector<vector<vector<int> > >pref(n,vector<vector<int> >(n,vector<int>(n,0)));
    cin>>m;
    // help(v,pref,n,n,n);
    pref[0][0][0] = v[0][0][0];
 
    for (int i = 1; i < n; i++)
        pref[i][0][0]
            = pref[i - 1][0][0] + v[i][0][0];
 
    for (int i = 1; i < n; i++)
        pref[0][i][0]
            = pref[0][i - 1][0] + v[0][i][0];
 
    for (int i = 1; i < n; i++)
        pref[0][0][i]
            = pref[0][0][i - 1] + v[0][0][i];
 
    for (int k = 1; k < n; k++) {
        for (int i = 1; i < n; i++) {
            pref[k][i][0]
                = v[k][i][0] + pref[k - 1][i][0]
                  + pref[k][i - 1][0]
                  - pref[k - 1][i - 1][0];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            pref[0][i][j]
                = v[0][i][j] + pref[0][i - 1][j]
                  + pref[0][i][j - 1]
                  - pref[0][i - 1][j - 1];
        }
    }
    for (int j = 1; j < n; j++) {
        for (int k = 1; k < n; k++) {
            pref[k][0][j]
                = v[k][0][j] + pref[k - 1][0][j]
                  + pref[k][0][j - 1]
                  - pref[k - 1][0][j - 1];
        }
    }
 
    for (int k = 1; k < n; k++) {
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                pref[k][i][j]
                    = v[k][i][j]
                      + pref[k - 1][i][j]
                      + pref[k][i - 1][j]
                      + pref[k][i][j - 1]
 
                      - pref[k - 1][i - 1][j]
                      - pref[k][i - 1][j - 1]
                      - pref[k - 1][i][j - 1]
 
                      + pref[k - 1][i - 1][j - 1];
            }
        }
    }
    debug(pref);
    for(int i=0;i<m;i++){
        int x1,x2,y1,y2,z1,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        x1--;y1--;z1--;x2--;y2--;z2--;
        cout<<find(v,pref,x1,y1,z1,x2,y2,z2)<<endl;
    }
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