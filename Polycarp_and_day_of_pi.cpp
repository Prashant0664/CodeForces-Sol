#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        string p="314159265358979323846264338327950288419716939937510";
        for(int i=0;i<30;i++){
            if(s[i]==p[i]){
                ans++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}