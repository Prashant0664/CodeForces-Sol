#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string t="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    for(int i=0;i<21;i++){
        if(t.substr(i,n)==s){
            cout<<"YES\n";
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