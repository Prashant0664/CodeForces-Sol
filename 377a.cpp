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


void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    ll k;
    cin>>k;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c=0;
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='.' && q.size()==0)q.push({i,j});
            if(v[i][j]=='.')c++;
        }
    }
    // pn(c);
    k=c-k;
    debug(q.front(),k);
    // pn(k)
    vector<vector<int>>vis(n,vector<int>(m,0));
    int arr[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        if(vis[x][y]==1){
            // q.pop();
            // cout<<x<<" "<<y<<endl;
            continue;
        }
        if(k<=0){
            v[x][y]='X';
        }
        else{
        }
        k--;
        // pn(k);
        vis[x][y]=1;
        for(int j=0;j<4;j++){
            int nx=x+arr[j][0];
            int ny=y+arr[j][1];
            if(nx>=0 && ny>=0 && nx<n && ny<m && v[nx][ny]=='.' && vis[nx][ny]==0){
                q.push({nx,ny});
            }
        }
    }
    c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='.')c++;
        }
    }
    // pn(c);
    for(auto &i:v){
        pn(i);
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