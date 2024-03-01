#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution()
{
    ll n, m;
    // cin>>n;
    string s;
    cin >> s;
    n = s.length();
    vector<pair<char, int>> v;
    vector<pair<char, int>> v2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            if (v.size() > 0)
            {
                v.pop_back();
            }
        }
        else if (s[i] == 'B')
        {
            if (v2.size() > 0)
            {
                v2.pop_back();
            }
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            v.push_back({s[i], i});
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            v2.push_back({s[i], i});
        }
    }
    set<int> st;
    for (auto i : v)
    {
        st.insert(i.second);
    }
    for (auto i : v2)
    {
        st.insert(i.second);
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (st.find(i) != st.end())
        {
            ans += s[i];
        }
    }
    cout << ans<<"" << endl;
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