
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> k >> n >> m;
    if (m < n)
    {
        if (k < n && k > m)
        {
            cout << ("Yes");
        }
        else
        {
            cout << ("No");
        }
    }
    else
    {
        if (k < m && k > n)
        {
            cout << ("No");
        }
        else
        {
            cout << ("Yes");
        }
    }
    cout << endl;

    return 0;
}