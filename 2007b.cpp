/*
       ___      _      ___     ____   _    _   ____     _____  
      |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
        | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
    |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
    |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

                  ____         _      __  __ 
                 |  _ \       / \    |  \/  |
                 | |_) |     / _ \   | \  / |
                 |  _ <     / ___ \  | |\/| |
                 |_|  \_\  /_/   \_\ |_|  |_|

*/
#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
#define pll pair<ll,ll>
#define pii pair<int,int>
typedef long long int ll;

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

// class SegmentTree {
//     vector<ll> tree, lazy;
//     ll n;

// public:
//     SegmentTree(vector<ll>& arr) {
//         n = arr.size();
//         tree.resize(4 * n, 0);
//         lazy.resize(4 * n, 0);
//         build(arr, 0, 0, n - 1);
//     }

//     void build(vector<ll>& arr, ll node, ll start, ll end) {
//         if (start == end) {
//             // Leaf node will have a single element
//             tree[node] = arr[start];
//         } else {
//             ll mid = (start + end) / 2;
//             build(arr, 2 * node + 1, start, mid);
//             build(arr, 2 * node + 2, mid + 1, end);
//             tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
//         }
//     }

//     void updateRange(ll l, ll r, ll val) {
//         updateRange(0, 0, n - 1, l, r, val);
//     }

//     void updateRange(ll node, ll start, ll end, ll l, ll r, ll val) {
//         if (lazy[node] != 0) {
//             tree[node] += lazy[node];
//             if (start != end) {
//                 lazy[2 * node + 1] += lazy[node];
//                 lazy[2 * node + 2] += lazy[node];
//             }
//             lazy[node] = 0;
//         }

//         if (start > end || start > r || end < l)
//             return;

//         if (start >= l && end <= r) {
//             tree[node] += val;
//             if (start != end) {
//                 lazy[2 * node + 1] += val;
//                 lazy[2 * node + 2] += val;
//             }
//             return;
//         }

//         ll mid = (start + end) / 2;
//         updateRange(2 * node + 1, start, mid, l, r, val);
//         updateRange(2 * node + 2, mid + 1, end, l, r, val);
//         tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
//     }

//     ll queryMax(ll l, ll r) {
//         return queryMax(0, 0, n - 1, l, r);
//     }

//     ll queryMax(ll node, ll start, ll end, ll l, ll r) {
//         if (lazy[node] != 0) {
//             tree[node] += lazy[node];
//             if (start != end) {
//                 lazy[2 * node + 1] += lazy[node];
//                 lazy[2 * node + 2] += lazy[node];
//             }
//             lazy[node] = 0;
//         }

//         if (start > end || start > r || end < l)
//             return INT_MIN;

//         if (start >= l && end <= r)
//             return tree[node];

//         ll mid = (start + end) / 2;
//         ll leftMax = queryMax(2 * node + 1, start, mid, l, r);
//         ll rightMax = queryMax(2 * node + 2, mid + 1, end, l, r);
//         return max(leftMax, rightMax);
//     }
// };
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    // vector<int> arr = {1, 3, 5, 7, 9, 11};
    // SegmentTree segTree(v);
    // cout << "Max in range [1, 3]: " << segTree.queryMax(1, 3) << endl;
    // segTree.updateRange(1, 3, 10);
    // cout << "Max in range [1, 3] after update: " << segTree.queryMax(1, 3) << endl;

    // Segtree seg(n+1);
    // for(int i=0;i<n;i++){
    //     seg.arr[i]=v[i];
    //     seg.lazy[i]=0;
    // }
    // seg.build(0,n-1,1);
    ll ans=INT_MIN;
    for(auto &i:v){
        ans=max(ans,i);
    }
    while(m--){
        char c;
        cin>>c;
        ll a,b;
        cin>>a>>b;
        // a--,b--;
        if(c=='+'){
            if(a<=ans && b>=ans){
                ans++;
            }
        }
        else{
            if(a<=ans && b>=ans){
                ans--;
            }
        }
        ps(ans);
    }
    endo;
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}