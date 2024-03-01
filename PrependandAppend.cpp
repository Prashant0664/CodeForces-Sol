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
        int ans=0;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]){
                break;
            }
            else{
                ans++;
            }
        }
        cout<<n-ans*2<<endl;
    }
    return 0;
}