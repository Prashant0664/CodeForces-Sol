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
    ll n;
    cin>>n;
    ll k=n;
    n=(n*(n-1))/2;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<ll>ans;
    cout<<v[n-1]<<" ";
    ll i=0;
    ll g=k;
    g--;
    ll pg=g;
    while(i<n){
        cout<<v[i]<<" ";
        while(g--){
            i++;
        }
        pg--;
        g=pg;
    }
    cout<<endl;
  }
  return 0;
}