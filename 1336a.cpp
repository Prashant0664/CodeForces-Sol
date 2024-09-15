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

// int dfs(vector<vector<ll>>&v, int i, vector<int>&childcount,vector<int>&vis){
//     vis[i]=1;
//     int count=0;
//     for(auto x:v[i]){
//         if(vis[x]==0){
//             count+=dfs(v,x,childcount,vis)+1;
//         }
//     }
//     return childcount[i]=count;
// }


// void solution(){
//     ll n,m;
//     cin>>n;
//     cin>>m;
//     vector<vector<ll>>v(n);
//     for(int i=0;i<n;i++){
//         ll a,b;
//         cin>>a>>b;
//         a--,b--;
//         v[b].push_back(a);
//         v[a].push_back(b);
//     }
//     vector<int>height(n,0);
//     int h=0;
//     queue<pii>q;
//     q.push({0,0});
//     while(!q.empty()){
//         auto [node,ht]=q.front();
//         q.pop();
//         if(height[node]!=0){
//             continue;
//         }
//         height[node]=ht;
//         for(auto x:v[node]){
//             q.push({x,ht+1});
//         }
//     }
//     vector<int>childcount(n,0);
//     vector<int>vis(n,0);
//     dfs(v,0,childcount,vis);
//     debug(childcount);
//     debug(height);
//     vector<int>cnt;
//     for(int i=1;i<n;i++){
//         cnt.push_back(-childcount[i]+height[i]);
//     }
//     sort(cnt.begin(),cnt.end(),greater<int>());
//     ll ans=0;
//     debug(cnt);
//     for(int i=0;i<m;i++){
//         ans+=cnt[i];
//     }
//     cout<<ans<<endl;
// }
// int main(){
//     int _=1;
//     // cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define maxn 200005
std::vector<int>conj[maxn];
int n,k,u,v,depth[maxn]={0},size[maxn]={0},det[maxn];
long long ans=0;
int cmp(int a,int b){return a>b;}
int dfs(int u,int f){depth[u]=depth[f]+1;size[u]=1;
	for (int i=0;i<conj[u].size();++i){
		if ((v=conj[u][i])==f)continue;
		size[u]+=dfs(v,u);
	}det[u]=size[u]-depth[u];return size[u];
}
int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<n;++i){
		scanf("%d%d",&u,&v);conj[u].push_back(v);conj[v].push_back(u);
	}dfs(1,0);
	std::nth_element(det+1,det+n-k,det+n+1,cmp);
	for (int i=1;i<=n-k;++i)ans+=det[i];std::cout<<ans;
	return 0;
}