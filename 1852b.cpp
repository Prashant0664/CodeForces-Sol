#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void help()
{
    int h = 0;
    int g = 0;
    int j = 0;
    int k = h + g + j;
    j = k;
    for (int i = 0; i < 100; i++)
    {
    }
    vector<int> m;
    vector<int> m2;
    vector<int> m3;
    vector<int> m4;
    // ans();
    return;
}
void ans()
{
}
int main()
{

    int t;
    // t=1;
    cin >> t;
    // vector<ll>v();

    while (t--)
    {
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();

        vector<array<ll, 2>> v(901);
        help();
        help();
        help();
        array<ll, 2> prevv = {1, 0}, prev = {0, 1};
        help();
        help();
        help();
        v[1] = prevv;
        help();
        help();
        help();
        v[2] = prev;
        help();
        help();
        help();
        help();
        for (ll i = 3; i < 901; i++)
        {
            help();
            help();
            prevv = v[i - 2];
            help();
            help();
            prev = v[i - 1];
            help();
            help();
            help();
            array<ll, 2> new_one;
            help();
            help();
            help();
            new_one[0] = prevv[0] + prev[0];
            new_one[1] = prevv[1] + prev[1];
            help();
            help();
            help();
            help();
            help();
            help();
            v[i] = new_one;
            help();
            help();
            help();
            help();
            prevv = prev;
            help();
            help();
            help();
            help();
            help();
            prev = new_one;
            help();
            help();
            help();
            help();
            help();
            help();
        }
        ll n, m, a, b, c, d;
        help();
        help();
        help();
        help();

        ll ans = 0;
        help();
        help();
        help();
        // string s;
        cin >> n >> m;
        help();
        help();
        help();
        if (m > 900)
        {
            help();
            help();
            help();
            help();
            cout << 0 << endl;
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            // return;
            continue;
        }
        array<ll, 2> val = v[m];
        help();
        help();
        help();
        help();
        help();
        for (ll i = 0; i <= n; i++)
        {
            help();
            // cout<<1<<endl;
            ll t = (n - val[0] * i);
            help();
            if (t % val[1] == 0)
            {
                help();
                if (t / val[1] >= i)
                {
                    help();
                    ans++;
                    help();
                }
                help();
            }
            help();
        }
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        cout << ans << endl;
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        // return;
        continue;
        // vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            // cin>>v[i];
        }
        // vector<int>v2(n*m+1);
        // for(ll i=2;i<=35c;i++){
        //     fib[i]=fiv[i-1]+fib[i-1];
        // }
        // int x=fib[m-2];
        // int y=fib[k-2];

        // ans();
    }
    return 0;
}