#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solver()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll z = 0;
    vector<ll> pos;
    reverse(s.begin(), s.end());
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z++;
            pos.push_back(i + 1);
        }
    }
    ll k = 1, prev = 0;
    for (ll i = 0; i < pos.size(); i++)
    {
        cout << pos[i] - k + prev << " ";
        prev += pos[i] - k;
        k++;
    }
    for (ll i = 0; n < z; i++)
    {
        cout << -1 << " ";
    cout << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
    return 0;
}