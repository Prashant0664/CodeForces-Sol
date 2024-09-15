#include <bits/stdc++.h>
using namespace std;

int solve(const vector<vector<int>>& prefix_freq, int start, int end) {
    vector<int> freq(26, 0);
    for (int i = 0; i < 26; ++i) {
        freq[i] = prefix_freq[end][i];
        if (start > 0) {
            freq[i] -= prefix_freq[start - 1][i];
        }
    }
    int extra_time = 0;
    for (int count : freq) {
        if (count > 1) {
            extra_time += (count * (count - 1)) / 2; 
        }
    }
    return extra_time;
}

int main() {
    string s;
    int k;
    cin >> s >> k;

    int n = s.size();
    vector<vector<int>> prefix_freq(n, vector<int>(26, 0));
    vector<int> dp(n + 1, INT_MAX);

    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            for (int j = 0; j < 26; ++j) {
                prefix_freq[i][j] = prefix_freq[i - 1][j];
            }
        }
        prefix_freq[i][s[i] - 'a']++;
    }

    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            int extra = solve(prefix_freq, j, i - 1);
            dp[i] = min(dp[i], dp[j] + extra + k);
        }
    }

    
    cout << dp[n] - k << endl; 

    return 0;
}