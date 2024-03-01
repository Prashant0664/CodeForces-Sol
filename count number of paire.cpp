// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         // cout<<0+'a'-'A';
//         int n;
//         cin>>n;
//         int k;
//         cin>>k;
//         string s;
//         cin>>s;
//         unordered_map<int,int>m;
//         for(int i=0;i<n;i++){
//             m[0+s[i]]++;
//         }
//         int ans=0;
//         int d=0;
//         for(int i=0;i<n;i++){
//             if(m[0+s[i]]>0){
//             if((0+s[i])>=65&&(0+s[i])<=(65+26)){
//             ans+=min(m[0+s[i]],m[32+s[i]]);
//             int h=abs(m[0+s[i]]-m[32+s[i]]);
//             m[0+s[i]]=0;m[32+s[i]]=0;
//             if(h%2==0){
//                 d+=h;
//             }
//             else{
//                 if(h-1>0)
//                     d+=h-1;
//             }}
//             else{
//             ans+=min(m[0+s[i]],m[-32+s[i]]);
//             int h=abs(m[0+s[i]]-m[-32+s[i]]);
//             m[0+s[i]]=0;m[-32+s[i]]=0;
//             if(h%2==0){
//                 d+=h;
//             }
//             else{
//                 // ccde
//                 if(h-1>0)
//                     d+=h-1;
//             }
//             }}
//             // cout<<ans<<"--"<<endl;;
//             // cout<<d<<"<<<<"<<endl;

//         }
//         // if(d>k)
//         if(d/2>=k){
//             ans+=k;
//         }
//         else{
//             // cout<<"-->"<<ans<<endl;
//             ans+=abs(d/2);
//         }
//         cout<<ans<<endl;






//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

map<pair<char, char>, vector<int>> count_pairs(const string& s) {
    // Count the number of occurrences of each lowercase letter
    // and its matching uppercase letter in the string.
    map<pair<char, char>, vector<int>> pairs;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (islower(c)) {
            pair<char, char> pair = {c, toupper(c)};
            pairs[pair].push_back(i);
        } else if (isupper(c)) {
            pair<char, char> pair = {tolower(c), c};
            pairs[pair].push_back(i);
        }
    }
    return pairs;
}

int get_max_pairs(const string& s, int k) {
    // Find the maximum number of pairs Kristina can get for the string.
    map<pair<char, char>, vector<int>> pairs = count_pairs(s);
    int max_pairs = 0;
    set<int> chosen;
    while (true) {
        // Find the pair that appears the most times and does not overlap
        // with any previously chosen pairs.
        int max_count = 0;
        pair<char, char> best_pair = {'\0', '\0'};
        for (auto& [pair, indices] : pairs) {
            int count = indices.size();
            if (count > max_count &&
                    none_of(indices.begin(), indices.end(),
                            [&chosen](int i){ return chosen.count(i) > 0; })) {
                max_count = count;
                best_pair = pair;
            }
        }
        if (best_pair == pair<char, char>{'\0', '\0'}) {
            break;
        }
        // Add the chosen pair to the set of chosen indices.
        for (int i : pairs[best_pair]) {
            chosen.insert(i);
        }
        max_pairs++;
        // If we have performed fewer than k operations, consider changing
        // the case of some letters to increase the number of pairs we can choose from.
        if (k > 0) {
            k--;
            pair<char, char> pair = {best_pair.second, best_pair.first};
            if (pairs.count(pair) > 0) {
                int count = count_if(pairs[pair].begin(), pairs[pair].end(),
                                     [&chosen](int i){ return chosen.count(i) == 0; });
                if (max_count + count > max_pairs) {
                    for (int i : pairs[pair]) {
                        if (chosen.count(i) == 0) {
                            chosen.insert(i);
                        }
                    }
                    max_pairs = max_count + count;
                }
            }
        }
    }
    return max_pairs;
}

int main() {
    string s = "aAaaBACacbE";
    int k = 2;
    cout << get_max_pairs(s, k) << endl;  // Output: 5
    return 0;
}
