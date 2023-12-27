#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,k;
    string s;
    cin>>s;
    n=s.length();
    string t=s;
    ll o=0,z=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            z++;
        }
        else{
            o++;
        }
    }
    if(z==o){
        cout<<0<<endl;
        return;
    }
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            if(o>0){
                o--;
            }
            else{
                cout<<n-i<<endl;
                return;
            }
        }
        else{
            if(z>0){
                z--;
            }
            else{
                cout<<n-i<<endl;
                return;
            }
        }
    }
    
    return;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
}