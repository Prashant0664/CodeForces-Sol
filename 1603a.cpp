// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// typedef long long int ll;

// void solution(){
//     ll n,m;
//     cin>>n;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         ll f=1;
//         for(int j=2;j<=i+1;j++){
//             if(v[i]%j==0){
//                 continue;
//             }
//             else{
//                 f=0;
//                 break;
//             }
//         }
//         if(f==1){
//             pn("No")
//             return;
//         }
//     }
//     pn("YES");
//     return;
// }
// int main(){
//     int _=1;
//     cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    bool ok = true;
    for (int i = 1; i <= n; i++) {
      int x; cin >> x;
      bool found = false;
      for (int j = i + 1; j >= 2; j--) { // this loop will run not more than 22 times, in practice its much lower than that
        if (x % j) {
          found = true;
          break;
        }
      }
      ok &= found;
    }
    if (ok) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}