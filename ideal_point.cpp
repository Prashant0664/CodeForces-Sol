#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        vector<vector<int>> v;
        vector<vector<int>> v2;
        // vector<pair<int,int>>v3;
        for (int i = 0, x, y; i < n; i++)
        {
            cin >> x >> y;
            if (x <= k && y >= k)
            {
                v.push_back({x, y});
                v2.push_back({y, x});
            }
        }
        if (v.size() == 0)
        {
            cout << "NO";
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i][0] << " " << v[i][1] << " ";
            }

            sort(v.begin(), v.end());
            sort(v2.begin(), v2.end());
            cout << endl;
            int l = v[n - 1][0];
            int r = v2[0][0];
            if (l == r)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        cout << endl;
    }
    return 0;
}