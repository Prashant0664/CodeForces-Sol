#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        string s,t;
        int a,b;
        cin>>a>>b;
        cin>>s>>t;
        int n=s.length();
        int m=t.length();
        // cout<<m-n-1<<endl;
        if(t.substr(0,n)==s && t.substr(m-n,n)==s){
            cout<<0<<endl;
        }
        else if(t.substr(0,n)==s){
            cout<<1<<endl;
        }
        else if(t.substr(m-n,n)==s){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }

    }
}