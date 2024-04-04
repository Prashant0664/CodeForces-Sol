// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// typedef long long int ll;

// void solution(){
//     ll n,m;
//     cin>>n;
//     // cin>>m;
//     string s;
//     // cin>>s;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());

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
 
const int MAX = 200007;
const int MOD = 1000000007;
 
void solve() {
	int n;
	cin >> n;
	vector<int> pos, neg, a;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x > 0) {pos.push_back(x);}
		else if (x < 0) {neg.push_back(x);}
		else {
			if (a.size() < 2) {a.push_back(x);}
		}
	}
	if (pos.size() > 2 || neg.size() > 2) {cout << "NO\n"; return;}
	
	for (int i : pos) {a.push_back(i);}
	for (int i : neg) {a.push_back(i);}
	
	for (int i = 0; i < a.size(); i++) {
		for (int j = i + 1; j < a.size(); j++) {
			for (int k = j + 1; k < a.size(); k++) {
				bool ok = false;
				for (int l = 0; l < a.size(); l++) {
					if (a[i] + a[j] + a[k] == a[l]) {ok = true;}
				}
				if (!ok) {cout << "NO\n"; return;}
			}
		}
	}
	cout << "YES\n";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}