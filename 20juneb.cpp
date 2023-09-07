#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> help(vector<int> v, int i, int ind)
{
    vector<int> s;
    int n = v.size();
    for (int ig = ind + 1; ig < n; ig++)
    {
        s.push_back(v[ig]);
    }

    for (int ig = ind; ig >= i; ig--)
    {
        s.push_back(v[ig]);
    }
    for (int ig = 0; ig <= i - 1; ig++)
    {
        s.push_back(v[ig]);
    }
    return s;
}
vector<int> help2(vector<int> v, int i, int ind)
{
    vector<int> s;
    int n = v.size();
    // reverse(v.begin()+i,v.begin()+ind);
    for (int ig = ind + 1; ig < n; ig++)
    {
        s.push_back(v[ig]);
    }

    for (int ig = ind; ig >= i; ig--)
    {
        s.push_back(v[ig]);
    }
    for (int ig = 0; ig <= i - 1; ig++)
    {
        s.push_back(v[ig]);
    }
    return s;
}
int main()
{
    int _;
    cin >> _;
    while (_--)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);

        int e = 0;
        int mie = INT_MAX;
        int o = 0;
        int mi = INT_MAX;
        int ind = 0;
        int val = -1;
        string s = "";
        vector<int> ans(n, INT_MIN);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (val < v[i])
            {
                ind = i;
                val = v[i];
            }
            s += v[i];
        }
        int r = ind;
        if (ind > 0)
        {
            for (int i = 0; i < ind; i++)
            {
                vector<int> v2 = help(v, i, ind - 1);
                if (ans < v2)
                {
                    ans = v2;
                }
            }
            vector<int> jj = help(v, ind, ind);
            if (ans < jj)
            {
                ans = jj;
            }
        }
        else
        {
            val = -1;
            ind = -1;
            for (int i = 1; i < n; i++)
            {
                if (val < v[i])
                {
                    val = v[i];
                    ind = i;
                }
            }
            // ans[0]=v[0];
            for (int i = 0; i < ind; i++)
            {
                vector<int> v2 = help2(v, i, ind - 1);
                if (ans < v2)
                {
                    ans = v2;
                }
            }
            vector<int> jj = help(v, ind, ind);
            if (ans < jj)
            {
                ans = jj;
            }
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << endl;
    }
}
