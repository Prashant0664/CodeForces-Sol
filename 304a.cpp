// #include <bits/stdc++.h>
// using namespace std;
// #define pn(x) cout << x << endl;
// #define ps(x) cout << x << ' ';
// #define endo cout << endl;
// typedef long long int ll;

// void solution()
// {
//     ll n, m;
//     cin >> n;
//     ll ans = 0;
//     if (n == 10000)
//     {
//         // pn(12471);
//         // return;
//     }
//     set<vector<ll>> st;
//     for (ll k = 1; k <= n; k++)
//     {

//         for (ll i = 1; i < k; i++)
//         {
//             float x = sqrt(k * k - i * i);
//             if (x == (int)x && x != 0 && x < k && x >= i && x <= n)
//             {
//                 ans++;
//                 ll mini1 = min((ll)x, min(i, k));
//                 ll mini2 = max({(ll)x, i, k});
//                 ll mini3 = (ll)x + i + k - mini1 - mini2;
//                 // cout<<i<<" "<<x<<endl;
//                 st.insert({mini1, mini2, mini3});
//             }
//         }
//     }
//     cout << st.size();
//     return;
// }
// int main()
// {
//     int _ = 1;
//     // cin>>_;
//     while (_--)
//     {
//         solution();
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <math.h>
#include <set>
using namespace std;
 
int main(){
  int n = 0;
  cin>>n;
  int res = 0;
  for(int i = 1; i < n; ++i){
    for(int j = i + 1; j < n; ++j){
      int k = (i*i) + (j*j);
      int d = sqrt(k);
      if(d * d == k && d <= n)res++;
    }
  }
  cout<<res<<endl;
  return 0;
}