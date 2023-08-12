#include "bits/stdc++.h"
using namespace std;
#define for_(i, s, e) for (int i = s; i < (int) e; i++)
#define for__(i, s, e) for (ll i = s; i < e; i++)
typedef long long ll;
typedef vector<int> vi;
typedef array<int, 2> ii;
#define endl '\n'
 
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; ll k; cin >> n >> k;
        vector<ll> nums(n);
        for_(i, 0, n) cin >> nums[i];
        ll l = *max_element(nums.begin(), nums.end()), r = l + k + 1, ans = l;
 
        while (l < r) {
            ll mid = (l + r) / 2;
 
            bool valid = false;
            for_(target, 0, n - 1) {
                ll moves = 0;
                vector<ll> need(n);
                bool curr_valid = true;
 
                need[target] = mid;
 
                for_(i, target, n - 1) {
                    if (nums[i] >= need[i]) break;
                    moves += need[i] - nums[i];
                    if (moves > k) break;
 
                    if (i + 1 < n - 1) need[i + 1] = need[i] - 1;
                    else if (nums[n - 1] < need[i] - 1) curr_valid = false;
                }
 
                if (moves <= k and curr_valid) {
                    valid = true;
                    break;
                }
            }
 
            if (valid) {
                ans = mid;
                l = mid + 1;
            } else r = mid;
        }
 
        cout << ans << endl;
    }
}