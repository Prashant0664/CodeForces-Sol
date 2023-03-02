
// // #include <iostream>
// // #include <string>
// // #include <set>

// // using namespace std;

// // int countDistinctStrings(string s) {
// //     int n = s.size();
// //     set<string> substrings;
// //     for (int i = 0; i < n-1; i++) {
// //         string sub = s.substr(0, i) + s.substr(i+2);
// //         substrings.insert(sub);
// //     }
// //     return substrings.size();
// // }

// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int n;
// //         string s;
// //         cin >> n >> s;
// //         cout << countDistinctStrings(s) << endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <string>

// using namespace std;

// int countDistinctStrings(string s) {
//     int n = s.size();
//     int count = 0;
//     int g=0;
//     for (int i = 0; i < n-1; i++) {
//         string sub = s.substr(0, i) + s.substr(i+2);
//         if (sub != s.substr(i)) {
//             count++;
//             cout<<sub<<" "<<s.substr(i)<<endl;
//         }
//     }
//     return count;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         string s;
//         cin >> n >> s;
//         cout << countDistinctStrings(s) << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<string> seen;
        int ans = 0;
        for (int i = 1; i < n; i++) {
            string new_str = s.substr(0, i-1) + s.substr(i+1);
            if (!seen.count(new_str)) {
                seen.insert(new_str);
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
