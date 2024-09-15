
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    string a, b, c;
    cin >> a >> b >> c;

    if (a == ">" && b == "<")
    {
        cout << "A";

        return;
    }

    if (a == "<" && b == ">")
    {
        cout << "A";

        return;
    }
    if (a == ">" && c == ">")
    {
        cout << "B";

        return;
    }
    if (a == "<" && c == "<")
    {
        cout << "B";

        return;
    }

    if (a == "<" && c == ">")
    {
        cout << "C";

        return;
    }

    if (a == ">" && c == "<")
    {
        cout << "C";

        return;
    }

    return;
}
int main()
{
    solution();
    return 0;
}