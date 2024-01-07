#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    // vector<ll>v(n);
    for(int i=0;i<n;i++){
        // cin>>v[i];
    }
    for(auto i:s){
        if(i=='-'){
            c++;
        }else{
            c--;
        }
    }
    cout<<abs(c)<<"\n";
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