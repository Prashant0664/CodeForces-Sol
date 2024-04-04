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
    // cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    n=s.length();
    // int n=s.length();
    vector<char>v(n);
    v[0]=s[0];
    for(int i=1;i<n;i++){
        v[i]=min(v[i-1],s[i]);
    }
    char minch = 'z' + 1;
	for (char ch : s) {
		if (ch > minch) {
			cout << "Ann\n";
		} else {
			cout << "Mike\n";
			minch = ch;
		}
	}
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