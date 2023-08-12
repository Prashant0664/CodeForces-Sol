#include <iostream>
#include <cstring>

using namespace std;

int n, k;
char grid[105][105];
char target[105][105];

void rotate_180() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            target[i][j] = grid[n - i + 1][n - j + 1];
        }
    }
}

int count_diff() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (grid[i][j] != target[i][j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }

    rotate_180(); // compute target pattern

    int diff = count_diff(); // count differences
    if (diff % 2 == k % 2 && diff <= k) { // check if possible
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
    return 0;
}
