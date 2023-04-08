#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<bool> used(n, false);

    // Check if the painted cell can be in a square with side length 1
    if (x == 0 || y == 0) {
        used[0] = true;
    }

    // Check squares with side lengths F1, F2, ..., Fn-1
    for (int k = 1; k < n; k++) {
        int f = 1, g = 1;
        for (int i = 0; i < k; i++) {
            int t = f + g;
            f = g;
            g = t;
        }
        int len = f;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (used[i]) continue;
            if (i > 0 && used[i-1]) continue;
            if (i < n-1 && used[i+1]) continue;
            if (found) {
                // Two squares with the same side length are adjacent
                cout << "NO\n";
                return 0;
            }
            if ((i == x && len == y+1) || (i == y && len == x+1)) {
                // The painted cell is adjacent to this square
                found = true;
            }
            if (len == 1) {
                // This is the only square with side length 1
                used
z