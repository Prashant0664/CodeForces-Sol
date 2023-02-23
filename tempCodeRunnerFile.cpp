#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<int>v;
        if(a==b){
            for(int i=1;i<=a;i++){
                v.push_back(i);
            }
        }
        else{
            int k=1;
            int f=0;
            v.push_back(1);
            for(int i=1;i<a;i++){
                if(f){
                    v.push_back(v[i-1]+1);
                }
                else{
                    if(v[i-1]+(k)+(a-v.size())<=b){
                    v.push_back(k+v[i-1]);
                    k+=1;}
                    else{
                        f=1;
                        v.push_back(v[i-1]+1);
                    }
                }
            }
        }
        for(int i=0;i<a;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}