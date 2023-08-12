#include <iostream>
#include <algorithm>
#include <vector>
#define int long long
using namespace std;
int n, k;
vector <int> a;
 
int calc(int i, int x){
	if (i == n-1){
		if (a[i] >= x) return 0;
		return 1e9;
	}
	if (a[i] >= x) return 0;
	return calc(i+1, x-1) + x-a[i];
}
 
bool check(int q){
	for (int i = 0; i < n; ++ i)
		if (calc(i, q) <= k) return true;
	return false;
}
 
void solve(){
	cin >> n >> k;
	a.resize(n);
	int l = 1, r = 1e9;
	for (int &i : a) cin >> i;
	
	while (l < r){
		int mid = (l + r + 1) >> 1;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	cout << l << '\n';
}
 
signed main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int t = 1;
	cin >> t;
	while (t --)
		solve();
	return 0;
}