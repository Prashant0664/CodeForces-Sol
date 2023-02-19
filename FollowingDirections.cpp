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
        int x=0;
        int y=0;
        int f=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                x--;
            }
            if(s[i]=='U'){
                y++;
            }
            if(s[i]=='R'){
                x++;
            }
            if(s[i]=='D'){
                y--;
            }
            if(x==1&&y==1){
                cout<<"YES";
                f=1;
                break;
            }
        }
        if(!f){
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}