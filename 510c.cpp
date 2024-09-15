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

// bool checkifcycledfs(vector<vector<int>>&adj, int i, vector<int>&vis){
//     if(vis[i]==1){
//         return 0;
//     }
//     vis[i]=1;
//     bool ans=true;
//     for(auto &k:adj[i]){
//         ans=ans&checkifcycledfs(adj,k,vis);
//     }
//     return ans;
// }
// void solution(){
//     ll n,m;
//     cin>>n;
//     // cin>>m;
//     string s;
//     // cin>>s;
//     vector<string>v(n);
//     int mini=1e5+10;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mini=min(mini,(int)v[i].size());
//     }
//     vector<vector<int>>adj(300);
//     for(int i=0;i<mini;i++){
//         for(int j=0;j<n-1;j++){
//             adj[v[j][i]].push_back(v[j+1][i]);
//         }
//     }
//     vector<int>vis(300,0);
//     if(!checkifcycledfs(adj,v[0][0],vis)){
//         cout<<"Impossible"<<endl;
//         return;
//     }
//     return;
// }
// int main(){
//     int _=1;
//     cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
 
using namespace std;
vector<bool> visited;
 
signed main(){
	int n; cin >> n;
	vector<int> v1(26, 0);
	vector<vector<int>> adj(26);
	
	string a="", b;
	cin >> b;
	for (int i = 1; i < n; i++) {
		a = b;
		cin >> b;
		bool found = false;
		for (int j = 0; j < a.size() && j<b.size(); j++) {
			if (a[j] != b[j]) {
				adj[a[j]-97].push_back(b[j]-97);
				v1[b[j]-97]++;
				found = true;
				break;
			}
		}
		if (a.size() > b.size() && !found) {
			cout << "Impossible";
			return 0;
		}
	}
 
 
	vector<int> next(0);
	for(int i=0; i<26; i++){
		if(v1[i]==0) next.push_back(i);
	}
	vector<int> res(0);
	while(!next.empty()){
		int v2 = next.back();
		res.push_back(v2);
		next.pop_back();
		for(int i: adj[v2]){
			v1[i]--;
			if(v1[i]==0) next.push_back(i);
		}
 
	}
 
	//cout << res.size();
 
	if (res.size() < 26) {cout << "Impossible"; return 0;}
 
	for(int e: res) {
		cout << (char)(e+97);
	}
    return 0;
}
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
	vector<string>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<vector<char>>v2(n,vector<char>(101,' '));
	for(int i=0;i<n;i++){
		for(int j=0;j<v[i].length();j++){
			v2[i][j]=v[i][j];
		}
	}
	vector<int>in(256,0);
	vector<vector<int>>adj(256);
	vector<int>skip(n+1,0);
	for(int j=0;j<101;j++){
		for(int i=1;i<n;i++){
			if(skip[i]==1)continue;
			if(v2[i][j]==' ')continue;
			if(j==0){
				if(v2[i-1][j]!=' ' && v2[i-1][j]!=v2[i][j]){
					adj[v2[i-1][j]].push_back(v2[i][j]);
					in[v2[i][j]]++;
					skip[i]=1;
				}
			}
			else{
				if(v2[i-1][j-1]==v2[i][j-1] && v2[i-1][j]!=' ' && v2[i][j]!=v2[i-1][j]){
					adj[v2[i-1][j]].push_back(v2[i][j]);
					in[v2[i][j]]++;
					skip[i]=1;
				}
			}
			// debug(skip);
		}
	}
	// debug(skip);
	queue<int>q;
	for(int i=0;i<256;i++){
		if(in[i]==0 && adj[i].size()!=0)q.push(i);
	}
	// debug(skip);
	if(accumulate(skip.begin(),skip.end(),0)==0){
		for(char c='a';c<='z';c++){
			cout<<c;
		}
		return;
	}
	if(q.size()==0){
		pn("Impossible");
		return;
	}
	// cout<<q.size();
	// cout<<in['r']<<" "<<in['s']<<" "<<in['a']<<endl;
	vector<int>vis(256,0);
	string s="";
	while(!q.empty()){
		int x=q.front();
		q.pop();
		if(vis[x]){
			pn("Impossible");
			return;
		}
		vis[x]=1;
		s+=x;
		for(auto &i:adj[x]){
			in[i]--;
			if(in[i]==0){
				q.push(i);
			}
		}
	}
	vector<int>vis2(256,0);
	for(auto &i:s){
		vis2[i]=1;
	}
	for(char c='a';c<='z';c++){
		if(vis2[c]==0){
			s+=c;
		}
	}
	pn(s);
	return;
}
int main(){
	int _=1;
	while(_--){
		solution();
	}
	return 0;
}