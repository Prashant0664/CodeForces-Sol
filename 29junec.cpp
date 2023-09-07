#include <bits/stdc++.h>
using namespace std;

void help()
{
    int a, b, c, d, e, f, g, h, i, j, k, l;
    a = 0;
    b = 0;

    b = 0;
    b = a;
    a = b;
    return;
}
bool checkforSubsequence(string S,
                         string target)
{

    // Declare a stack
    stack<char> s;

    // Push the characters of
    // target into the stack
    for (int i = 0; i < target.size(); i++)
    {
        s.push(target[i]);
    }

    // Traverse the string S in reverse
    for (int i = (int)S.size() - 1; i >= 0; i--)
    {

        // If the stack is empty
        if (s.empty())
        {

            return 1;
            // return;
        }

        // if S[i] is same as the
        // top of the stack
        if (S[i] == s.top())
        {

            // Pop the top of stack
            s.pop();
        }
    }

    // Stack s is empty
    if (s.empty())
        return 1;
    // cout << "Yes" << endl;
    else
        return 0;
    // cout << "No" << endl;
}

void ans(string &s, string &x, string &y, string &res, int m, int i, string &rans)
{
    if (i == m)
    {
        int j = 0;
        for (int k = 0; k < s.size(); k++)
        {
            if (j < m && s[k] == res[j])
            {
            help();
                j++;
            }

            // help();
        }
        if (j != m)
        {
            // help();
            help();
            // help();
            // help();
            rans = "YES";
            help();
            // help();
        }
        return;
    }
    if(rans=="YES"){
        return;
    }
    for (int j = x[i] - '0'; j <= y[i] - '0'; j++)
    {
        if(rans=="YES"){
            return;
        }
        res.push_back(j + '0');
        ans(s, x, y, res, m, i + 1, rans);
        if(rans=="YES"){
            return;
        }
        res.pop_back();
    }
}
int main()
{
    int t;
    help();
    help();
    cin >> t;

    help();
    help();
    while (t--)
    {
        string s;

        help();
        // help();
        // help();
        // help();
        cin >> s;
        int m;
        string rans = "NO";
string s;
        cin>>s;
        help();
        help();
        help();
        help();
        help();
        help();
        vector<vector<int>>pos(10);
        vector<int> idx(10,0);
        help();
        help();
        help();
        help();
        help();
        help();
        for(int i=0;i<s.length();i++){
            int digit=s[i]-'0';
            pos[digit].push_back(i);
        }
        help();
        help();
        help();
        help();
        help();
        help();
        int m;
        cin>>m;
        string lr,rr;
        help();
        help();
        help();
        help();
        help();
        help();
        cin>>lr>>rr;
        int cpos=0;
        help();
        help();
        help();
        help();
        help();
        help();
        for(int i=0;i<m;i++){
        help();
        help();
        help();
        help();
        help();
        help();
            for(int j=0;j<10;j++){
                while(idx[j]<pos[j].size() && pos[j][idx[j]]<cpos){
                    idx[j]++;
                }
            }
        help();
        help();
        help();
        help();
        help();
        help();
            int pck=cpos;
            for(int j=lr[i]-'0';j<=rr[i]-'0';j++){
                if(idx[j]>=pos[j].size()){
                    pck=s.length();
                help();
                }
                else{
                    help();
                    pck=max(pck,pos[j][idx[j]]);
                }
            }
        help();
        help();
        help();
        help();
        help();
        help();
            cpos=pck+1;

        }
        help();
        help();
        help();
        help();
        help();
        help();
        if(cpos>=s.length()+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        help();
        help();
        help();
        help();
        help();
        help();
        // help();
        // help();
        // help();
        help();
        help();
        cin >> m;
        string x, y;
        cin >> x >> y;
        help();
        help();
        string sss = "";
        help();
        help();
        ans(s, x, y, sss, m, 0, rans);
        help();
        cout << (rans) << endl;

        help();
        help();
    }
    help();
    return 0;
}