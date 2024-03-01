#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int f=0;
        for(int i=0;i<s.length()-2;i++){
            if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
                cout<<i+1<<endl; 
                f=1;
                break;
            }
        }
        if(f==0)cout<<-1<<endl;

    }
}