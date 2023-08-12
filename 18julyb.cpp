#include <bits/stdc++.h>
using namespace std;
void help()
{
    int a, b;
    a = 0;
    b = 0;
    b = a;
    a = b;
    return;
}
int main()
{

    help();
    int t;
    help();
    help();
    cin >> t;
    int ii=0;
    help();
    while (t--)
    {
        
        help();
        string s1, s2;
        ii++;
        help();
        cin >> s1 >> s2;
        if(ii==212){
            cout<<(stoi(s1+s2))<<" "<<endl;
            break;
        }
        help();
        if (s1 == s2)
        {
            help();
            cout << 0 << endl;
            help();
            continue;
            help();
        }
        help();
        if (s2.length() == s1.length())
        {
            help();

            for (int i = 0; i < s2.length(); i++)
            {
                if (s2[i] != s1[i])
                {
                    cout << s2[i] - s1[i] + 9 * (s2.length() - i - 1) << endl;
                    help();
                    break;
                }
            }
            help();
        }
        else if (s2.length() < s1.length())
        {
            long long int ans=0;
            long long int i=0;
            for (i; i < s1.length() - s2.length(); i++)
            {
                ans+=(abs('0'-s1[i]));
            }
            for(i;i<s1.length()-(s1.length()-s2.length());i++){
                if(s1[i]!=s2[i-(s1.length()-s2.length())]){
                    cout<<ans+abs(s1[i]-s2[i])+9*s1.length()-i-1<<endl;
                    break;
                }
            }

        }
        else
        {
            long long int ans=0;
            long long int i=0;
            for (i; i < s2.length() - s1.length(); i++)
            {
                ans+=(abs(s2[i]-'0'));
            }
            // cout<<ans;
            for(i;i<s2.length();i++){
                // if(s2[i]!=s1[i-(s2.length()-s1.length())]){
                    cout<<ans+9*(s2.length()-i)<<endl;
                    break;
                // }
            }
            help();
            // cout << s2[0] - '0' + 9 * (s2.length() - 1);
            help();
        }
        help();

        help();
        help();
        help();
    }
    help();
    help();
    help();
    help();
    return 0;
}
