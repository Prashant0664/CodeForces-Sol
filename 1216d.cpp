#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;
inline ll gcd(ll a, ll b) {
	while (a != 0 && b != 0) {
		if (a > b) {
			a %= b;
		} else {
			b %= a;
		}
	}
	return max(a, b);
}
void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>u;
    ll maxi=*max_element(v.begin(),v.end());
    for(int i=0;i<n;i++){
        v[i]=maxi-v[i];
        if(v[i]>0){
            u.push_back(v[i]);
        }
    }
    if(u.size()==0){
        // cout<<"-";
        cout<<"0 0"<<endl;
        return;
    }
    ll gcdi=u[0];
    ll sum=accumulate(u.begin(),u.end(),0LL);
    for(int i=1;i<u.size();i++){
        gcdi=gcd(gcdi,u[i]);
    }
    // cout<<sum<<" "<<gcdi<<endl;
    cout<<sum/gcdi<<' '<<gcdi<<endl;
    
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