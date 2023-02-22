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
        int f=0;
        int k=0;
        for(int i=1;i<n;i++){
            if(k==3){
                k=0;
            }
            if(k!=0)
            if(k!=3){
                k++;
                continue;
            }
            k++;
            if(i+1>=n||(s[i]!=s[i+1])){
                cout<<"NO";
                f=1;
                break;
            }
        }
        if(!f){
            cout<<"YES";
        }
        cout<<endl;

    }
    return 0;
}