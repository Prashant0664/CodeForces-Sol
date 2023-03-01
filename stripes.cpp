#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[8][8];
        int n=8;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<n;j++){
                arr[i][j]=s[j];
            }
        }
        // cout<<endl<<"----------------"<<endl;
        // for(int i=0;i<n;i++){
        //     // cin>>s;
        //     for(int j=0;j<n;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl<<"----------------"<<endl;
        // }
        char ans='o';
        int f=1;
        for(int i=0;i<n;i++){
            char m=arr[i][0];
            for(int j=0;j<n;j++){
                if(arr[i][j]=='.'){
                    break;
                }
                if(arr[i][j]!=m){
                    ans='o';
                    f=1;
                    break;    
                }
                else{
                    f=0;
                    ans=arr[i][j];
                }
            }
        }
        if(f){
            for(int i=0;i<n;i++){
            char m=arr[0][i];
            for(int j=0;j<n;j++){
                if(arr[i][j]=='.'){
                    break;
                }
                if(arr[j][i]!=m){
                    ans='o';
                    f=1;
                    break;    
                }
                else{
                    f=0;
                    ans=arr[j][i];
                }
            }
        }
        }
        // if(ans=='o'){
        //     cout<<"B"<<endl;
        // }
        // else
        cout<<ans<<endl;
    }
    return 0;
}