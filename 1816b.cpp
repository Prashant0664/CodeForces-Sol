#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum=0;
        for(long long i=0;i<n;i++){
            long long k;
            cin>>k;
            sum+=k;
        }
        if((float)sqrt(sum)*sqrt(sum)==(float)sum){
            // cout<<sqrt(sum)<<"-\n";
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}