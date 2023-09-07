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
        unordered_map<string,int>m;
        for(int i=0;i<n-1;i++){
            string g="";
            g+=(s[i]);
            g+=(s[i+1]);
            m[g]++;
        }
        int c=0;
        for(int i=0;i<n-1;i++){
            
            string g="";
            g+=(s[i]);
            g+=(s[i+1]);
            if(m[g]>0){
                c++;
                // cout<<g<<" -"<<endl;
                m[g]=-1;}
        }
        if(n==2){
            cout<<1<<endl;
        }
        else
        cout<<c<<endl;
    }
    return 0;
}