#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    int tcb=0;
    int mc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='M')mc++;
    }
    if(mc!=n/3 || n%3!=0){
        cout<<"NO"<<endl;
        return;
    }
    int nmc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T')tcb++;
        else nmc++;
        if(nmc>tcb){
            cout<<"NO"<<endl;
            return;
        }
    }
    reverse(s.begin(),s.end());
    nmc=0,tcb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T')tcb++;
        else nmc++;
        // cout<<nmc<<" "<<tcb<<endl;
        if(nmc>tcb){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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