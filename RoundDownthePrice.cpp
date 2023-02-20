#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<10){
            cout<<n-1;
        }
        else if(n>10&&n<100){
            cout<<n-10;
        }
        else if(n>100&&n<1000){
            cout<<n-100;
        }
        else if(n>1000&&n<10000){
            cout<<n-1000;
        }
        else if(n>10000&&n<100000){
            cout<<n-10000;
        }
        else if(n>100000&&n<1000000){
            cout<<n-100000;
        }
        else if(n>1000000&&n<10000000){
            cout<<n-1000000;
        }
        else if(n>10000000&&n<100000000){
            cout<<n-10000000;
        }
        else if(n>100000000&&n<1000000000){
            cout<<n-100000000;
        }
        else if(n>1000000000&&n<10000000000){
            cout<<n-1000000000;
        }
        
        else if(n>10000000000&&n<100000000000){
            cout<<n-10000000000;
        }
        else cout<<0;
        cout<<endl;
    }
    return 0;
}