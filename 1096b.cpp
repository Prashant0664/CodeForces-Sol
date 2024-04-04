#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    return;
}
int main(){
    int n;
	string s;
	cin >> n >> s;
	int cntl = 0, cntr = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == s[0]) {
			++cntl;
		} else {
			break;
		}
	}
	for (int i = n - 1; i >= 0; --i) {
		if (s[i] == s[n - 1]) {
			++cntr;
		} else {
			break;
		}
	}
	if (s[0] == s[n - 1]) {
		cout << ((cntl + 1) * 1ll * (cntr + 1)) % 998244353 << endl;
	} else {
		cout << (cntl + cntr + 1) % 998244353;
	}
	
    return 0;
}