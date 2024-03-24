#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;
void dfs(vector<string>&v,vector<vector<int>>&visit,int i,int j){
    if(i<0 || j<0 || i>=v.size() || j>=v[0].size() || visit[i][j]==1 || v[i][j]=='.'){
        return;
    }
    visit[i][j]=1;
    dfs(v,visit,i+1,j);
    dfs(v,visit,i-1,j);
    dfs(v,visit,i,j+1);
    dfs(v,visit,i,j-1);
    return;
}
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    vector<vector<int>>visit(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]!='.' && visit[i][j]==0){
                ans++;
                dfs(v,visit,i,j);
            }
        }
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