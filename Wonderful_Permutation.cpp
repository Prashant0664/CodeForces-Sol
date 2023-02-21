#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,n;
        cin>>n>>a;
        int arr[n];
        int arr2[n];
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            arr[i]=m;
            arr2[i]=m;
            map[m]=i;
        }
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<a;i++){
            if(arr[i]!=arr2[i]){
                // cout<<arr[i]<<"--";
                int h1=arr[i];
                int h2=arr2[i];
                int i1=map[arr[i]];
                int i2=map[arr2[i]];
                int k=arr2[i];
                arr2[i]=arr[i];
                arr2[i1]=k;
                map[h2]=i1;
                map[h1]=i2;
                ans++;
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<arr2[i]<<" ";
        // }
        // cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}