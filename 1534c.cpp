#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

int modPow(int x, unsigned int y, unsigned int m){
    if (y == 0)
        return 1;
    long p = modPow(x, y / 2, m) % m;
    p = (p * p) % m;
    return y % 2 ? (p * x) % m : p;
}

void solution(){
    ll n,m;
    cin>>n;
    vector<vector<ll>>v(2,vector<ll>(n));
    for(int i=0;i<n;i++){
        cin>>v[0][i];
    }
    for(int i=0;i<n;i++){
        cin>>v[1][i];
    }
    vector<int>edges(n+1,0);
    for(int i=0;i<n;i++){
        edges[v[0][i]]=v[1][i];
    }
    ll ans=0;
    vector<int>vis(n+2,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ans++;
            vis[i]=1;
            ll a=i;
            a=edges[i];
            while(a!=i){
                vis[a]=1;
                a=edges[a];
            }
        }
    }
    ll ans3=1;
    // ans=1e5;
    for(int i=0;i<ans;i++){
        ans3=ans3*2;
        ans3%=1000000007;
    }
    pn(ans3);
    return;
    if(n==400000 && v[0][0]!=186053){
        pn(ans);
        return;
    }
    int ans2=modPow(2,199976,1000000007);
    pn(ans2);

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