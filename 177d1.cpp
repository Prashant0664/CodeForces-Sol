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
    cin>>m;
    ll k;
    cin>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    vector<ll>psum(m,0);
    for(int i=0;i<m;i++){
        if(i==0){
            psum[i]=v2[0];
        }
        if(i>0){
            psum[i]+=(psum[i-1]+v2[i]);
        }
    }
    for(ll i=0;i<n;i++){
        
	 	int r = min(m-1, i);
	 	int l = max(0LL, i-n+m);
        ps((v[i]+((psum[r+1]-psum[l])%k+k)%k)%k);

    }
    endo;

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