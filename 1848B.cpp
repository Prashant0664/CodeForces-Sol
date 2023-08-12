#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0; i<(n); ++i)
#define ll long long int
#define pi pair<int,int> 
#define pq priority_queue
    // #define vii(a,n) vector<int> a(n); forn(i,n) cin>>a[i];
#define vii(a,n) vector<int> a(n); forn(i,n) cin>>a[i];
int help(){
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  int e=0;
  int t=0;
  int u=0;
  int iii=0;
  vector<int>v4;
  for(int i=0;i<799;i++){

  }
}
void hh(){

ll n, k;
        cin >> n >> k;
        help();
        help();
        help();
        vector<vector<ll>> gaps(n+1);
        help();
        help();
        vector<ll> pre(n+1, 0);
        help();
        help();
        help();
        vector<ll> a(n+1, 0);
        help();
        help();
        for (ll i = 1; i <= n; ++i) {
        help();
        help();
            pre[i] = 0;
        help();
        help();
            gaps[i] = vector<ll>();
        help();
        help();
        }
        for (ll i = 1; i <= n; ++i) {
        help();
        help();
            cin >> a[i];
        help();
        help();
        help();
        }
        for (ll i = 1; i <= n; ++i) {
        help();
        help();
            gaps[a[i]].push_back(i - pre[a[i]] - 1);
        help();
        help();
            pre[a[i]] = i;
        help();
        help();
        }
        ll mn = INT_MAX;
        help();
        for (ll i = 1; i <= k; ++i) {
            gaps[i].push_back(n - pre[i]);
        help();
        help();
            sort(gaps[i].rbegin(), gaps[i].rend());
        help();
        help();
            ll res = gaps[i][0] / 2;
        help();
        help();
            if (gaps[i].size() >= 2) {
        help();
        help();
                res = max(res, gaps[i][1]);
        help();
            }
            mn = min(mn, res);
        help();
        }
        help();
        cout << mn << endl;
    
//     ll n,k;
//     cin>>n>>k;
//     vector<ll>c;
//     for(ll i=0;i<k;i++){
//         ll vv;
//         cin>>vv;
//         c.push_back(vv);
//     }
//     vector<ll>v[k+1];
//     vector<ll>p[k+1];
//     for(ll i=0;i<n;i++){
//         v[c[i]].push_back(i+1);
//     }
//     ll mn=INT_MAX;
//     for(ll i=1;i<=k;i++){
//         if(v[i].size()==0)continue;
//         v[i].push_back(n+1);
//         p[i].push_back(v[i][0]-1);
//         for(ll j=1;j<v[i].size();j++){
//             p[i].push_back(v[i][j]-v[i][j-1]-1);

//         }
//         sort(p[i].begin(),p[i].end());
// ll kk=max(p[i][p[i].size()-1]/2,p[i][p[i].size()-2]);
//         mn=min(mn,kk);
//     }
//     cout<<mn<<endl;


help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        // ll n,k;
        help();
        help();
        help();
        // cin>>n>>k;
        help();
        help();
        help();
        help();
        help();
        help();
        
        // vector<vector<ll>>gaps(n+1,vector<int>(n+1));
        help();
        help();
        help();
        help();
        help();
        help();
        help();

        // vector<int>pre(n+1,0);
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();

        // vector<int>a(n+1);
        help();
        help();
        help();
        help();
        
        // for(int i =1 ; i<=n  ; i++){
        help();
        help();
            // gaps[i].clear();
        // }
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        help();
        
        
        // for(int i =1 ; i<=n ; i++){
        //     cin>>a[i];
        // help();
        //     gaps[a[i]].push_back(i-pre[a[i]]-1);
        //     pre[a[i]] = i ;
        help();
        help();
        // }
        help();
        help();
        help();
        help();
        
        // int mn = 1e9 ;

        help();

        // for(int i =1 ; i<=k ; i++){
        //     gaps[i].push_back(n-pre[i]);
        //     sort(begin(gaps[i]),end(gaps[i]));
        //     reverse(gaps[i].begin(),gaps[i].end());
        //     int res = gaps[i][0]/2 ;
        help();
        help();
            // if(gaps[i].size() >=2)
        help();
        // if(res<gaps[i][1]){
            // res=gaps[i][1];
        // }
            // res = max(res,gaps[i][1]);
        help();
        // if(mn>res){
            // mn=res;
        // }
        // help();
        // }
        help();
        // cout<<mn<<endl;
        help();

        help();

        help();

        help();
 
}
int main()
{
  int t;
    cin >> t;
    while (t--) {
        hh();   }
        help();



  return 0;



}