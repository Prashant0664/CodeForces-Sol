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


void help(vector<int>&v, int i, vector<int>&vis, int &ans){
    if(vis[i]==1){
        ans=i;
        return;
    }
    else if(vis[i]==2){
        return;
    }
    vis[i]=1;
    help(v,v[i],vis, ans);
}
void reverse(vector<int>& nums, int left, int right) {
    while (left < right) {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
}  
void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.size() - 1);
}
void sol(vector<int>&x, int i, ll k, ll n, vector<int>&vis){
    vector<int>v={i};
    int st=x[i];
    int c=0;
    vis[i]=2;
    while(st!=i){
        v.push_back(st);
        vis[st]=2;
        st=x[st];
    }
    k=min(k,(ll)k%(ll)v.size());
    rotate(v,k);
    st=x[i];
    int j=1;
    x[i]=v[0];
    while(st!=i){
        int st2=st;
        st=x[st];
        x[st2]=v[j];
        j++;
    }
    // debug(x);
}
    
void dfs(vector<vector<int>>&adj, int i, vector<int>&vis, vector<int>&x, int &clr){
    if(vis[i]==2){
        return;
    }
    x[i]=clr;
    vis[i]=2;
    dfs(adj,x[i],vis,x,clr);
}

void solution(){
    // vector<int>d={1,2,3,4,0,6,7};
    // sol(d,0,1LL,(ll)d.size());
    // return;
    ll n,k;
    cin>>n;
    cin>>k;
    vector<int>x(n),x2(n),in(n,0);
    vector<vector<int>>adj(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
        x[i]--;
        x2[i]=x[i];
        in[x[i]]++;
        adj[i].push_back(x[i]);
        adj[x[i]].push_back(i);
    }
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    queue<int>q;
    vector<int>vis(n,0);
    for(int i=0;i<n;i++){
        if(in[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        auto i=q.front();
        q.pop();
        int ans=-1;
        if(vis[i]==0){
            help(x,i,vis,ans);
            if(ans!=-1 && vis[ans]==1){
                cout<<i<<endl;
                sol(x,ans,k,n,vis);
            }
        }
    }
    for(int i=0;i<n;i++){
        int ans=-1;
        if(vis[i]==0){
            help(x,i,vis,ans);
            if(ans!=-1 && vis[ans]==1){
                cout<<i<<endl;
                sol(x,ans,k,n,vis);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(vis[i]==1){
            x[i]=x[x[i]];
        }
    }
    debug(x);
    vector<int>rev(n,0);
    for(int i=0;i<n;i++){
        if(vis[i]==1){
            dfs(adj,i,vis,x,x[i]);
        }
    }
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        ans[i]=v[x[i]];
    }
    printv(ans);
    debug(rev);
    debug(x);
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