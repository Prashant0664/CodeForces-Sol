#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    string s;
    cin>>s;
    ll n=s.length();
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a=1;
        }
        else if(s[i]=='B'){
            b=1;
        }
        else {
            c=1;
        }
    }
    if(a==1 && b==0 && c==0){
        cout<<"Yes\n";
    }
    else if(a==0 && b==1 && c==0){
        cout<<"Yes\n";
    }
    else if(a==0 && b==0 && c==1){
        cout<<"Yes\n";
    }
    else{
        string t=s;
        sort(t.begin(),t.end());
        if(t==s){
            cout<<"Yes\n";
        }else cout<<"No\n";
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