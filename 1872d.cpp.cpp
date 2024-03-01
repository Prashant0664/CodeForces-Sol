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
            if (n % 2 != 0 && n != 1)
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
            // cout<<"--";
            cout << n / 2 << " " << n / 2 << endl;
            return;
        }
        else
        {
            if (!n % 2)
            {
                // cout<<9494;
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
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
   
    return gcd(b, a % b);
}
 
// Function to return LCM of
// two numbers
long long lcm(ll a, ll b) {
      return (a / gcd(a, b)) * b;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll a=n/x;
        if(x==y){
            cout<<0<<endl;
            continue;
        }
        ll b=n/y;
        ll s=n*(n+1)/2;
        ll c=n/(lcm(x,y));
        if(a-c<=0){
            n=b-c;
            cout<<"-";
            cout<<n*(n+1)/2<<endl;
            continue;
        }
        else if(x>=y && x%y==0){
            ll j=b-a;

            cout<<"-"<<j*(j+1)/2<<endl;
            continue;
        }
        else{
            // cout<<b<<" "<<c<<endl;
            ll left=n-(a-c);
            ll right=b-c;
            ll d=lcm(x,y);
            // cout<<a<<" "<<b<<" "<<c<<endl;
            // cout<<left<<" "<<right<<" ";
            cout<<s-(left*(left+1)/2)-right*(right+1)/2<<endl;
        }
    }
    return 0;
}