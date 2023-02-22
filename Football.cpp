#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v1(a,0);
        vector<int>v2(a,0);
        for(int i=0;i<a;i++){
            if(b>=0){
                v1[i]=1;
                b--;
            }
            if(c>=0){
            v2[i]=1;
                c--;
            }
        }
        if(b>0){
            v1[a-1]+=b;
        }
        
        if(c>0){
            v2[a-1]+=c;
        }
        for(int i=0;i<a;i++){
            cout<<v1[i]<<":"<<v2[i]<<endl;
        }
    }
    return 0;
}