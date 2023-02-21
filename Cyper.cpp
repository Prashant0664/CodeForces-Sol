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
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            string s;
            cin>>s;
            int u=0;
            int d=0;
            for(int j=0;j<m;j++){
                if(s[j]=='U'){
                    arr[i]--;
                    if(arr[i]<0){
                        arr[i]=9;
                    }
                }
                else{
                    arr[i]++;
                    if(arr[i]>9){
                        arr[i]=0;
                    }
                }
            }
            // int tt=0;
            // if(u<d){
            //     arr[i]=abs((arr[i]-(u-d))%10);
            // }
            // else{
            //     arr[i]=abs((arr[i]+(d-u))%10);
            // }

        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}