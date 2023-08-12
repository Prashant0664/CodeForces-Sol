#include <bits/stdc++.h>
using namespace std;
void help()
{
    int j = 0;
    int k = 0;
    int ll = 0;
    int oo = 0;
    int hh = 0;
}
int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        string s1, s2;

        cin >> s1 >> s2;

        int c1 = 0;

        int c2 = 0;

        // reverse(s2.begin(), s2.end());

        // reverse(s2.begin(), s2.end());

        for (int i = 0; i < n; i++)
        {
            //
            if (s1[i] != s2[i])
            {
                //
                c1++;
            }
        }

        reverse(s2.begin(), s2.end());

        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {

                c2++;
            }
        }
        reverse(s2.begin(), s2.end());

        if (c1 == 0)
        {

            cout << 0 << endl;
        }
        else if (c2 == 0)
        {

            cout << 2 << endl;
        }
        else
        {

            int a = ((2 * c1 - c1 % 2));
            int b = ((2 * c2 - (!(c2 % 2))));
            int nn = min(a, b);
            cout << nn;
            cout << endl;
        }
    }
    return 0;
}
