#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isBipartite(vector<vector<ll>>& graph) {
        ll n = graph.size();
        vector<ll> color(n, -1);
        queue<ll> q;
        for(ll i=0;i<n;i++){
            if(color[i] != -1) continue;
            q.push(i);
            color[i] = 1;
                while(!q.empty()){
                    ll front = q.front();
                    q.pop();
                    for(ll ff : graph[front]){
                        if(color[ff] == color[front])
                            return false;
                        if(color[ff] == -1)
                            color[ff] = 1-color[front], q.push(ff);
                }
            }
            
        }
        return true;
    }
void ans(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>adj(n+1);
    vector<ll>a(k),b(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    for(int i=0;i<k;i++){
        adj[a[i]-1].push_back(b[i]-1);
        adj[b[i]-1].push_back(a[i]-1);
    }
    if(isBipartite(adj)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        ans();
    }
    return 0;
}
