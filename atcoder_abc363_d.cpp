#include <bits/stdc++.h>
using namespace std;
#define pn(x) cout << x << endl;
#define ps(x) cout << x << ' ';
#define endo cout << endl;
#define printv(v)    \
    for (auto x : v) \
    {                \
        ps(x);       \
    }                \
    endo;
#define printve(v)   \
    for (auto x : v) \
    {                \
        ps(x);       \
    };
#define mod 1000000007
#define pll pair<ll, ll>
#define pii pair<int, int>
typedef long long int ll;

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

int dp[40][2];
ll help(ll digits)
{
    if (digits == 1)
        return 10;
    ll half = (digits + 1) / 2;
    return 9 * pow(10, half - 1);
}
void solution(ll n)
{
    if (n <= 10)
    {
        pn(n - 1);
        return;
    }
    ll digits = 1;
    while (true)
    {
        ll count = help(digits);
        if (n <= count)
            break;
        n -= count;
        digits++;
    }
    ll half = (digits + 1) / 2;
    ll start = pow(10, half - 1);
    ll num = start + n - 1;
    string hs = to_string(num);
    string rh = hs;
    reverse(rh.begin(), rh.end());
    if (digits % 2 == 0)
    {
        cout << (hs + rh);
    }
    else
    {
        cout << (hs + rh.substr(1));
    }
    return;
}
int main()
{
    int _ = 1;
    ll n;
    // for(int i=1;i<=1000;i++){
    //     ll a=nthPalindrome(i);
    //     cout<<a-b<<" ";
    //     if(a!=b){
    //         pn(i);
    //     }
    // }
    cin >> n;
    solution(n);
    return 0;
}