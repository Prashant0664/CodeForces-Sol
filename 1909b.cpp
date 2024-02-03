#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    int o=0,e=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)o=1;
        else e=1;
    }
    if(o && e){
        cout<<2<<endl;
        return;
    }
    if(o){
        cout<<3<<endl;
    }
    else{
        cout<<4<<endl;
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