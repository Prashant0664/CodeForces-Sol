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

// void dfs(vector<vector<int>>&v, vector<int>&visited, int node, vector<int>&ans){
//     visited[node]=1;
//     ans.push_back(node+1);
//     for(auto x:v[node]){
//         if(!visited[x]){
//             dfs(v,visited,x,ans);
//         }
//     }
// }
// void solution(){
//     ll n,m;
//     cin>>n;
//     // cin>>m;
//     string s;
//     // cin>>s;
//     vector<vector<int>>v(n);
//     for(int i=0;i<n;i++){
//         int a, b;
//         cin>>a>>b;
//         a--,b--;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     vector<int>ans;
//     vector<int>vis(n,0);
//     dfs(v,vis,0,ans);
//     reverse(ans.begin(),ans.end());
//     printv(ans);
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
#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> a;

void check(int l, int r) {
	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		int nxt = -1;
		if (a[l][0] == r) {
			nxt = a[l][1];
		} else if (a[l][1] == r) {
			nxt = a[l][0];
		} else {
			return;
		}
		ans.push_back(nxt);
		l = r;
		r = nxt;
	}
	for (auto it : ans) {
		cout << it + 1 << " ";
	}
	cout << endl;
	exit(0);
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	cin >> n;
	a = vector<vector<int>> (n, vector<int>(2));
	for (int i = 0; i < n; ++i) {
		cin >> a[i][0] >> a[i][1];
		--a[i][0];
		--a[i][1];
	}
	
	check(0, a[0][0]);
	check(0, a[0][1]);
	
	assert(false);
	
	return 0;
}