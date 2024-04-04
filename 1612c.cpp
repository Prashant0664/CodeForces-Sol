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
//     ll low=0,high=n;
//     ll ans=0;
//     while(low<=high){
//         ll mid=(low+high)/2;
//         ll sum=mid*(mid+1)/2;
//         if(sum>m){
//             high=mid-1;
//         }else{
//             ans=mid;
//             low=mid+1;
//         }
//     }
//     (m-=(ans*(ans+1)/2));
//     cout<<ans<<"-"<<m<<"\n";
//     ans=min(2*n-1,ans+m);
//     pn(ans);
//     // pn((ll)923456789987654321-(ll)(1608737402)*(1608737402+1)/2);
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

using namespace std;

long long get(int x) {
    return x * 1ll * (x + 1) / 2;
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    while (t--) {
        int k;
        long long x;
        cin >> k >> x;
        long long l = 1, r = 2 * k - 1;
        long long res = 2 * k - 1;
        bool over = false;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (mid >= k) {
                over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
            } else {
                over = (get(mid) >= x);
            }
            if (over) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << res << endl;
    }
    
    return 0;
}