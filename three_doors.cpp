#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,a,b,c;
        cin>>k>>a>>b>>c;
        int f=0;
        if(k==1&&a==2&&b==3){
            f=1;
        }
        else if(k==1&&a==3&&c==2){
            f=1;
        }
        else if(k==2&&a==3&&b==1){
            f=1;
        }
        else if(k==2&&b==3&&c==1){
            f=1;
        }
        else if(k==3&&a==2&&c==1){
            f=1;
        }
        else if(k==3&&b==1&&c==2){
            f=1;
        }
        else{
            f=0;
        }
        if(f){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}