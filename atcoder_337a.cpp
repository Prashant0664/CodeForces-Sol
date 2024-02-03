#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    ll a,b;
    a=0,b=0;
    for(ll i=0;i<n;i++){
        ll g,h;
        cin>>g>>h;
        a+=g,b+=h;
        if(g>h){
            // a++;
        }
        else if(h>g){
            // b++;
        }
        else{
            // a++,b++;
        }
    }
    if(a>b){
        cout<<"Takahashi\n";
    }
    else if(b>a){
        cout<<"Aoki\n";
    }
    else{
        cout<<"Draw\n";
    
    }
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}