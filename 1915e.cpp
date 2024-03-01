#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int subarraySum(vector<ll> &arr, ll k)
{
    ll n = arr.size(); // take the size of the array

    ll prefix[n]; // make a prefix array to store prefix sum

    prefix[0] = arr[0]; // for element at index at zero, it is same

    // making our prefix array
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = arr[i] + prefix[i - 1];
    }

    unordered_map<ll, ll> mp; // declare an unordered map

    ll ans = 0; // to store the number of our subarrays having sum as 'k'

    for (ll i = 0; i < n; i++) // traverse from the prefix array
    {
        if (prefix[i] == k) // if it already becomes equal to k, then increment ans
            ans++;

        // now, as we discussed find whether (prefix[i] - k) present in map or not
        if (mp.find(prefix[i] - k) != mp.end())
        {
            ans += mp[prefix[i] - k]; // if yes, then add it our answer
        }

        mp[prefix[i]]++; // put prefix sum into our map
    }

    return ans; // and at last, return our answer
}
bool hasZeroSumSubarray(vector<ll> nums)
{
    ll n = nums.size();
    unordered_set<ll> set;
    set.insert(0);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += nums[i];
        if (set.find(sum) != set.end())
        {
            return true;
        }
        else
        {
            set.insert(sum);
        }
    }
    return false;
}
void solution()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    ll f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 1 && v[i] == v[i - 1])
        {
            f = 1;
        }
    }
    if (f)
    {
        cout << "YES\n";
        return;
    }
    //  if(subarraySum(v,0)){
    //     cout<<"YES\n";
    //     return;
    //  }
    //  cout<<"NO\n";
    //  return;
    vector<ll> ans1, ans2, ans3, ans4;
    for (int i = 0; i < n; i += 2)
    {
        ans1.push_back(v[i] - v[i + 1]);
    }

    if (hasZeroSumSubarray(ans1))
    {
        cout << "YES\n";
        return;
    }
}
void solution2()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    ll f = 0;
    ll ith = 0, jth = 0;
    ll mf=0;
    // unordered_map<ll, ll> differenceithjth;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(mf==1)continue;
        // if (i > 1 && v[i] == v[i - 1])
        // {
        //     f = 1;
        // }
        if (i % 2 == 1)
        {
            jth += v[i];
        }
        else if (i % 2 == 0)
        {
            ith += v[i];
        }
        else
        {
            cout << "NO\n";
            return;
        }
        // if (differenceithjth.find(jth - ith) != differenceithjth.end() || jth - ith == 0)
        if (jth - ith == 0 || st.find(jth - ith) != st.end())
        {
            cout << "YES" << endl;
            mf=1;
            // return;
        }
        st.insert(jth - ith);
    }
    // if (f)
    // {
    //     cout << "YES\n";
    //     return;
    // }

    // for (int i = 0; i < n; i++)
    // {
        
    // }
    if(mf==0)cout << "NO\n";
    return;
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