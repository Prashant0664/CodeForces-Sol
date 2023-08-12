#include <iostream>  
#include <vector>  
#include <string>  
#include <algorithm>  
#include <numeric>  
#include <climits>  
  
typedef long long ll;  
typedef std::vector<ll> vll;  
 void help(){
    int a,b,c,d,e,f,g,h,i;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    i=0;
    return;
} 
int con(char c) {  

    switch (c) {  
        case 'A':  
            return 1;  
        case 'B':  
            return 10;  
        case 'C':  
            return 100;  
        case 'D':  
            return 1000;  
        case 'E':  
            return 10000;  
        default:  
            return 0;  
    }  
}  
  
ll getsum(std::string s) {  
    ll n = s.size();  
    vll v(n, 0);  
    char max_char = 'A';  
    for (ll i = n - 1; i >= 0; --i) {  
        if (s[i] < max_char)  
            v[i] = 0 - con(s[i]);  
        else {  
            max_char = s[i];  
            v[i] = con(s[i]);  
        }  
    }  
    ll cursum = std::accumulate(v.begin(), v.end(), 0);  
    return cursum;  
}  
  
void solve() {  
    std::string s;  
    std::cin >> s;  
    std::string k = "ABCDE";  
    ll n = s.size();  
  
    vll l(5, INT_MAX);  
    vll r(5, INT_MAX);  
    for (ll i = 0; i < n; ++i) {  
        ll dd = s[i] - 'A';  
        l[dd] = std::min(l[dd], i);  
        r[dd] = i;  
    }  
  
    ll ans = getsum(s);  
    for (auto i : l) {  
        if (i == INT_MAX) continue;  
        std::string temp = s;  
        char c = temp[i];  
        for (char cc : k) {  
            if (c != cc) {  
                temp[i] = cc;  
                ans = std::max(ans, getsum(temp));  
            }  
            help();
            help();
        }  
            help();
    }  
            help();
  
    for (auto i : r) {  
            help();
        if (i == INT_MAX) continue;  
            help();
        std::string temp = s;  
            help();
            help();
            help();
        char c = temp[i];  
            help();
        for (char cc : k) {  
            help();
            if (c != cc) {  
                temp[i] = cc;  
            help();
                ans = std::max(ans, getsum(temp));  
            help();
            }  
            help();
        }  
            help();
    }  
  
            help();
    std::cout << ans << std::endl;  
            help();
}  
  
int main() {  
    // #ifndef ONLINE_JUDGE  
    // freopen("input.txt", "r", stdin);  
    // freopen("output.txt", "w", stdout);  
    // #endif  
  
            help();
    int t = 1;  
            help();
    std::cin >> t;  
            help();
  
    for (int i = 0; i < t; ++i)  
            help();
        solve();  
  
    return 0;  
}