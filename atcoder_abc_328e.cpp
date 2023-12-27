#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class DSU { 
    ll* parent; 
    ll* rank; 
  
public: 
    DSU(ll n) 
    { 
        parent = new ll[n]; 
        rank = new ll[n]; 
  
        for (ll i = 0; i < n; i++) { 
            parent[i] = -1; 
            rank[i] = 1; 
        } 
    } 
  
    // Find function 
    ll find(ll i) 
    { 
        if (parent[i] == -1) 
            return i; 
  
        return parent[i] = find(parent[i]); 
    } 
  
    // Union function 
    void unite(ll x, ll y) 
    { 
        ll s1 = find(x); 
        ll s2 = find(y); 
  
        if (s1 != s2) { 
            if (rank[s1] < rank[s2]) { 
                parent[s1] = s2; 
            } 
            else if (rank[s1] > rank[s2]) { 
                parent[s2] = s1; 
            } 
            else { 
                parent[s2] = s1; 
                rank[s1] += 1; 
            } 
        } 
    } 
}; 
  
class Graph { 
    vector<vector<ll> > edgelist; 
    ll V; 
  
public: 
    Graph(ll V) { this->V = V; } 
  
    // Function to add edge in a graph 
    void addEdge(ll x, ll y, ll w, ll k) 
    { 
        edgelist.push_back({ w, x, y }); 
    } 
  
    void kruskals_mst(ll k) 
    { 
        // Sort all edges 
        sort(edgelist.begin(), edgelist.end()); 
  
        // Initialize the DSU 
        DSU s(V); 
        ll ans = 0; 
        
        for (auto edge : edgelist) { 
            ll w = edge[0]; 
            ll x = edge[1]; 
            ll y = edge[2]; 
  
            // Take this edge in MST if it does 
            // not forms a cycle 
            if (s.find(x) != s.find(y)) { 
                s.unite(x, y); 
                ans = (ans%k+w%k)%(k); 
                
            } 
        } 
        cout << ans%k<<endl; 
    } 
}; 
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    Graph g(n);
    while(m--){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        c%=k;
        g.addEdge(a,b,c,k);
    }
    g.kruskals_mst(k);
    return 0;
}