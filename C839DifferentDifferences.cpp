#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<int>v(a,0);
        if(a==b){
            for(int i=1;i<=a;i++){
                v[i]=(i);
            }
        }
        else{
            int k=1;
            int m=-1;
            v[0]=1;
            for(int i=1;i<a;i++){
                if(v[i-1]+k>b){
                    m=i;
                    break;
                }
                else{
                    v[i]=(v[i-1]+k);
                    k++;
                }
            }
            // for(int i=0;i<a;i++){
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl;
            if(m!=-1){
                int h=0;
                for(int i=m-1;i<a;i++){
                    v[i]=v[i-1]+1;

                }
            }
            int l=b;
            int j=a-1;
            while(v[j]==0){
                v[j]=l;
                l--;
                j--;
            }
            for(int i=a-1;i>=0;i--){
                if(v[i]>b){
                    v[i]=l;
                    l--;
                }
            }
            // int k=1;
            // int f=0;
            // v.push_back(1);
            // for(int i=1;i<a;i++){
            //     if(f){
            //         v.push_back(v[i-1]+1);
            //     }
            //     else{
            //         if(v[i-1]+(k)+(a-v.size())<=b){
            //         v.push_back(k+v[i-1]);
            //         k+=1;}
            //         else{
            //             f=1;
            //             v.push_back(v[i-1]+1);
            //         }
            //     }
            // }
        }
        for(int i=0;i<a;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}