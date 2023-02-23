#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=5){
            if(n%2==0){
            for(int i=0;i<n/2;i++){
                cout<<((n-1)/2-1)<<" "<<(-(n-1)/2)<<" ";
            }}
            else{
             
            for(int i=0;i<n/2;i++){
                cout<<((n-1)/2-1)<<" "<<(-(n-1)/2)<<" ";
            }
            cout<< (n-1)/2-1;  
            }
            cout<<endl;
        }
        else if(n%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<1<<" "<<(-1)<<" ";
            }
        cout<<endl;
        }
    }
    return 0;
}