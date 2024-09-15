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

int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
bool bfs(vector<string>&v,int i,int j,ll &n,ll &m){
    vector<vector<bool>>vis(n,vector<bool>(m,false));
    queue<pii>q;
    q.push({i,j});
    vis[i][j]=true;
    while(!q.empty()){
        pii p=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int nx=p.first+dir[k][0];
            int ny=p.second+dir[k][1];
            if(nx>=0 && nx<n && ny>=0 && ny<m){
                if(v[nx][ny]=='#'){
                    continue;
                }
                if(vis[nx][ny]){
                    continue;
                }
                vis[nx][ny]=true;
                q.push({nx,ny});
            }
        }
    }
    if(!vis[n-1][m-1]){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 && v[i][j]=='G'){
                return 0;
            }
        }
    }
    return 1;
}
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    // cin>>s;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='B'){
                for(int k=0;k<4;k++){
                    int nx=i+dir[k][0];
                    int ny=j+dir[k][1];
                    if(nx>=0 && nx<n && ny>=0 && ny<m){
                        if(v[nx][ny]=='.'){
                            v[nx][ny]='#';
                        }
                        if(v[nx][ny]=='G'){
                            pn("No");
                            return;
                        }
                    }
                }
            }
        }
    }
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='G'){
                cout<<((bfs(v,i,j,n,m)?"Yes":"No"));
                endo;
                return;
            }
        }
    }
    pn("Yes");

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