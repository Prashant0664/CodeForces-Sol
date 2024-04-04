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
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    cin>>m;
    vector<vector<ll>>v2(2,vector<ll>(m));
    for(int i=0;i<m;i++){
        cin>>v2[0][i];
    }
    ll ans=0,ind=-1;
    for(int i=0;i<m;i++){
        cin>>v2[1][i];
    }
    for(int i=0;i<m;i++){
        if(mp[v2[0][i]]>ans){
            ans=mp[v2[0][i]];
            ind=i;
        }
        else if(mp[v2[0][i]]==ans){
            if(mp[v2[1][i]]>mp[v2[1][ind]]){
                ans=mp[v2[0][i]];
                ind=i;
            }
        }
    }
    pn(max(1LL,ind+1));
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