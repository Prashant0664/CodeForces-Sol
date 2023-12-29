#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int j=0;
    char c='z';
    for(int i=n-1;i>=1;i--){
        if(s[i]<c){
            c=s[i];
            j=i;
        }
    }
    // cout<<j<<endl;
    if((int)c>int(s[0])){
        // cout<<"-";
        cout<<s<<endl;
        return;
    }
    if(j==n-1){
        cout<<c<<s.substr(0,j)<<endl;
        return;
    }
    // if()
    cout<<c;
    // cout<<j<<" "<<s.substr(j+1,n-j+2+1)<<endl;
    string m=s.substr(0,j)+s.substr(j+1,n-j+2+1);
    cout<<m<<endl;
}
int main(){
    int _;
    cin>>_;
    while(_--){
        solution();
    }
}