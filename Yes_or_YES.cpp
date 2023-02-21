#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()==3){
           if(s=="YES"){
            cout<<"YES";
           }
           else if(s=="YEs"){
            cout<<"YES";
           }
           else if(s=="YeS"){
            cout<<"YES";
           }
           else if(s=="Yes"){
            cout<<"YES";
           }
           else if(s=="yES"){
            cout<<"YES";
           }
           else if(s=="yEs"){
            cout<<"YES";
           }
           else if(s=="yeS"){
            cout<<"YES";
           }
           else if(s=="yes"){
            cout<<"YES";
           }
           else{
            cout<<"NO";
           }
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}