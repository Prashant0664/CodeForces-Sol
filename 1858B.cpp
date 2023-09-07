#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
typedef long long ll;

ll compute_initial_cookies(ll a, ll b, ll c, vector<ll>& sellers) {
    ll ans = 1;
    ll last_seller_position = 1;

    for(ll i = 0; i < b; i++) {
        if(sellers[i] == 1) continue;

        ll dist = sellers[i] - last_seller_position;
        ans += (dist % c == 0) ? dist / c : dist / c + 1;
        last_seller_position = sellers[i];
    }

    if(sellers[b - 1] != a) {
        ll dist = a - last_seller_position;
        ans += (dist % c == 0) ? dist / c : dist / c + 1;
    }
    return ans;
}

pair<ll, ll> get_minimum_cookies_and_positions(ll a, ll b, ll c, vector<ll>& sellers, ll initial_cookies) {
    ll minimum_cookies = INF;
    ll count = 0;

    for(ll i = 0; i < b; i++) {
        ll curr = initial_cookies;
        ll last_seller_position = (i == 0) ? 1 : sellers[i - 1];

        ll next_seller_position = (i == b - 1) ? a + 1 : sellers[i + 1];

        curr -= (sellers[i] - last_seller_position) / c;
        curr -= (next_seller_position - sellers[i] - 1) / c;
        curr += (next_seller_position - last_seller_position - 1) / c;

        if(curr < minimum_cookies) {
            minimum_cookies = curr;
            count = 1;
        } else if(curr == minimum_cookies) {
            count++;
        }
    }

    return make_pair(minimum_cookies, count);
}

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> sellers(b);
    for(ll i = 0; i < b; i++) {
        cin >> sellers[i];
    }

    ll initial_cookies = compute_initial_cookies(a, b, c, sellers);
    pair<ll, ll> result = get_minimum_cookies_and_positions(a, b, c, sellers, initial_cookies);

    cout << result.first << " " << result.second << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}