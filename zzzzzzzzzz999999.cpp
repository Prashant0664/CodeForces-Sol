#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int ans = 0;
    int ll = n;
    int siz = 0;
    vector<vector<int>> v(n * 2 - 2, vector<int>(n + 2, -1));
    while (ll > 0)
    {
        siz += ll;
        ll -= 2;
    }
    cout << siz;
    vector<vector<int>> v2(siz * 2 + 1);
    int m = 1;
    int k = n / 2;
    int e = 1;
    cout << endl;
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = k + 1; j < k + 1 + m; j++)
        {
            v[i][j] = e;
            e++;
            // cout<<e<<endl;
        }
        m += 2;
        k--;
    }
    k++;
    for (int i = n / 2 + 2; i < n * 2 - 3; i++)
    {
        for (int j = k + 1; j < k + m - 1; j++)
        {
            v[i][j] = e;
            e++;
        }
        m -= 2;
        k++;
    }

    for (int i = 1; i < v.size() - 1; i++)
    {
        // cout<<i<<" ";
        int t = 1;
        for (int j = 1; j < v[0].size() - 1; j++)
        {
            if (v[i][j] == -1)
            {
                continue;
            }
            if (v[i][j - 1] != -1)
            {
                v2[v[i][j]].push_back(v[i][j - 1]);
            }
            if (v[i][j + 1] != -1)
            {
                v2[v[i][j]].push_back(v[i][j + 1]);
            }
            v2[v[i][j]].push_back(v[i][j]);
            if (i < v.size() / 2)
            {
                if (t == 1)
                {
                    if (v[i + 1][j] != -1)
                    {
                        v2[v[i][j]].push_back(v[i + 1][j]);
                    }
                    t = 0;
                }
                else if (t == 0)
                {
                    if (v[i - 1][j] != -1)
                    {
                        v2[v[i][j]].push_back(v[i - 1][j]);
                    }
                    t = 1;
                }
            }
            else
            {
                if (t == 0)
                {
                    if (v[i + 1][j] != -1)
                    {
                        v2[v[i][j]].push_back(v[i + 1][j]);
                    }
                    t = 1;
                }
                else if (t == 1)
                {
                    if (v[i - 1][j] != -1)
                    {
                        v2[v[i][j]].push_back(v[i - 1][j]);
                    }
                    t = 0;
                }
            }
            // cout<<"-";
        }
    }
    v2[v2.size() - 1].push_back(v2.size() - 1 - 2);
    v2[v2.size() - 1 - 2].push_back(v2.size() - 1);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << i << ": ";
        for (int j = 0; j < v2[i].size(); j++)
        {
            cout << v2[i][j] << ", ";
        }
        cout << endl;
    }
    int s;
    cin >> s;
    vector<int> ans(siz * 2 + 2, -1);
    queue<vector<int>> q;
    vector<int> vis(siz * 2 + 2, 0);
    q.push({s, 0});
    while (!q.empty())
    {
        auto t = q.front();
        q.pop();
        vis[t[0]] = t[1];
        ans[t[0]] = t[1];
        for (auto i : v2[t[0]])
        {
            if (!vis[i])
            {
                q.push({i, t[1] + 1});
            }
        }
    }
    for (int i = 1; i < ans.size() - 1; i++)
    {
        cout << i << ": " << ans[i] - 1 << endl;
    }

    vector<vector<int>> edge(siz * 2 + 1);
}