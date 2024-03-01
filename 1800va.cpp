#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solution(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='m' || s[0]=='M'){

    }
    else{
        cout<<"NO\n";
        return;
    }
    if(s[n-1]=='w' || s[n-1]=='W'){

    }
    else{
        cout<<"NO\n";
        return;
    }
    char c='m';
    for(int i=0;i<n;i++){
        if((s[i]=='m' || s[i]=='M') && c=='m'){
            continue;
        }
        else if((s[i]=='e' || s[i]=='E') && c=='m'){
            c='e';
            continue;
        }
        else if((s[i]=='e' || s[i]=='E') && c=='e'){
            continue;
        }
        else if((s[i]=='o' || s[i]=='O') && c=='e')
        {
            c='o';
            continue;
        }
        else if((s[i]=='o' || s[i]=='O') && c=='o')
        {
            continue;
        }
        else if((s[i]=='w' || s[i]=='W') && c=='o'){
            c='w';
            continue;
        }
        else if((s[i]=='w' || s[i]=='W') && c=='w'){
            continue;
        }
        else{
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}