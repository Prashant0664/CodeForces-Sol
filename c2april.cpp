#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
const int N = 1e5 + 5;
long long k[N], a[N], b[N], c[N];
int n, m;
long long calc(long long x, long long y)
{
    return a[y] * x * x + b[y] * x + c[y];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> k[i];
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
        }
        for (int i = 1; i <= m; i++)
        {
            bool found = false;

            for (int j = 1; j <= n; j++)
            {
                if (a[i] * k[j] * k[j] + b[i] * k[j] >= 0)
                {
                    if (calc(k[j], i) < 0)
                    {
                        cout << "YES" << endl
                             << -k[j] << endl;
                        ;
                    }
                    else
                    {
                        cout << "YES" <<endl<< k[j] << endl;
                    }
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"NO"<<endl;
            }
        }
    }
}