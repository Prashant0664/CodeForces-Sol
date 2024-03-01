// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         unordered_map<char,int>m;
//         cin>>s;
//         int ans=0;
//         int n=s.length();
//         if(n<=3){
//             cout<<1;
//         }
//         else{
//             //  m.erase(m.begin());
//             int i=0;
//             int l=0;
//             while(n>0){
//                 if(m[s[i]]==0){
//                     m[s[i]]++;
//                     i++;
//                     l++;
//                 }
//                 else if(m[s[i]]>=1){
//                     n--;
//                     i++;
//                     continue;
//                 }
//                 n--;
//                 if(l==3){
//                     m.erase(m.begin());
//                     ans++;
//                     l=0;
//                 }
//             }
//             if(n%3==0)
//             cout<<ans;
//             else cout<<ans+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        // int ans=0;
    set<char>st;
        string s;
        cin >> s;
        // set<char> st;
        long long ans = 0;
        for (long long i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
            if (st.size() == 4)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if(st.size())ans++;
        long long k = ans / 3;
        cout << ans << endl;
    }
    return 0;
}
