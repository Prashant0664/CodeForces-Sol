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
        int f=0;
        cin>>s;
        for(int i=1;i<s.length();i++){
            if(s[i]>=s[i-1]){
                cout<<"No\n";
                f=1;
                break;
            }
        }
        if(!f)cout<<"Yes\n";
    }
}