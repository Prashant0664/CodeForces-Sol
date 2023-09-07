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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>v2(n);
    ll maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v2[i];
        maxi=max(maxi,v[i]-v2[i]);
    }
    vector<ll>v3;
    for(int i=0;i<n;i++){
        if(v[i]-v2[i]==maxi){
            v3.push_back(i+1);
        }
    }
    cout<<v3.size()<<endl;
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;
    continue;
    
  }
  return 0;
}