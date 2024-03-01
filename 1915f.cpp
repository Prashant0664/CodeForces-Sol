#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void findIntersection(vector<pair<ll, ll>> v, ll n)
{
    vector<pair<ll, ll>> data;
    vector<vector<ll>> answer(n);
    for (ll i = 0; i < n; i++)
    {
        data.push_back(make_pair(v[i].first, i));

        data.push_back(make_pair(v[i].second, i));
    }
    sort(data.begin(), data.end());
    ll curr = 0;
    set<pair<ll, ll>> s;
    for (auto it : data)
    {
        if (curr >= n)
            break;
        if (s.count(it))
            s.erase(it);
        else
        {
            ll i = it.second;
            ll j = v[i].second;
            for (auto k : s)
            {
                if (k.first > j)
                    break;
                ll index = k.second;
                answer[i].push_back(index);
                answer[index].push_back(i);
                curr++;
                if (curr >= n)
                    break;
            }
            s.insert(make_pair(j, i));
        }
    }
    ll ans = 0;
    set<vector<ll>> st;
    for (ll i = 0; i < n; i++)
    {

        // cout << "{" << v[i].first << ", " << v[i].second << "}"
        //      << " is llersecting with: ";

        for (ll j = 0; j < answer[i].size(); j++){
            if (
                st.find(
                    {v[answer[i][j]].first, v[answer[i][j]].second, v[i].first, v[i].second}) != st.end())
            {
                // continue;
            }
            else
            {
            }
        // cout << "{" << v[answer[i][j]].first << ", "
        //      << v[answer[i][j]].second << "}"
        //      << " ";
        st.insert({v[i].first, v[i].second, v[answer[i][j]].first, v[answer[i][j]].second});
        ans++;
        }
    }
    cout << ans << endl;
}

void solution2()
{
    ll n;
    cin>>n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(),v.end());
    findIntersection(v, n);
    // 5 4
    // 6 2
    // 9 3
    // 8 1
    // 10 7
    // 100 -2
}
int main()
{
    int _ = 1;
    cin >> _;
    while (_--)
    {
        solution2();
    }
}