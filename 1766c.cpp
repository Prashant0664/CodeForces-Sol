// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// typedef long long int ll;

// bool help(vector<string>&v,int i,int j){
//     if(j>=v[0].size()){
//         return true;
//     }
//     help(v,i+1,j);
//     help(v,i,j+1);
//     help(v,i-1,j);

// }


// void solution(){
//     ll n,m;
//     cin>>n;
    
//     vector<string>v(2);
//     for(int i=0;i<2;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         if(v[0][i]=='W' && v[1][i]=='W'){
//             cout<<"NO"<<endl;
//             return;
//         }
//         if(i>1 && i<n-1){
//             if(v[0][i]=='B' && v[0][i-1]=='W' && v[0][i+1]=='W'){
//                 pn("NO");
//                 return;
//             }
//             if(v[1][i]=='B' && v[1][i-1]=='W' && v[1][i+1]=='W'){
//                 pn("NO");
//                 return;
//             }
//             if(v[0][i]=='B' && v[0][i-1]=='W' && v[1][i-1]=='B' && v[1][i]=='W'){
//                 pn("NO");
//                 return;
//             }

//             if(v[0][i]=='W' && v[0][i-1]=='B' && v[1][i-1]=='W' && v[1][i]=='B'){
//                 pn("NO");
//                 return;
//             }
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
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <bitset>
#include <math.h>
#include <cstdlib>
#include <time.h>
#include <queue>
#include <string>
#include <utility>
 
using namespace std;
 
#define endl '\n'
#define mod (int)(998244353)
#define sz size()
#define pb push_back
#define INF (int)(2e9)
#define FF first
#define SS second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;
typedef vector<vector<pair<int, int>>> vvpii;
typedef vector<vector<vector<int>>> vvvi;
typedef vector<bool> vb;
typedef vector<vector<bool>> vvb;
typedef vector<pair<int, int>> vpii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<pair<long long, long long>> vpll;
typedef vector<vector<pair<long long, long long>>> vvpll;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
typedef map<int,int> mii;
typedef vector<unordered_map<int,int>> vmii;
 
void solve(){
    int m;
    cin >> m;
    
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0;
    while(i < m && s1[i] != 'W' && s2[i] != 'W') i++;
    if(i == m){
        cout << "YES\n";
        return;
    }
    
    int last = i;
    bool side = 0;
    if(s1[i] == 'W'){
        side = 0;
    }
    else{
        side = 1;
    }
    i++;
    
    while(i < m){
        if(s1[i] == 'W'){
            if(!side){
                if((i-last)%2 == 0){
                    cout << "NO\n";
                    return;
                }
            }
            else{
                if((i-last)%2 == 1){
                    cout << "NO\n";
                    return;
                }
            }
            
            side = 0;
            last = i;
        }
        else if(s2[i] == 'W'){
            if(side){
                if((i-last)%2 == 0){
                    cout << "NO\n";
                    return;
                }
            }
            else{
                if((i-last)%2 == 1){
                    cout << "NO\n";
                    return;
                }
            }
            side = 1;
            last = i;
        }
        i++;
    }
    cout << "YES\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    
}