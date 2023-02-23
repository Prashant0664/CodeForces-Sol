#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }       
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==0){
                continue;
            }
            else if(arr[i+1]>2){
                arr[i]=0;
                ans+=1;
            }
            else{
                arr[i+1]-=arr[i];
                ans+=arr[i];
                arr[i]=0;
            }
            // for(int j=0;j<n;j++){
            //     cout<<arr[j]<<" ";
            // }
            // cout<<"--"<<ans;
            // cout<<endl;
        }
        if(arr[n-1]!=0){
            ans+=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}