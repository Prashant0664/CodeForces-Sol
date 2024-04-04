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
    vector<vector<ll>> edges[n+1];
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        edges[a].push_back({b,c});
        edges[b].push_back({a,c});
    }
    vector<ll>v(k,0);
    set<ll>st;
    for(int i=0;i<k;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    ll ans=1e9+99;
    for(int l=0;l<k;l++){
        for(int i=0;i<edges[v[l]].size();i++){
            if(st.find(edges[v[l]][i][0])==st.end()){
                ans=min(ans,edges[v[l]][i][1]);
            }
        }
    }
    if(ans==(1e9+99)){
        pn(-1);
        return;
    }
    pn(ans);
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