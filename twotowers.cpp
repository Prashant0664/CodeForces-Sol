#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int n1=s1.length();
        int n2=s2.length();
        int ans=0;
        for(int i=n1-1;i>0;i--){
            if(s1[i]==s2[i-1]){
                if(s1[i]==s2[s2.length()-1]){
                    ans=1;
                    break;
                }
                else{
                    s2+=s1[i];
                }
            }
        }
        for(int i=0;i<s2.length()-1;i++){
            if(s2[i]==s2[i+1]){
                ans=1;
                break;
            }
        }
        if(ans!=1){
            for(int i=n2-1;i>0;i--){
                if(s2[i]==s1[i-1]){
                    if(s2[i]==s1[s1.length()-1]){
                        ans=1;
                        break;
                    }
                    else{
                        s1+=s2[i];
                    }
                }
            }
            for(int i=0;i<s1.length()-1;i++){
                if(s1[i]==s1[i+1]){
                    ans=1;
                    break;
                }
            }
        }
        if(ans){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}