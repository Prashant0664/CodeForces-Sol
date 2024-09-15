// /*
//        ___      _      ___     ____   _    _   ____     _____  
//       |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
//         | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
//     |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
//     |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

//                   ____         _      __  __ 
//                  |  _ \       / \    |  \/  |
//                  | |_) |     / _ \   | \  / |
//                  |  _ <     / ___ \  | |\/| |
//                  |_|  \_\  /_/   \_\ |_|  |_|

// */
// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// #define mod 1000000007
// #define pll pair<ll,ll>
// #define pii pair<int,int>
// typedef double ll;

// void __print(int x) {cerr << x;}
// void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
// void __print(unsigned x) {cerr << x;}
// void __print(unsigned long x) {cerr << x;}
// void __print(unsigned long long x) {cerr << x;}
// void __print(float x) {cerr << x;}
// void __print(double x) {cerr << x;}
// void __print(long double x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}

// template<typename T, typename V>
// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif


// void solution(){
//     ll n,m;
//     cin>>n;
//     vector<ll>v(n);
//     map<ll,ll>mp;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mp[v[i]]++;
//     }
//     cin>>m;
//     while(m--){
//         ll x,y;
//         cin>>x>>y;
//         ll g=-x/2.0;
//         if(sqrt(x*x-4*y)*sqrt(x*x-4*y)==(x*x-4*y)){
//             ll a=sqrt(x*x-4*y);
//             if((int)a%2==0){
//                 a/=2.0;
//                 ll f=x+a;
//                 ll g=x-a;
//                 ll f2=-x+a;
//                 ll g2=-x-a;
//                 ll c=mp[f]*mp[f2]+mp[f2]+mp[g2];
//                 ps(int(c));
//             }
//             else{
//                 ps(0);
//             }
//         }
//         else{
//             ps(0);
//         }
//     }
//     endo;
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
map<long long,int>cnt;
long long my_sqrt(long long a)
{
    long long l=0,r=5000000001;
    while(r-l>1)
    {
        long long mid=(l+r)/2;
        if(1ll*mid*mid<=a)l=mid;
        else r=mid;
    }
    return l;
}
long long get(int b,long long c)
{
    long long D=1ll*b*b-4ll*c;
    if(D<0)return 0;
    long long x1=(b-my_sqrt(D))/2;
    long long x2=(b+my_sqrt(D))/2;
    if(x1+x2!=b||x1*x2!=c)return 0;
    if(x1==x2)return 1ll*cnt[x1]*(cnt[x1]-1)/2ll;
    else return 1ll*cnt[x1]*cnt[x2];
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cnt.clear();
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            cnt[x]++;
        }
        int q;cin>>q;
        for(int i=0;i<q;i++)
        {
            int b;long long c;
            cin>>b>>c;
            cout<<get(b,c)<<" \n"[i==q-1];
        }
    }
}