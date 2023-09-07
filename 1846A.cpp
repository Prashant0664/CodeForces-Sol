#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned int uint;
typedef long long int ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
 

#define MP make_pair
#define PB push_back
#define EB emplace_back
#define forn(ik,n) for(int i=0; i<(n); ++i) 
#define vll(a,n) forn(i,n) cin>>a[i];
#define vii(a,n) forn(i,n) cin>>a[i];

int main()
{
  ll t = 1;
  cin>>t;
  while (t--){
    int n;
    cin >> n;
    int f=0;
    // if(n>1000000)
    for (int k = 2; k <= sqrt(n); ++k)
    {
        if(f)break;
        double L = log((n * (k - 1)) + 1) / log(k);
        if (abs(L - round(L)) < 1e-9)
        {
            f=1;
            cout << "YES" << endl;
            // return;
        }
    }
    if(!f)
    cout << "NO" << endl;
  }
  return 0;
}