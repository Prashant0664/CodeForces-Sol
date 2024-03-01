#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int help(vector<int> v, vector<int> v2, int i, int k, set<int> st, vector<int> vis, vector<vector<vector<int>>> &dp)
{
    if (k == 0)
    {
        return 0;
    }
    if (i == v.size())
    {
        int m = 0;
        if (!st.empty())
            m = *(st.rbegin());
        return k * m;
    }
    if (dp[i][k][vis[i]] != -1)
    {
        return dp[i][k][vis[i]];
    }
    int t = 0;
    int nt = 0;
    if (vis[i] == 1)
    {
        int m = 0;
        if (!st.empty())
            m = *(st.rbegin());
        t += m;
        t += help(v, v2, i, k - 1, st, vis, dp);
        return dp[i][k][vis[i]] = t;
    }
    else
    {
        int m = 0;
        if (!st.empty())
            m = *(st.rbegin());
        int h = 0;
        h = m + help(v, v2, i, k - 1, st, vis, dp);
        int mm = 0;
        nt += v[i];
        st.insert(v2[i]);
        vis[i] = 1;
        mm = nt + help(v, v2, i + 1, k - 1, st, vis, dp);
        return dp[i][k][vis[i]] = max(h, mm);
    }
}
void solution()
{
    ll n;
    cin>>n;
    vector<ll> v(n), v2(n), v3(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v3[i];
    }
    vector<pair<ll,ll>> vv(n), vv2(n), vv3(n);
    // vector<vector<pair<ll,ll>>>vm;
    for(int i=0;i<n;i++){
        vv.push_back({v[i],i});
        vv2.push_back({v2[i],i});
        vv3.push_back({v3[i],i});
    }
    sort(vv.begin(),vv.end());
    sort(vv2.begin(),vv2.end());
    sort(vv3.begin(),vv3.end());
    reverse(vv.begin(),vv.end());
    // vm.push_back(vv);
    reverse(vv2.begin(),vv2.end());
    // vm.push_back(vv2);
    reverse(vv3.begin(),vv3.end());
    ll ans=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(vv2[j].second != vv[i].second && vv3[k].second != vv[i].second && vv3[k].second != vv2[j].second)
                {
                    ans = max(vv[i].first + vv2[j].first + vv3[k].first , ans);
                }

            }
        }
    }
    cout<<ans<<endl;
    return;
    // vm.push_back(vv3);
    // int i1=0,i2=0,i3=0;
    // int max1=0,max2=0,max3=0;
    // sort(vm.begin(),vm.end());
    // reverse(vm.begin(),vm.end());
    // i1=vm[0][0].second;
    // max1=vm[0][0].first;
    // if(i1==vm[1][0].second){
    //     max2=vm[1][1].first;
    //     i2=vm[1][1].second;
    // }
    // else{
    //     max2=vm[1][0].first;
    // }
    // if(vm[2][0].second==i2 || vm[2][0].second==i1){
    //     if(vm[2][1].second==i2 || vm[2][1].second==i1){
    //         max3=vm[2][2].first;
    //     }
    //     else{
    //         max3=vm[2][1].first;
    //     }
    // }
    // else{
    //     max3=vm[2][0].first;
    // }
    // cout<<endl;
    // cout<<max1<<" "<<max2<<" "<<max3<<" \n";
    // cout<<max1+max2+max3<<" \n";
    // if(vv[0].second!=vv2[0].second && vv2[0].second!=vv3[0].second && vv[0].second!=vv[0].second){
    //     cout<<vv[0].first+vv2[0].first+vv3[0].first<<endl;
    //     return;
    // }


    int max1 = 0, max2 = 0, max3 = 0;
    int i1 = 0, i2 = 0, i3 = 0;
    int ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= max1)
        {
            max1 = v[i];
            i1 = i;
            ans1 = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v2[i] >= max1)
        {
            max1 = v2[i];
            i1 = i;
            ans1 = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v3[i] >= max1)
        {
            max1 = v3[i];
            i1 = i;
            ans1 = 3;
        }
    }
    // cout<<ans1<<"-> ";
    int ans2 = 0, ans3 = 0;
    if (ans1 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v2[i] >= max2 && i != i1)
            {
                max2 = v2[i];
                i2 = i;
                ans2 = 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v3[i] >= max2 && i != i1)
            {
                max2 = v3[i];
                i2 = i;
                ans2 = 3;
            }
        }
        if (ans2 == 2)
        {
            // cout<<ans2<<"-> ";
            for (int i = 0; i < n; i++)
            {
                if (v3[i] >= max3 && i != i1 && i != i2)
                {
                    max3 = v3[i];
                    i3 = i;
                    ans3 = 3;
                }
            }
        }
        else
        {
            // cout<<ans3
            for (int i = 0; i < n; i++)
            {
                if (v2[i] >= max3 && i != i1 && i != i2)
                {
                    max3 = v2[i];
                    i3 = i;
                    ans3 = 2;
                }
            }
        }
    }
    else if (ans1 == 2) //here
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= max2 && i != i1)
            {
                max2 = v[i];
                i2 = i;
                ans2 = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v3[i] >= max2 && i != i1)
            {
                max2 = v3[i];
                i2 = i;
                ans2 = 3;
            }
        }
        if (ans2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (v3[i] >= max3 && i != i1 && i != i2)
                {
                    max3 = v3[i];
                    i3 = i;
                    ans3 = 3;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] >= max3 && i != i1 && i != i2)
                {
                    max3 = v[i];
                    i3 = i;
                    ans3 = 1;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v2[i] >= max2 && i != i1)
            {
                max2 = v2[i];
                i2 = i;
                ans2 = 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= max2 && i != i1)
            {
                max2 = v[i];
                i2 = i;
                ans2 = 1;
            }
        }
        if (ans2 == 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] >= max3 && i != i1 && i != i2)
                {
                    max3 = v[i];
                    i3 = i;
                    ans3 = 3;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v2[i] >= max3 && i != i1 && i != i2)
                {
                    max3 = v2[i];
                    i3 = i;
                    ans3 = 3;
                }
            }
        }
    }
    cout<<endl<<max1<<" "<<max2<<" "<<max3<<"-\n";
    cout<<max1+max2+max3<<endl;
    return;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
}