
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define ll long long
int n;
int test(vector<int>&aux){
    for(auto i : aux){
        if(i == 0)return 0;
    }
    int sum = 0;
    for(int i = 0 ; i < aux.size() ; i ++){
        if(aux[i] == 1)continue;
        sum += aux[i];
    }
    return max(1, sum);
}
void tc(){
    cin >> n;
    string s;
    cin >> s;
    int minimum = INT_MAX;
    for(int i = 0 ; i < n-1 ; i ++){
        string p = "";
        vector<int>aux;
        for(int j = 0 ; j < i ; j ++){
            aux.pb(s[j] - '0');
        }
        if(s[i] != 0)p += s[i];
        p += s[i+1];
        if(p == "" or p == "00")p = "0";
        aux.pb(stoi(p));
        for(int j = i + 2 ; j < n ; j ++){
            aux.pb(s[j] - '0');
        }
        minimum = min(minimum, test(aux));
    }
 
    cout << minimum << "\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        tc();
    }
 
}
 