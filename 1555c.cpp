#include <bits/stdc++.h>
using namespace std;
#define pn(x) cout << x << endl;
#define ps_(x) cout << x << " ";
typedef long long int ll;

void solution()
{
    ll n, m;
    cin >> n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<vector<ll>> v(2, vector<ll>(n, 0));
    vector<vector<ll>> v2(2, vector<ll>(n, 0));
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[0][i];
        sum += v[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[1][i];
        sum += v[1][i];
    }
    if (n == 1)
    {
        pn(0);
        return;
    }
    if(n==2){
        cout<<min(v[0][1],v[1][0])<<endl;
        return;
    }
    v2[0][0] = v[0][0];
    for (int i = 1; i < n; i++)
    {
        v2[0][i] = v[0][i] + v2[0][i - 1];
    }
    v2[1][n - 1] = v[1][n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        v2[1][i] = v[1][i] + v2[1][i + 1];
    }
    ll ans = LLONG_MIN;
    ll rans = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        rans = min(rans, max(v2[1][0] - v2[1][i], v2[0][n - 1] - v2[0][i]));

    }
    // ps();
    // pn("\n");

    pn(rans);
    return;
}
int main()
{
    int _ = 1;
    cin >> _;
    while (_--)
    {
        solution();
    }
    return 0;
}