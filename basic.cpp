#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=9;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==4){
                    break;
                }
                else{
                    cout<<j;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}