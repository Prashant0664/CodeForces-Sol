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
    // cin>>m;
    string s;
    // cin>>s;
    vector<vector<int>>v(n);
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);
    }
    vector<int>vis(n,0);
    vector<int>a(n,0);
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    queue<pii>q;
    q.push({0,-1});
    int level=-1;
    int ans=0;
    while(!q.empty()){
        int n=q.size();
        level++;
        for(int i=0;i<n;i++){
            auto t=q.front();
            int flag=t.second;
            int node=t.first;
            q.pop();
            if(vis[node]==1)continue;
            vis[node]=1;
            if(level%2==1){
                for(auto &k:v[node]){
                    if(!vis[k]){
                        q.push({k,flag});
                    }
                }
                continue;
            }
            if(flag==-1 && a[node]==b[node]){
                for(auto &k:v[node]){
                    if(!vis[k]){
                        q.push({k,flag});
                    }
                }
            }
            else if(flag==-1 && a[node]!=b[node]){
                ans++;
                for(auto &k:v[node]){
                    if(!vis[k]){
                        q.push({k,1});
                    }
                }
            }
            else if(flag!=-1){
                if(flag%2==0){
                    if(a[node]==b[node]){
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,flag+1});
                            }
                        }
                    }
                    else{
                        ans++;
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,-1});
                            }
                        }                    
                    }
                }
                else{
                    if(a[node]==b[node]){
                        ans++;
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,flag});
                            }
                        }
                    }
                    else{
                        ans++;
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,flag+1});
                            }
                        }                    
                    }
                }
                debug(node,ans);
            }
        }
    }
    level=-1;
    for(auto &i:vis){
        i=0;
    }
    pn(ans);
    q.push({0,-1});
    while(!q.empty()){
        int n=q.size();
        level++;
        for(int i=0;i<n;i++){
            auto t=q.front();
            int flag=t.second;
            int node=t.first;
            q.pop();
            if(vis[node]==1)continue;
            vis[node]=1;
            if(level%2==0){
                for(auto &k:v[node]){
                    if(!vis[k]){
                        q.push({k,flag});
                    }
                }
                continue;
            }
            if(flag==-1 && a[node]==b[node]){
                for(auto &k:v[node]){
                    if(!vis[k]){
                        q.push({k,flag});
                    }
                }
            }
            else if(flag==-1 && a[node]!=b[node]){
                ans++;
                for(auto &k:v[node]){
                    if(!vis[k]){
                        q.push({k,1});
                    }
                }
            }
            else if(flag!=-1){
                if(flag%2==0){
                    if(a[node]==b[node]){
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,flag+1});
                            }
                        }
                    }
                    else{
                        ans++;
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,-1});
                            }
                        }                    
                    }
                }
                else{
                    if(a[node]==b[node]){
                        ans++;
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,flag});
                            }
                        }
                    }
                    else{
                        ans++;
                        for(auto &k:v[node]){
                            if(!vis[k]){
                                q.push({k,flag+1});
                            }
                        }                    
                    }
                }
            }
        }
    }
    pn(ans);
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