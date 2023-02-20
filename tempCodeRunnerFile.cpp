#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum^=arr[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans^=i;
        }
        cout<<(ans^sum)<<endl;;
        // cout<<ans<<endl;
        // cout<<(4^3^2^5);
    }
    return 0;
}

