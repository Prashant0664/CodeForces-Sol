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
bool help(vector<ll>a,vector<ll>b){
    if(a[0]>b[0]){
        return 1;
    }
    if(a[0]==b[0]){
        if(a[1]<b[1]){
            return 1;
        }
        else if(a[1]>b[1]){
            return 0;
        }
        else{
            if(a[2]<b[2]){
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
int main()
{
  ll t = 1;
  cin>>t;
  while (t--)
  { 
    ll n,m,h;
    cin>>n>>m>>h;
    vector<vector<ll>>ans;
    for(int i=0;i<n;i++){
        vector<int>v(m,0);
            ll p=0;
            ll c=0;
            vii(v,m);
            sort(v.begin(),v.end());
            // for(ll i=0;i<v.size();i++)
            // cout<<v[i]<<" endl ";
            // cout<<endl;
        // for(ll j=0;j<m;j++){
            ll time=0;
            ll sum=0;
            forn(0,m){
                if(time+v[i]>h){
                    break;
                }
                else{
                    time+=v[i];
                    p+=v[i]+sum;
                    c++;
                    sum+=v[i];
                    // cout<<endl<<p<<endl;
                }
            // }
 
        }
        // cout<<i<<" "<<p<<endl;
            ans.push_back({c,p,i});
    // cout<<i<<endl;
    }
    sort(ans.begin(),ans.end(),help);
    forn(0,n){
        // cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
    }
    forn(0,n){
        if(ans[i][2]==0){
            cout<<i+1<<endl;
            break;
        }
    }
  }
  return 0;
}