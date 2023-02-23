#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s1,s2;
        cin>>s1>>s2;
        int f=0;
        for(int i=0;i<a-2;i++){
            if((s1[i]==s1[i+1])&&(s1[i]==s1[i+2])){
                cout<<"NO";
                f=1;
                break;
            }
        }
        if(!f){
            for(int i=0;i<b-2;i++){
                if((s2[i]==s2[i+1])&&(s2[i]==s2[i+2])){
                    cout<<"NO";
                    f=1;
                    break;
                }
            }
        }
        
        if(!f){
            for(int i=a-1;i>=0;i--){
                s2+=s1[i];
            }
            int c=0;
            for(int i=0;i<a+b-2;i++){
                if((s2[i]==s2[i+1])&&(s2[i]==s2[i+2])){
                    cout<<"NO";
                    f=1;
                    break;
                }
            }
            if(!f){
                for(int i=0;i<a+b-1;i++){
                    if((s2[i]==s2[i+1])){
                        if(c==1){
                            cout<<"NO";
                            f=1;
                            break;
                        }
                        c++;
                    }
                }
            }
        }
        if(!f){
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}