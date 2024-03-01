#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                k++;
            }
        }
        k=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='1'&&k==0){
                ans+='+';
                k=1;
            }
            else if(s[i]=='1'&&k==1){
                ans+='-';
                k=0;
            }
            else{
                ans+='+';
            }
        }
    //  cout<<ans<<endl;   
        cout<<ans.substr(1,n-1)<<endl;
    }
    return 0;
}