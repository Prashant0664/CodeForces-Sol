#include<bits/stdc++.h>
using namespace std;
int main(){
    int _;
    cin>>_;
    while(_--){
        int n;
        cin>>n;
        int arr[n+1][n+1]={0};
        int a,b;
        for(int i=0;i<n-1;i++){
            cin>>a>>b;
            arr[a][b]=1;
            arr[b][a]=1;
        } 
        int ans=0;
        queue<int>q;

        for(int i=1;i<=n;i++){
            if(arr[1][i]==1){
                q.push(i);
                arr[1][i]=0;
                arr[i][1]=0;
            }
        }
        q.push(-1);
        while(!q.empty()){
            int j=q.front();
            q.pop();
            if(j==-1){
                ans++;
                if(q.size()==0){
                    continue;
                }
                q.push(-1);
                continue;
            }
            for(int i=1;i<=n;i++){
                if(arr[j][i]==1){
                    q.push(i);
                    arr[j][i]=0;
                    arr[i][j]=0;
                }
            }
        }
        cout<<ans-1;
        cout<<endl;
    }
}