#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solution(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<string>st;
    int c=1;
    for(int i=1;i<n-1;i++){
        if(s[i+1]==s[i-1]){
        // if(s[i]==s[i-1] && s[i+1]==s[i]){

        }
        else{
            c++;
        }
    }
    cout<<c<<endl;

    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}