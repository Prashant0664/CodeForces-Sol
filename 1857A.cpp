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
    int a=0;
    int b=0;
    int s=0;
    // if(n>1000000)
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
        if(s%2==0){
            a++;
        }
        if(s%2==1){
            b++;
        }
    }
    if(s%2==0){
        if(a>0 || b>0){
            cout<<"YES"<<endl;
            continue;
        }
    }
    if(s%2==1){
        if(b>0){
            cout<<"NO"<<endl;
            continue;
        }
    }
    cout<<"NO\n";
    continue;

  }

  return 0;
}