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
//     map<ll,ll>mp;
//     vector<ll>v(n,0);
//     for(int i=0;i<n;i++){
//         ll j=0;
//         cin>>v[i];
//     }
//     vector<int>v2(6,0);
//     for(int i=0;i<n;i++){
        
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

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	vector<int> p({4, 8, 15, 16, 23, 42});

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i] = lower_bound(p.begin(), p.end(), a[i]) - p.begin();
	}
	
	vector<int> seq(6);
	for (int i = 0; i < n; ++i) {
		if (a[i] == 0) {
			++seq[0];
		} else {
			if (seq[a[i] - 1] > 0) {
				--seq[a[i] - 1];
				++seq[a[i]];
			}
		}
	}
	
	cout << n - seq[5] * 6 << endl;
	
	return 0;
}