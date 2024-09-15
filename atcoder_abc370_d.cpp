#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int ans = n * m; 
    vector<set<int>> rw(n+1);
    vector<set<int>>col(m+1);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            rw[i].insert(j);
            col[j].insert(i);
        }
    for (int q = 0; q < k; ++q) {
        int r, c;
        cin >> r >> c;
        if (rw[r].count(c)) {
            rw[r].erase(c);
            col[c].erase(r);
            ans--;
        } else {
            auto it = col[c].lower_bound(r);
            if (it != col[c].begin()) {
                it--;
                int wallRow = *it;
                rw[wallRow].erase(c);
                col[c].erase(it);
                ans--;
            }
            it = col[c].lower_bound(r);
            if (it != col[c].end()) {
                int wallRow = *it;
                rw[wallRow].erase(c);
                col[c].erase(it);
                ans--;
            }
            auto it2 = rw[r].lower_bound(c);
            if (it2 != rw[r].begin()) {
                it2--;
                int wallCol = *it2;
                rw[r].erase(it2);
                col[wallCol].erase(r);
                ans--;
            }
            it2 = rw[r].lower_bound(c);
            if (it2 != rw[r].end()) {
                int wallCol = *it2;
                rw[r].erase(it2);
                col[wallCol].erase(r);
                ans--;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
