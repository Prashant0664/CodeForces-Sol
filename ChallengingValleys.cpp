#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n,0);
        int f=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int f2=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(f!=1){
                if(v[i]>v[i+1]){
                    f=1;
                    int g=0;
                    for(int j=i;j<n;j++){
                        if(g==1&&v[j]>v[j+1]){
                            ans=1;
                            break;
                        }
                        if(v[j]<v[j+1]){
                            g=1;
                        }
                    }
                }
            }
            if(f2!=2){
                if(v[i]<v[i+1]){
                    f2=2;
                    int g=0;
                    for(int j=i;j<n;j++){
                        if(v[j]>v[j+1]){
                            ans=1;
                            break;
                        }
                    }
                }
            }

        }
        if(ans){
            cout<<"NO"<<endl;
        }
        if(!ans){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}