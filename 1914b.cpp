#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cout<<i+1<<" ";
    }
    for(int i=n;i>k;i--){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
}