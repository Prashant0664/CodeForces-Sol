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
//     cin>>m;
//     vector<ll>v(n);
//     ll sum=0;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         v[i]%=m;
//     }
//     debug(v);
//     map<int,int>mp;
//     ll ans=0;
//     for(int i=0;i<n;i++){
//         mp[v[i]]++;
//         sum+=v[i];
//         sum%=m;
//         ans+=mp[sum];
//         // ans+=mp[(m-v[i])%m];
//     }
//     // for(int i=0;i<n;i++){
//     //     mp[v[i]]--;
//     //     sum-=v[i];
//     //     sum=(sum+m)%m;
//     //     ans+=mp[sum];
//     //     // ans+=mp[(m-v[i])%m];
//     //     sum+=v[i];
//     //     mp[v[i]]++;
//     // }
//     pn(ans);
//     return;
// }
// int main(){
//     int _=1;
//     // cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);

    // Read the number of steps between consecutive rest areas
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Initialize variables
    unordered_map<int, int> modCount;
    modCount[0] = 1; // Start with a prefix sum of 0 mod M
    int prefixSum = 0;
    int result = 0;

    // Iterate through the rest areas twice to account for the cyclic nature
    for (int i = 0; i < 2 * N; i++) {
        prefixSum += A[i % N];
        int modValue = prefixSum % M;

        if (modValue < 0) modValue += M; // Handle negative modulo

        // Add to result the number of previous prefix sums with the same mod value
        if (modCount.find(modValue) != modCount.end()) {
            result += modCount[modValue];
        }

        // Increment the count for this mod value
        modCount[modValue]++;

        // Stop the second iteration once we cover all distinct pairs (s, t)
        if (i >= N) {
            int oldModValue = (prefixSum - A[i - N]) % M;
            if (oldModValue < 0) oldModValue += M;
            modCount[oldModValue]--;
        }
    }

    cout << result << endl;

    return 0;
}
