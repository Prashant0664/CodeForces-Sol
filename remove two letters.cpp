
// #include <iostream>
// #include <string>
// #include <set>

// using namespace std;

// int countDistinctStrings(string s) {
//     int n = s.size();
//     set<string> substrings;
//     for (int i = 0; i < n-1; i++) {
//         string sub = s.substr(0, i) + s.substr(i+2);
//         substrings.insert(sub);
//     }
//     return substrings.size();
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
#include <string>

using namespace std;

int countDistinctStrings(string s) {
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        string sub = s.substr(0, i) + s.substr(i+2);
        if (sub != s.substr(i, 2)) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << countDistinctStrings(s) << endl;
    }
    return 0;
}
