

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void ans(){
    ll n;
    cin>>n;
    if(n<7){
        cout<<"No\n";
        return;
    }
    if((n-3)%3!=0){
        if(n-3==2|| n-3==1){
            cout<<"No\n";
            return;
        }
        cout<<"Yes\n";
        cout<<"1 2 "<<n-3<<endl;
        return;
    }
    else{
        if(n<8){
            cout<<"no\n";
            return;
        }
        if((n-5)%3!=0){
            if(n-5==4|| n-5==1){
                cout<<"No\n";
                return;
            }
            cout<<"Yes\n";
            cout<<"1 4 "<<n-5<<endl;
            return;
        }
    }
    cout<<"No\n";
    return;
}
// 1 2 n-3
// 1 4 n-5
int main(){
    int _;
    cin>>_;
    while(_--){
        ans();
    }
    return 0;
}