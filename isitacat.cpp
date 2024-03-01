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
        if(s[0]=='M'||s[0]=='m'){
            f=1;
        }
        if(f==0){
            cout<<"NO";
        }
        else{
            for(int i=0;i<n-1;i++){
                if((s[i]=='M'||s[i]=='m')&&(s[i+1]=='m'||s[i+1]=='M'||s[i+1]=='e'||s[i+1]=='E')){
                    f=1;
                    // cout<<"MMM ";
                }
                else if((s[i]=='e'||s[i]=='E')&&(s[i+1]=='e'||s[i+1]=='E'||s[i+1]=='O'||s[i+1]=='o')){
                    f=1;
                    // cout<<"eee ";
                }
                else if((s[i]=='o'||s[i]=='O')&&(s[i+1]=='O'||s[i+1]=='o'||s[i+1]=='w'||s[i+1]=='W')){
                    f=1;
                    // cout<<"OOO ";
                }
                else if((s[i]=='W'||s[i]=='w')&&(s[i+1]=='W'||s[i+1]=='w')){
                    f=1;
                    // cout<<"WWW ";
                }
                else{
                    f=0;
                    // cout<<"c";
                    break;
                }
            }
            int g=0;
            if(f==0){
                cout<<"NO";
                g=1;
            }
            else if(s[n-1]=='W'||s[n-1]=='w'&&f==1){
                f=1;
            }
            else{
                f=0;
            }
            if(g==0){
            if(f==1){
                    cout<<"YES";
            }
            else{
                cout<<"NO";
            }}

        }
        cout<<endl;
    }
    return 0;
}