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
//     // cin>>m;
//     string s;
//     // cin>>s;
//     vector<ll>v;
//     vector<ll>k(n+2,0);
//     map<ll,ll>mp;
//     for(int i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         if(x<=n){
//             // if(mp[x]==0)
//             v.push_back(x);
//             mp[x]++;
//         }
//     }
//     ll maxi=0,max_ind=0;
//     for(int i=0;i<v.size();i++){
//         ll x=v[i];
//         ll g=x;
//         while(g<=n){
//             k[g]++;
//             if(maxi<=k[g]){
//                 maxi=k[g];
//                 max_ind=g;
//             }
//             g+=x;
//         }
//     }
//     ll ans=0;
//     for(auto &i:v){
//         if(max_ind>=i && max_ind%i==0){
//             ans+=1;
//             // ps(i);
//         }
//     }
//         // pn("");
//     pn(ans);
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
#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
 
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
 
void solve() {
    int n; cin >> n;
    vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x <= n) ++cnt[x];
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = i; j <= n; j += i) mx[j] += cnt[i];
    }
    cout << *max_element(all(mx)) << "\n";
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
