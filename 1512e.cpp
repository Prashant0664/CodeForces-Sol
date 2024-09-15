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

// int help(int i, int sum, int size, int &n, vector<vector<vector<int>>>&dp){
//     if(sum==0 && size==0){
//         return 1;
//     }
//     if(dp[sum][size][i]!=-1){
//         return dp[sum][size][i];
//     }
//     int t=0,nt=0;
//     if(sum-i>=0 && size-1>=0)t=help(i+1,sum-i,size-1,n,dp);
//     if(i+1<=n)nt=help(i+1,sum,size,n,dp);
//     return dp[sum][size][i]=t|nt;
// }

// void solution(){
//     int n,l,r,s;
//     cin>>n>>l>>r>>s;
//     l--,r--;
//     int diff=r-l+1;
//     int sum=((diff)*(diff+1))/2;
//     if(sum>s){
//         pn(-1);
//         return;
//     }
//     int sum2=(n*(n+1))/2;
//     if(sum2<s){
//         pn(-1);
//         return;
//     }


//     sum2=0;
//     sum=0;
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

using namespace std;
using ll = long long;

void solve() {
    int n, l, r, s;
    cin >> n >> l >> r >> s;
    l--; r--;
    for (int first = 1; first + (r - l) <= n; first++) {
        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum += first + (i - l);
        }
        if (sum <= s && s - sum <= r - l + 1) {
            int needAdd = r - (s - sum) + 1;
            vector<int> ans(n);
            set<int> non_blocked;
            for (int i = 1; i <= n; i++) {
                non_blocked.insert(i);
            }
            for (int i = l; i <= r; i++) {
                ans[i] = first + (i - l);
                if (i >= needAdd) {
                    ans[i]++;
                }
                non_blocked.erase(ans[i]);
            }
            if (ans[r] > n) {
                continue;
            }
            non_blocked.erase(ans[r]);
            for (int i = 0; i < l; i++) {
                ans[i] = *non_blocked.begin();
                non_blocked.erase(non_blocked.begin());
            }
            for (int i = r + 1; i < n; i++) {
                ans[i] = *non_blocked.begin();
                non_blocked.erase(non_blocked.begin());
            }
            for (int i : ans) {
                cout << i << " ";
            }
            cout << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}