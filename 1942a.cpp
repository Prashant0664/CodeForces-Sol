#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int _ = 1;
    cin >> _;
    while (_--)
    {
        ll n, m;
        cin >> n >> m;
        // cout<<";";
        if (m == 1)
        {
            vector<ll> v;
            v.push_back(n);
            for (int i = 0; i < n - 1; i++)
            {
                v.push_back(i + 1);
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << ' ';
            }
            cout << endl;
            // return 0;
        }
        else if (n == m)
        {
            vector<ll> v;
            for (int i = 0; i < n; i++)
            {
                v.push_back(1);
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << ' ';
            }
            cout << endl;
            // return 0;
        }
        else 
        cout << -1 << endl;
    }
    return 0;
}