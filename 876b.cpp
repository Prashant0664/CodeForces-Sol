#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n;
    cin>>m>>k;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,vector<ll>>mp;
    for(int i=0;i<n;i++){
        mp[v[i]%k].push_back(v[i]);
    }
    for(auto &[i,j]:mp){
        if(j.size()>=m){
            pn("Yes")
            for(int l=0;l<m;l++){
                ps(j[l]);
            }
            return;
        }
    }
    pn("No")
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