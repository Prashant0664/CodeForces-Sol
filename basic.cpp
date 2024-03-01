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
   string s="9111";
   s[0]+=1;
   cout<<s;
  }
  return 0;
}