// // /*
// //        ___      _      ___     ____   _    _   ____     _____  
// //       |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
// //         | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
// //     |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
// //     |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

// //                   ____         _      __  __ 
// //                  |  _ \       / \    |  \/  |
// //                  | |_) |     / _ \   | \  / |
// //                  |  _ <     / ___ \  | |\/| |
// //                  |_|  \_\  /_/   \_\ |_|  |_|

// // */
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define pn(x) cout<<x<<endl;
// // #define ps(x) cout<<x<<' ';
// // #define endo cout<<endl;
// // #define printv(v) for(auto x:v){ps(x);}endo;
// // #define printve(v) for(auto x:v){ps(x);};
// // #define mod 1000000007
// // #define pll pair<ll,ll>
// // #define pii pair<int,int>
// // typedef long long int ll;

// // void __print(int x) {cerr << x;}
// // void __print(long x) {cerr << x;}
// // void __print(long long x) {cerr << x;}
// // void __print(unsigned x) {cerr << x;}
// // void __print(unsigned long x) {cerr << x;}
// // void __print(unsigned long long x) {cerr << x;}
// // void __print(float x) {cerr << x;}
// // void __print(double x) {cerr << x;}
// // void __print(long double x) {cerr << x;}
// // void __print(char x) {cerr << '\'' << x << '\'';}
// // void __print(const char *x) {cerr << '\"' << x << '\"';}
// // void __print(const string &x) {cerr << '\"' << x << '\"';}
// // void __print(bool x) {cerr << (x ? "true" : "false");}

// // template<typename T, typename V>
// // void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// // template<typename T>
// // void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// // void _print() {cerr << "]\n";}
// // template <typename T, typename... V>
// // void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// // #ifndef ONLINE_JUDGE
// // #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// // #else
// // #define debug(x...)
// // #endif


// // void solution(){
// //     ll n,m;
// //     cin>>n;
// //     // cin>>m;
// //     string s;
// //     // cin>>s;
// //     vector<ll>v(n);
// //     map<int,int>mp;
// //     for(int i=0;i<n;i++){
// //         cin>>v[i];
// //         mp[v[i]]++;
// //     }
// //     sort(v.begin(),v.end());
// //     int mini=INT_MAX;
// //     int x=v[n-1];
// //     int j=n-2;
// //     mp[x]--;
// //     if(mp[x]==0){
// //         mp.erase(x);
// //     }
// //     // case 1
// //     int y=v[n-2];
// //     mp[y]--;
// //     if(mp[y]==0){
// //         mp.erase(y);
// //     }
// //     j=n-3;
// //     int c=0;
// //     while(1){
// //         int d=v[j];
// //         if(mp.find(x-d)==mp.end() || ()){
// //             if(c==1)return -1;
// //             c++;
// //             j--;
// //             continue;
// //         }
// //         else{
// //             mp[d]--;
// //             mp[x-d]--;

// //             x=v[j];
// //             j--;
// //         }

// //     }
// //     int z=v[n-3];
// //     while(1){
// //         if(mp.find(x)!=mp.end()){

// //         }
// //     }

// //     return;
// // }
// // int main(){
// //     int _=1;
// //     cin>>_;
// //     while(_--){
// //         solution();
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>

// using namespace std;

// vector<int> check(int n, vector<int> a, int x)
// {
//     multiset<int> s;
//     for (auto e : a)
//         s.insert(e);
//     vector<int> res;
//     for (int i = 0; i < n; i++)
//     {
//         auto it1 = s.end();
//         it1--;
//         int y = x - *it1;
//         s.erase(it1);
//         auto it2 = s.find(y);
//         if (it2 == s.end())
//             return {};
//         res.push_back(x - y);
//         res.push_back(y);
//         x = max(x - y, y);
//         s.erase(it2);
//     }
//     return res;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(2 * n);
//     for (int i = 0; i < 2 * n; i++)
//         cin >> a[i];
//     sort(a.begin(), a.end());
//     for (int i = 0; i < 2 * n - 1; i++)
//     {
//         int x = a[i] + a[2 * n - 1];
//         vector<int> res = check(n, a, x);
//         if (res.size())
//         {
//             cout << "YES\n";
//             cout << x << "\n";
//             for (int j = 0; j < n; j++)
//             {
//                 cout << res[2 * j] << " " << res[2 * j + 1] << "\n";
//             }
//             return;
//         }
//     }
//     cout << "NO\n";
// }

// int main()
// {
//     int t;
//     cin >> t;
//     for (int c = 0; c < t; c++)
//     {
//         solve();
//     }
// }
#include <bits/stdc++.h>

using namespace std;

const int A = 1e6 + 12;

int cnt[A];

void reset(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cnt[a[i]] = 0;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int t = 0;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n; j++)
            cnt[a[j]]++;
        int j = 2 * n - 1;
        int x = a[i] + a[j];
        vector<int> rm;
        for (int op = 0; op < n; op++)
        {
            while (j > 0 && cnt[a[j]] == 0)
                j--;
            rm.push_back(a[j]);
            rm.push_back(x - a[j]);
            cnt[a[j]]--, cnt[x - a[j]]--;
            if (cnt[a[j]] < 0 || cnt[x - a[j]] < 0)
            {
                cnt[a[j]] = 0;
                cnt[x - a[j]] = 0;
                break;
            }
            x = max(x - a[j], a[j]);
            if (op + 1 == n)
                t = 1;
        }
        reset(a);
        if (t)
        {
            cout << "YES\n";
            cout << rm[0] + rm[1] << "\n";
            for (int i = 0; i < rm.size(); i++)
            {
                cout << rm[i] << " \n"[i % 2];
            }
            return;
        }
    }
    cout << "NO\n";
    reset(a);
}

int main(int argc, char* argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}