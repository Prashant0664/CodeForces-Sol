#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
void help(ll n, ll m)
{
    int f = 1;
    int prime = 1;
    if (n < 0)
        prime = 1;
    if (n == 2)
        prime = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (n == m && (n == 1 || prime))
    {
        cout<<-1<<endl;
        return;
    }
    else if ((n == 1 && (m == 2 || m == 3)) || (n == 2 && m == 3))
    {
        cout<<-1<<endl;
        return;
    }
    if (f == 0)
    {
    }
    else
    {
        if (n != m)
        {
            if (n % 2 != 0 && n != -1)
            {
                n++;
            }
            else if (n == 1)
            {
                n += 3;
            }
            else if (n == 2)
            {
                n += 2;
            }
            cout << n / 2 << " " << n / 2 << endl;
            return;
        }
        else
        {
            if (!n % 2)
            {
                cout << n / 2 << " " << n / 2 << endl;
                return;
            }
            else
            {
                int h = 0;
                ll x = n;
                for (int i = 2; i * i <= n; i++)
                {
                    if (n % i == 0)
                    {
                        x = i;
                        h = 1;
                        break;
                    }
                }
                if (!h){
                    x = n;}
                cout << x << " " << abs(x - n) << endl;
                return;
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        help(n, m);

        // if(m-n==1){
        //     cout<<-1<<endl;
        //     continue;
        // }
        // if(n%2==0 && m-n>=2){
        //     if(n+n+2>m){
        //         cout<<-1<<endl;
        //         continue;
        //     }
        //     cout<<n<<" "<<n+2<<endl;
        //     continue;
        // }
        // if(m-n>=3){
        //     if(n+n+4>m){
        //         cout<<-1<<endl;
        //         continue;
        //     }
        //     cout<<n+1<<" "<<n+3<<endl;
        //     continue;
        // }
        // if(n%2==1 && m-n==2){
        //     cout<<-1<<endl;
        //     continue;
        // }
        // cout<<"----"<<endl;
    }
    return 0;
}