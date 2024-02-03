#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    string s;
    cin>>s;
    map<char,int>mp;
    int maxi=0;
    for(auto i:s){
        mp[i]++;
        maxi=max(maxi,mp[i]);
    }
    for(auto i:mp){
        if(i.second==maxi){
            cout<<i.first<<endl;
            return;
        }
    }
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}