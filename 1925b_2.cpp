#include <iostream>
#include <string>
#include <map>
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, m, cnt = 0;
    string s, ans;
    cin >> n >> k >> m >> s;
    vector<int>mpl(200,0);
    for(auto i:s){
        mpl[(int)i-97]++;
    }
    for(int j=0;j<k;j++){
        if(mpl[j]<k){
            // cout<<mpl[j]<<" ";
            cout<<"NO\n";
            for(int o=0;o<k;o++){
                cout<<char(97+j);
            }
            cout<<endl;
            // cout<<";;";
            return;
        }
    }


    set<char>stk;
    for (auto el : s) {
        stk.insert(el);
        if (stk.size() == k) {
            ans.push_back(el);
            ++cnt;
            stk.clear();
        }
    }
    if (cnt >= n) {
        cout << "YES\n";
        return;
    }
    else cout << "NO\n";

    if (stk.empty()) {
        for(int i=0;i<k;i++){
            cout<<char(97+i);
        }
        cout<<"\n";
        return;
    }

    char g;

    for (char c = 'a'; c < char(97 + k); ++c) {
        if (stk.find(c)==stk.end()) {
            g = c;
            break;
        }
    }
    cout<<ans<<"-";
    int kk=ans.size();
    while (kk<n) {
        cout<<g;
        kk++;
    }

    cout <<"\n";
}

int main() {
    int _;
    cin>>_;
    while(_--){
        solve();
    }

    return 0;
}