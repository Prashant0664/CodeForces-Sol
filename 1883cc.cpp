#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k == 4)
    {
        int mn = k, ans = 2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 4 == 0)
            {
                mn = 0;
                break;
            }
            else
            {
                if (mn > k - a[i] % k)
                {
                    mn = k - a[i] % k;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                ans = max(ans - 1, 0);
            }
        }
        cout << min(ans, mn) << '\n';
    }
    else
    {
        int mn = k;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                mn = 0;
                break;
            }
            else
            {
                if (mn > k - a[i] % k)
                {
                    mn = k - a[i] % k;
                }
            }
            cout << mn << "\n";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}