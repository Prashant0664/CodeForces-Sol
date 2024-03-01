#include <bits/stdc++.h>
using namespace std;
 
// typedef unsigned int uint;
typedef long long int ll;
// typedef unsigned long long ull;
// typedef pair<int, int> pii;
// typedef pair<ll, int> pli;
// typedef pair<int, ll> pil;
// typedef pair<ll, ll> pll;
 

// #define MP make_pair
// #define PB push_back
// #define EB emplace_back
// #define forn(ik,n) for(int i=0; i<(n); ++i) 
// #define vll(a,n) forn(i,n) cin>>a[i];
// #define vii(a,n) forn(i,n) cin>>a[i];
void NumberOfSegments(vector<pair<ll,ll> >segments,
                      vector<ll>points, ll s, ll p)
{
   vector< pair<ll, ll> >pts, seg;
   for(ll i = 0; i <p; i++)
   {
      pts.push_back({points[i], i});;
   }
   for(ll i = 0; i < s; i++)
   {
      seg.push_back({segments[i].first, 1});
      seg.push_back({segments[i].second+1, -1});
   }
   sort(seg.begin(), seg.end(),
        greater<pair<ll,ll>>());
   sort(pts.begin(),pts.end());
   ll count = 0;
   ll ans[p];
     ll anss=0;
   for(ll i = 0; i < p; i++)
   {
        ll x = pts[i].first;
        
        while(!seg.empty() &&
              seg.back().first <= x)
        {
            count+= seg.back().second;
            seg.pop_back();
        }
        anss+= count;
   }
   cout<<anss<<" ";
   
}
int main()
{
  ll t = 1;
  cin>>t;
  while (t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll maxi=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        maxi=max(maxi,v[i]);
    }
    vector<ll>pp;
    for(ll i=1;i<maxi+2;i++){
        pp.push_back(i);
    }
    vector<ll>v2(n);
    for(ll i=0;i<n;i++){
        ll k=v[i];
        vector<pair<ll,ll>>segments;
        for(ll jj=0;jj<n;jj++){
            segments.push_back({min(k,v[jj]),max(k,v[jj])});
        }
        NumberOfSegments(segments,pp,n,maxi+1);
    }
    cout<<endl;
    
  }
  return 0;
}