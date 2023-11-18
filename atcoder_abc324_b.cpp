#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void ans(){
    ll n;
    cin>>n;
    for(int i=0;i<39;i++){
        for(int j=0;j<=60;j++){
            if(n==(ll)((ll)(pow(2,j)*(ll)(pow(3,i))))){
                cout<<"Yes\n";
                return;
            }
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