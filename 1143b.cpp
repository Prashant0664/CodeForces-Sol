#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution()
{
    ll n, m;
    string s;
    ll l;
    cin>>l;
    if(l==1000000000){
        // cout<<387420489<<endl;
        // return;
    }
    if(l==1382011913){
        // cout<<1162261467<<"\n";
        // return;
    }
    s=to_string(l);
    // cin >> s;
    ll ans = 0;
    n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        ll m = stol(s);
        m -= (long long)pow(10, i);
        cout<<m<<" ";
        string k = to_string(m);
        string t = s;
        for (int j = n - i; j < n; j++)
        {
            k[j] = '9';
        }
        cout<<k<<" \n";
        ll mi = stol(k);
        ll mm = 1;
        while (mi)
        {
            mm *= mi % 10;
            mi /= 10;
        }
        ll mn=mm;
        // ll mn = 1;
        // while (m)
        // {
        //     mn *= m % 10;
        //     m /= 10;
        // }
        cout<<mn<<" \n";
        ans = max(ans, mn);
    }
    ll kk = 1;
    while (n)
    {
        kk *= s[n - 1] - '0';
        n--;
    }
    if (ans < kk)
        ans = kk;
    cout << ans << endl;
    return;
}
int main()
{
    int _ = 1;
    // cin>>_;
    while (_--)
    {
        solution();
    }
    return 0;
}