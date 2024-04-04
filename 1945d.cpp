#include <bits/stdc++.h>
using namespace std;
#define pn(x) cout << x << endl;
#define ps(x) cout << x << ' ';
typedef long long int ll;
int help(vector<ll> &a, vector<ll> &b, int i, vector<int> &v)
{
    if (i >= a.size())
    {
        return 0;
    }
    if (v[i] != -1)
        return v[i];
    int bt = b[i + 1] + help(a, b, i + 1, v);
    int bnt = a[i + 1] + help(a, b, i + 1, v);
    return v[i] = a[i] + min(bt, bnt);
}
void solution()
{
    ll n, m;
    cin >> n;
    cin >> m;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll ans = LLONG_MAX;
    ll sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + 1 <= m)
        {
            ans = min(ans, sum + a[i]);
        }
        else
        {
        }
        sum += min(a[i], b[i]);
        // cout<<sum<<" ";
    }
    // cout<<ans<<endl;
    // 1 4 1 13  
    std::cout << ans << endl;
    return;
}
int main()
{
    int _ = 1;
    cin >> _;
    while (_--)
    {
        solution();
    }
    return 0;
}
