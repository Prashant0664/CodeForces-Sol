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
// // 1000001
// // (()())
// // ()()()
// // 
// // ((()))
// // ())()
// // 110011
// // ((()))
// // (()())
// bool check(string &s){
//     int c=0;
//     for(auto &i:s){
//         if(i==')'){
//             c--;
//         }
//         else{
//             c++;
//         }
//         if(c<0)return 0;
//     }
//     return c==0;
// }

// void solution(){
//     ll n,m;
//     cin>>n;
//     // cin>>m;
//     string s;
//     cin>>s;
//     string a="",b="";
//     stack<int>st1,st2;
//     int c=count(s.begin(),s.end(),'1');
//     int d=0;
//     for(auto &i:s){
//         if(i=='1'){
//             if(d>c/2){
//                 if(st1.size()==0 || st2.size()==0){
//                     pn("NO")
//                     return;
//                 }
//                 st1.pop();
//                 st2.pop();
//                 a+=')';
//                 b+=')';
//             }
//             else{
//                 b+='(';
//                 a+='(';
//                 st1.push(1);
//                 st2.push(1);
//             }
//             d++;
//         }
//         else{
//             if(st1.size()>0 && st2.size()==0){
//                 st1.pop();
//                 a+=')';
//                 b+='(';
//                 st2.push(1);
//             }
//             else if(st2.size()>0 && st1.size()==0){
//                 st2.pop();
//                 b+=')';
//                 a+='(';
//                 st1.push(1);
//             }
//             else if(st1.size()==st2.size()){
//                 if(st1.size()>0){
//                     st1.pop();
//                     st2.push(1);
//                     a+=')';
//                     b+='(';
//                 }
//                 else{
//                     pn("NO");
//                     return;
//                 }
//             } 
//         }
//         debug(a,b);
//     }
//     int f1=check(a);
//     int f2=check(b);
//     if(f1 && f2 ){
//         pn("YES");
//         pn(a);
//         pn(b);
//     }
//     else{
//         pn("NO");
//     }
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

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt += (s[i] == '1');
    }
    if(cnt % 2 == 1 || s[0] == '0' || s.back() == '0') {
        cout << "NO\n";
        return;
    }
    string a, b;
    int k = 0;
    bool flip = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            a.push_back(2 * k < cnt ? '(' : ')');
            b.push_back(a.back());
            k++;
        }else {
            a.push_back(flip ? '(' : ')');
            b.push_back(flip ? ')' : '(');
            flip = !flip;
        }
    }
    cout << "YES\n" << a << '\n' << b << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int te;
    cin >> te;
    while(te--) solve();
}