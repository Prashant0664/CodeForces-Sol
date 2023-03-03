#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) { 
      string s1,s2;
      cin>>s1>>s2;
        int n=s1.length();
        int m=s2.length();
        if((s1[n-1]=='M'&&s2[m-1]=='S')||(s1[n-1]=='L'&&s2[m-1]=='M')||(s1[n-1]=='L'&&s2[m-1]=='S')){
            cout<<">";
        }
        else if((s1[n-1]=='S'&&s2[m-1]=='M')||(s1[n-1]=='M'&&s2[m-1]=='L')||(s1[n-1]=='S'&&s2[m-1]=='L')){
            cout<<"<";
        }
        else if(n>m&&s1[n-1]=='L'){
            cout<<">";
        }
        
        else if(n>m&&s1[n-1]=='S'){
            cout<<"<";
        }
        
        else if(n<m&&s1[n-1]=='L'){
            cout<<"<";
        }
        
        else if(n<m&&s1[n-1]=='S'){
            cout<<">";
        }
        else{
            cout<<"=";
        }
        cout<<endl;
    }
    return 0;
}
