#include <bits/stdc++.h>
using namespace std;
int sumd(long long int n){
    int ans=0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
void solve(long long int n){
    for(int i=0;i<=n-i;i++){
        if(abs(sumd(i)-sumd(n-i))<=1){
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<10&&n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else if(n<10){
            cout<<n/2<<" "<<n/2+1<<endl;
        }
        else if(n%2==0&&(abs(sumd(n/2)/sumd(n/2)<=1))){
            cout<<n/2<<" " << n/2<<endl;
        }
        else if(n%2!=0&&(abs(sumd(n/2)/sumd(n/2+1)<=1))){
            cout<<n/2<<" " << n/2+1<<endl;
        }
        else{
            solve(n);
        }
    }
    return 0;
}