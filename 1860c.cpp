#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik, n) for (int i = ik; i < n; i++)
typedef long long int ll;
vector<ll> constructLowerArray(vector<ll> &arr)
{
    vector<ll> ans, temp;
    ll n = arr.size();
    for (ll i = n - 1; i >= 0; i--)
    {
        ll c = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        ans.push_back(c);
        temp.insert(temp.begin() + c, arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
/// @brief 
/// @return 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, a, b;
        cin >> n;
        vector<ll> v(n);
        vector<ll> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v2[i] = v[i];
        }
        if (n <= 1)
        {
            cout << 0 << endl;
            continue;
        }

        set<ll> s;
        set<ll> set22;
        set22.insert(v[0]);
        int f = 0;
        sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v2[i]] = 1;
            if (v2[i] != v[i])
            {
                f = 1;
                break;
            }
        }
        f = 1;
        if (f == 0)
        {
            cout << 0 << endl;
            continue;
        }
        ll ans1 = 0;
        ll ans2 = 0;
        // 2 1 5 3 4
        // 2 1 5 3 4
        // - - 5 3 4
        for (int i = 1; i < n; i++)
        {
            if ((set22.lower_bound(v[i]) != set22.begin()) && (s.lower_bound(v[i]) == s.begin()))
            {
                s.insert(v[i]);
                set22.insert(v[i]);
                cout << v[i] << " ;";
                ans1++;
            }
            else
            {
                set22.insert(v[i]);
            }
        }
        cout << ans1 << " <> \n";
        reverse(v.begin(), v.end());
        vector<ll> te = constructLowerArray(v);
        reverse(te.begin(), te.end());
        for (int i = 0; i < n; i++)
        {
            cout << te[i] << " ";
            if (te[i] == 1 || te[i] == 2)
            {
                ans2++;
            }
        }
        cout << ans2 << "-" << endl;
        // cout<<ans1<<endl;
        // cout<<max(ans1,ans2)<<endl;
    }
}