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
    // string s;
    // cin>>s;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // vector<int>dp(n+1,-1);
    // dp[n-1]=a[n-1];
    // help(a,b,0,dp);
    for (int i = 0; i < n; i++)
    {
        // cout<<dp[i]<<" ";
    }
    // cout<<endl;
    // return;
    vector<ll> v(n, INT_MAX);
    v[n - 1] = a[n - 1];
    ll bs = b[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        v[i] = min(v[i], bs + a[i]);
        if (i == n - 2)
        {
            bs = min(b[n - 1], a[n - 1]);
        }
        bs = min(bs + b[i], bs + a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // cout<<v[i]<<" ";
    }
    // cout<<endl;
    ll ans = LLONG_MAX;
    for (int i = 0; i < m; i++)
    {
        // ans=min(ans,v[i]);
    }
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
    }
    // }
    std::cout << ans << endl;

    // pn(ans);
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