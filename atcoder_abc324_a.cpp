#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int f=0;
        for(int i=1;i<n;i++){
            if(v[i]!=v[i-1]){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}