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
// typedef long long int ll;

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
//     ll a,b;
//     cin>>a>>b;
//     ll g=gcd(a,b);
//     vector<ll>v(n);
//     ll mini=LLONG_MAX;
//     ll maxi=LLONG_MIN;
//     ll ans=LLONG_MAX;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mini=min(mini,v[i]);
//         maxi=max(maxi,v[i]);
//     }
//     for(int i=0;i<n;i++){
//         v[i]%=g;
//     }
//     sort(v.begin(),v.end());
//     ans=v[n-1]-v[0];
//     for(int i=0;i<n-1;i++){
//         // ans=min(ans,v[i]+g-v[i+1]);
//         ll k=v[i]-v[i+1];
//         k+=g;
//         if(k<ans){
//             ans=k;
//             // ans=min(ans,k);
//         }
//     }
//     pn(ans);
//     if((maxi-mini)%gcd(a,b)==0){
//         // cout<<0<<endl;
//         // return;
//     }
//     // cout<<min(abs(a-b),abs(maxi-mini))<<endl;

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


const int N = 1e5 + 10;

int w[N];

vector<int> edges[N];

bool visited[N];

int cnt = 0;

int f[N];


void dfs(int u) {

        int c = 0;

        visited[u] = true;

        for(int v : edges[u]) {

                if(visited[v]) continue;

                ++c; dfs(v);

        }


        if(!c) ++f[w[u]];

        else if(u != 1 && w[u] == 2) ++cnt;

}


void solve() {

        int n; cin >> n;

        cnt = 0;

        for(int i = 1; i <= n; i++) edges[i].clear(), visited[i] = false;

        for(int i = 1; i < n; i++) {

                int u, v; cin >> u >> v;

                edges[u].push_back(v);

                edges[v].push_back(u);

        }

        string s; cin >> s;

        for(int i = 0; i < n; i++) {

                if(s[i] == '?') w[i + 1] = 2;

                else w[i + 1] = s[i] - '0';

        }


        f[0] = f[1] = f[2] = 0;

        dfs(1);
        for(int i=0;i<10;i++){
            cout<<f[i]<<" ";
        }
        cout<<endl;

        int ans = 0;

        if(w[1] == 0) ans = f[1] + (f[2] + 1) / 2;

        if(w[1] == 1) ans = f[0] + (f[2] + 1) / 2;

        if(w[1] == 2 && f[0] == f[1]) ans = f[1] + (f[2] + (cnt % 2)) / 2;

        if(w[1] == 2 && f[0] != f[1]) ans = max(f[0], f[1]) + f[2] / 2;

        cout << ans << '\n';

}


int main() {

        int t; cin >> t;

        while(t--) {

                solve();

        }

}