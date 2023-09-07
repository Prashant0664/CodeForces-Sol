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
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==0){
                m[s[i]]=2;
            }
            else{
                m[s[i]]++;
            }
        }
        long long int ans=0;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==0){
                continue;
            }
            else{
                ans+=m[s[i]];
                m[s[i]]=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}