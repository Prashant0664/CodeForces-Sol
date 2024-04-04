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
//     vector<ll>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     if(n%2==1){
//         pn("YEs");
//         return;
//     }
//     for(int i=1;i<n;i++){
//         if(v[i]-v[i-1]<0){
//             pn("NO");
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

void solve(){
    int n;
    cin >> n;
    int arr[n];
    long long int altsum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i%2==0){
            altsum-=arr[i];
        }
        else{
            altsum+=arr[i];
        }
    }
    if(n%2==1||altsum>=0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}