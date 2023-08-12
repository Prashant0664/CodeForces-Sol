#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=0;
        if(a==b){
            cout<<2<<endl;
            continue;
        }
        for(int i=1;i<a;i++){
            int nn=ceil(i/(double)b);
            // cout<<nn<<"--";
            if(nn>c){
                c++;
            }
        }
        if(a%2==1){
            int nn=ceil((a/2+1)/(double)b);
            if(nn>c){
                c++;
            }
        }
        cout<<(c+1)<<endl;
        }
    return 0;
}