#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    // cin>>s;
    vector<vector<ll>>v(n,vector<ll>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    ll ans=0;
    vector<vector<ll>>v2(n,vector<ll>(m,0));
    vector<pair<ll,ll>>p;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==1){
                // v2[i][j]=1;
                if(i>=0 && j>=0 && (i)<n-1 && j<m-1){
                    if(v[i][j]==1 && v[i+1][j]==1 && v[i][j+1]==1 && v[i+1][j+1]==1){
                        v2[i][j]=1;
                        v2[i+1][j]=1;
                        v2[i][j+1]=1;
                        v2[i+1][j+1]=1;
                        p.push_back({i,j});
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v2[i][j]!=v[i][j]){
                pn(-1);
                return;
            }
        }
    }
    pn(p.size());
    for(int i=0;i<p.size();i++){
        ps(p[i].first+1);
        pn(p[i].second+1);
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