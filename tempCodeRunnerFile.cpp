#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            sum+=k;
        }
        if(sqrt(sum)*sqrt(sum)==sum){
            // cout<<sqrt(sum);
            cout<<"YES\n";
        }
        else{
            cout<<"No\n";
        }
    }
}