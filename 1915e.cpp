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
        if(i%2==0){
            v[i]=-v[i];
        }
    }
    map<ll,ll>mp;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(mp[sum] && mp[sum]>0 || sum==0){
            pn("YES");
            return;
        }
        mp[sum]++;
    }
    pn("NO");
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}