#include<bits/stdc++.h>
using namespace std;

void solution(){
    string s,t;
    cin>>s>>t;
    if(s==t){
        cout<<"YES\n"<<s<<endl;
        return;
    }
    if(s[0]==t[0]){
        cout<<"YES\n"<<s[0]<<"*\n";
        return;
    }
    int n=s.size();
    if(s[s.length()-1]==t[t.length()-1]){
        cout<<"YES\n*"<<s[n-1]<<"\n";
        return;
    }
    map<string,int>mp;
    for(int i=0;i<s.length()-1;i++){
        mp[s.substr(i,2)]++;
    }
    for(int i=0;i<t.length()-1;i++){
        if(mp[t.substr(i,2)]!=0){
            cout<<"YES\n";
            cout<<"*"<<t.substr(i,2)<<"*\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}