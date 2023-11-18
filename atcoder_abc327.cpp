#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void ans(){
    ll n,k,c=0;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        // cin>>v[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]=='a' && s[i+1]=='b'){
            cout<<"Yes\n";
            return;
        }
        if(s[i]=='b' && s[i+1]== 'a'){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        ans();
    }
    return 0;
}
