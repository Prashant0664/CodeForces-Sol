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
// void split_str(string s,vector<string>&v){
//     string temp="";
//     for(int i=0;i<s.size();i++){
//         if(s[i]==' '){
//             v.push_back(temp);
//             temp="";
//         }
//         else{
//             temp+=s[i];
//         }
//     }
//     v.push_back(temp);
// }
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

// class DSU{
//     public:
//     vector<int> parent, rank;
//     DSU(int n){
//         parent.resize(n);
//         rank.resize(n);
//         for(int i=0; i<n; i++){
//             parent[i] = i;
//             rank[i] = 0;
//         }
//     }
//     int find(int x){
//         if(parent[x] == x){
//             return x;
//         }
//         return parent[x] = find(parent[x]);
//     }
//     void unite(int x, int y){
//         x = find(x);
//         y = find(y);
//         if(x==y){
//             return;
//         }
//         if(rank[x] < rank[y]){
//             parent[x]=y;
//             rank[y]+=rank[x]+1;
//         }
//         else if(rank[y]<rank[x]){
//             parent[y]=x;
//             rank[x]+=rank[y]+1;
//         }
//         else{
//             parent[y]=x;
//             rank[x]+=rank[y]+1;
//         }
//     }
// };

// void solution(){
//     ll n,m;
//     cin>>n>>m;
//     DSU dsu(n+1);
//     int maxi=0;
//     for(int i=0;i<m;i++){
//         int a, b;
//         cin>>a>>b;
//         int x=dsu.find(a);
//         int y=dsu.find(b);
//         if(x==y){
//             pn(maxi+1);
//             pii p={a,b};
//             debug(p);
//         }
//         else{
//             dsu.unite(x,y);
//             maxi=max({maxi,dsu.rank[x]-1,dsu.rank[y]-1});
//             pn(maxi+1);
//         }
//     }
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
#include <set>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <map>
#include <assert.h>
#include <fstream>
#include <cstdlib>
#include <random>
#include <iomanip>
#include <queue>
#include <bitset>
 
using namespace std;
 
#define sqr(a) ((a)*(a))
#define all(a) (a).begin(), (a).end()

struct DSU {
	vector<int> to;
	vector<int> val;
	int safeEdges = 0;
	multiset<int> topVals;
	multiset<int> tempVals;	

	DSU(int n) {
		to.resize(n);
		val.resize(n, 1);

		for (int i = 0; i < n; ++i) {
			to[i] = i;
			tempVals.insert(val[i]);
		}
	}

	int f(int v) {
		if (v == to[v])
			return v;

		return to[v] = f(to[v]);
	}

	bool check(multiset<int>& st, int val) {
		auto it = st.lower_bound(val);
		if (it == st.end())
			return false;
		return (*it == val);
	}

	void merge(int x, int y) {
		x = f(x);
		y = f(y);

		if (x == y) {
			++safeEdges;
			return;
		}

		if (check(tempVals, val[x]))
			tempVals.erase(tempVals.lower_bound(val[x]));
		else {
			sum -= val[x];
			topVals.erase(topVals.lower_bound(val[x]));
		}
		if (check(tempVals, val[y]))
			tempVals.erase(tempVals.lower_bound(val[y]));
		else {
			sum -= val[y];
			topVals.erase(topVals.lower_bound(val[y]));
		}

		to[y] = x;
		val[x] = val[x] + val[y];

		tempVals.insert(val[x]);
	}

	long long sum = 0;

	int getAnswer() {
		while (tempVals.size() && topVals.size() < safeEdges + 1) {
			sum += (*--tempVals.end());
			topVals.insert(*--tempVals.end());
			tempVals.erase(--tempVals.end());
		}

		while (tempVals.size() && (*topVals.begin()) < (*--tempVals.end())) {
			sum -= *topVals.begin();

			int temp = *topVals.begin();
			topVals.erase(topVals.begin());
			tempVals.insert(temp);

			sum += *--tempVals.end();
			topVals.insert(*--tempVals.end());

			tempVals.erase(*--tempVals.end());
		}

		return sum - 1;
	}
} ;

void solve() {
	int n, m;
	cin >> n >> m;

	DSU dsu(n);

	for (int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		--x; --y;

		dsu.merge(x, y);

		cout << dsu.getAnswer() << "\n";
	}
}

int main() {
    int numTests = 1;

    while (numTests--) {
        solve();
    }
}