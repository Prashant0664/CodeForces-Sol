#include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// typedef long long int ll;

// void solution(){
//     ll n,m;
//     // cin>>n;
//     // cin>>m;
//     string s;
//     cin>>s;
//     n=s.length();
//     int k=0;
//     vector<int>v(103,0);
//     vector<int>v2(103,0);
//     for(int i=0;i<n;i++){
//         v[s[i]-'0']++;
//     }
//     ll g=0;
//     for(int i=0;i<=9;i++){
//         while(v2[i]>0){
//             cout<<i;
//             v2[i]--;
//         }
//         for(int j=0;j<n;j++){
//             if(v[i]==0){
//                 break;
//             }
//             else if(s[j]==('0'+i)){
//                 cout<<i;
//                 v[i]--;
//             }
//             else{
//                 s[j]=min('9',char(s[j]+1));
//                 // cout<<s[j]<<" ";
//                 v[s[j]-'0']--;
//                 v2[s[j]-'0'+1]++;
//             }
//         }
//     }
//     pn("\n");
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
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n);
    vector<int> mn(n + 1, 9);
    for(int i = 0; i < n; i++){
        a[i] = int(s[i] - '0');
    }
    for(int i = n - 1; i >= 0; i--){
        mn[i] = min(mn[i + 1], a[i]);
    }
    vector<int> buff(10, 0);
    string ans = "";
    string t = "0123456789";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < mn[i]; j++){
            while(buff[j]){
                buff[j]--;
                ans += t[j];
            }
        }
        if(a[i] == mn[i]){
            ans += t[a[i]];
        }
        else{
            buff[min(9, a[i] + 1)]++;
        }
    }
    for(int j = 0; j < 10; j++){
        while(buff[j]){
            buff[j]--;
            ans += t[j];
        }
    }
    cout << ans << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}