#include<bits/stdc++.h>
using namespace std;
void help(){
    int h=0;
    int m=0;
    int j=0;
    int jj=0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        help();
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int f=1;
    int k=a[0];
    if(k%2==1){
        help();
        for(int i=1;i<n;i++){
            if(f==1)
            if(a[i]%2==0){
                if((a[i]-k)%2==0){
                    help();
                    cout<<"NO"<<endl;
                    f=0;
                }
            }
        }
    }
    else{
        for(int i=1;i<n;i++){
            if(a[i]%2==1){
                help();
                if(f==1)
                if((a[i]-k)%2==1){
                    cout<<"NO"<<endl;
                    f=0;
                }
            }
        }
    }
    if(f==1){
        cout<<"YES"<<endl;
    }
    }
}