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
//     cin>>m;
//     // string s;
//     // cin>>s;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     // sort(v.begin(),v.end());
//     int ans=0;
//     ll l=-1;
//     for(int i=0;i<n-1;){
//         if(v[i+1]<=m && v[i]<=m){
//             m-=max(v[i+1],v[i]);
//             ans+=2;
//             l=i+1;
//             cout<<i<<" ";
//             i+=2;
//         }
//         else if(v[i]<=m){
//             m-=v[i];
//             ans++;
//             l=i;
//             ps(i);
//             i++;
//         }
//         else{
//             break;
//         }
//         cout<<m<<" ";
//     }
//     endo;


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
#include <bits/stdc++.h>
#define en "\n"
#define sqrt(n) sqrt((long double) n)
#define all(c) (c).begin() , (c).end()
#define MOD 1000000007
#define mem0(a) memset(a,0,sizeof(a))
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define files(name) name!=""?freopen(name".in","r",stdin),freopen(name".out","w",stdout):0
#define elif else if
#define int long long
#define SORT(x) sort(all(x))
#define REVERSE(x) reverse(all(x))
 
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef set<int> seti;
typedef pair<double, double> pdd;
typedef long double ld;
 
 
 
const double EPS=0.000000001;
const double INFD32=1000000000;
const ll INF64=1000000000000000000;
const int INF32=1000000000;
 
#define maxN 300100
 
int arr[maxN];
 
signed main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,h;
    cin>>n>>h;
    for (int i=1; i<=n; ++i) cin>>arr[i];
    int ans=0;
    for (int i=1; i<=n; ++i){
        sort(arr+1,arr+i+1);
        int k=0;
        for (int j=2; j<=i; j+=2){
            k+=arr[j];
        }
        int k0=0;
        for (int j=i; j>0; j-=2){
            k0+=arr[j];
        }
        if (i%2) k+=arr[i];
        if (k<=h || k0<=h) ans=i;
    }
    cout<<ans<<en;
}