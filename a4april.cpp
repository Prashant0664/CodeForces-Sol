#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t3;
        cin >> t3;
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        string ss = "";
        int f = 0;
        int h = 0;
        char c = s[0];
        if (n == 0)
        {
            cout << (s + '0') << endl;
        }
        else if (int(s[0]) - 48 < n)
        {
            ss += (char)(n + 48);
            for (int i = 0; i < t3; i++)
            {
                ss += s[i];
            }
            cout << ss << endl;
        }
        else
        {
            for (int i = 0; i < t3; i++)
            {
                if ((int(s[i]) - 48) < n)
                {
                    f = 1;
                    ss += (char)(n + 48);
                    ss += s[i];
                    h = i;
                    break;
                }
                else
                {
                    ss += s[i];
                }
            }
            if (ss.length() != t3)
                for (int i = h + 1; i < t3; i++)
                {
                    ss += s[i];
                    f = 1;
                }
            if (f != 1)
            {
                ss += char(n + 48);
            }
            cout << ss << endl;
        }
    }
    return 0;
}
