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
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]=1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=arr[i];
            for(int j=i+2;j<n;j++){
                ans^=arr[j];
            }
            if(m[ans]==1){
                cout<<ans<<endl;
                break;
            }
            ans=0;
        }
        // cout<<(6^10^7^10);
        // cout<<(ans^sum)<<endl;;
        // cout<<ans<<endl;
        // cout<<(4^3^2^5);
    }
    return 0;
}

