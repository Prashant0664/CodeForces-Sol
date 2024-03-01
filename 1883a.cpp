#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void help(){
    ll n,m,a,b,c,k;
    string s;
    cin>>n>>k;
    while(1){
        ll g=n;
        ll sum=0;
        while(g!=0){
            sum+=g%10;
            g/=10;
        }
        if(sum%k==0){
            cout<<n;
            return;
        }
        n++;
    }





    return;
}





int main(){
    int t;
    cin>>t;
    while(t--){
        help();
        cout<<endl;
    }
    return 0;
}