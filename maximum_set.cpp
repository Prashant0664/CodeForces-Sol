// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // const int MOD = 998244353;

// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int l, r;
// //         cin >> l >> r;

// //         vector<int> dp(r+1, 1);
// //         int max_size = 1;
// //         for (int j = l+1; j <= r; j++) {
// //             for (int i = l; i < j; i++) {
// //                 if (j % i == 0) {
// //                     dp[j] = max(dp[j], dp[i]+1);
// //                 }
// //                 if (i % j == 0) {
// //                     dp[i] = max(dp[i], dp[j]+1);
// //                 }
// //             }
// //             max_size = max(max_size, dp[j]);
// //         }

// //         int count = 0;
// //         for (int i = l; i <= r; i++) {
// //             if (dp[i] == max_size) {
// //                 count++;
// //             }
// //         }

// //         cout << max_size << " ";
// //         cout << count << endl;
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #define MOD 998244353

// using namespace std;

// vector<int> divisors[1000001];
// int dp[1000001];

// int main() {
//     for (int i = 1; i <= 1000000; i++) {
//         for (int j = i; j <= 1000000; j += i) {
//             divisors[j].push_back(i);
//         }
//     }

//     int t;
//     cin >> t;
//     while (t--) {
//         int l, r;
//         cin >> l >> r;

//         for (int i = l; i <= r; i++) {
//             dp[i] = 1;
//         }

//         int max_size = 1;
//         for (int i = l+1; i <= r; i++) {
//             for (int j = 0; j < divisors[i].size(); j++) {
//                 int d = divisors[i][j];
//                 if (d < l) continue;
//                 dp[i] = (dp[i] + dp[d]) % MOD;
//             }
//             max_size = max(max_size, dp[i]);
//         }

//         int count = 0;
//         for (int i = l; i <= r; i++) {
//             if (dp[i] == max_size) {
//                 count++;
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int t, l, r, phi[1000005], cnt[1000005], f[1000005];

void sieve() {
    for(int i = 1; i <= 1000000; i++) phi[i] = i;
    for(int i = 2; i <= 1000000; i++) {
        if(phi[i] == i) {
            for(int j = i; j <= 1000000; j += i) {
                phi[j] -= phi[j] / i;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    cin >> t;

    while(t--) {
        cin >> l >> r;

        for(int i = l; i <= r; i++) cnt[i-l] = 0;

        for(int i = 1; i <= r; i++) {
            for(int j = i; j <= r; j += i) {
                if(i >= l && j >= l && j % i == 0) {
                    cnt[j-l]++;
                }
            }
        }

        for(int i = l; i <= r; i++) f[i-l] = 1;

        for(int i = 2; i <= r; i++) {
            if(phi[i] == i) {
                for(int j = i; j <= r; j += i) {
                    if(j >= l) {
                        f[j-l] = 1ll * f[j-l] * (cnt[j-l] + 1) % mod;
                    }
                }
            }
        }

        int ans1 = 0, ans2 = 0;
        for(int i = l; i <= r; i++) {
            if(f[i-l] > ans1) {
                ans1 = f[i-l];
                ans2 = 1;
            } else if(f[i-l] == ans1) {
                ans2++;
            }
        }

        cout << ans1 << " " << ans2 << "\n";
    }

    return 0;
}
