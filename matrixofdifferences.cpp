#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>v(n*n,0);
        int k=0;
        for(int i=0;i<n*n;i++){
            v[k++]=n*n-i;
            k++;
        }
        k=1;
        for(int i=0;i<n*n;i++){
            v[k++]=i+1;
            k++;
        }
        vector<vector<int>>ans(n,vector<int>(n,0));
        int kk=0;
        for(int i=0;i<n;i+=2){
            vector<int>m(n,0);
            for(int j=0;j<n;j++){
                m[j]=v[kk++];
            }
            kk+=n;

            ans[i]=m;
        }
        kk=n;
        
        for(int i=1;i<n;i+=2){
            vector<int>m(n,0);
            for(int j=n-1;j>=0;j--){
                m[j]=v[kk++];
            }
            kk+=n;

            ans[i]=m;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;}
        kk=n;

    }
    return 0;
}