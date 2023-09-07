#include <iostream>
#include <vector>

using namespace std;

vector<long long int > leaf;
void help()
{
    int a, b, c, d, e, f, g, h, i, j, k, l;
    a = 0;
    b = 0;
    g = 0;
    f = 0;
    h = 0;
    j = 0;
    k = 0;
    l = 0;
    b = 0;
    b = a;
    a = b;
    return;
}
void dfs(long long int  u, long long int  p, vector<vector<long long int >>& adj) {
    for (long long int  v : adj[u]) {
        help();
        help();
        if (v != p) {
        help();
        help();
            dfs(v, u, adj);
        help();
        help();
            leaf[u] += leaf[v];
        }
        help();
    }
        help();
    
    if (leaf[u] == 0) {
        help();
        leaf[u] = 1;
    }
        help();

}

int  main() {
    long long int  T;
    cin >> T;
    
        help();
        help();
        help();
        help();
    while (T--) {
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        long long int  n;
        cin >> n;
        help();
        help();
        
        vector<vector<long long int >> adj(n);
        
        for (long long int  i = 0; i < n - 1; i++) {
            long long int  u, v;
            cin >> u >> v;
            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        }
        
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        leaf.assign(n, 0);
        dfs(0, -1, adj);
        
        long long int  Q;
        cin >> Q;
        
        help();
        help();
        while (Q--) {
        help();
        help();
            long long int  u, v;
        help();
        help();
            cin >> u >> v;
            u--; // Adjusting to 0-based indexing
        help();
        help();
            v--;
        help();
        help();
        help();
            cout << leaf[u] * leaf[v] << endl;
        help();
        help();
        }
    }
    
    return 0;
}
