#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n,0);
        for(int i=0,x;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        vector<int>ans;
        int f=0;
        ans.push_back(0);
        for(int i=0;i<n-1;i++){
            if((v[n-1]-v[i]>=0)&&(v[i]!=0)){
                cout<<-1<<endl;
                f=1;
                break;
            }
            else{
                ans.push_back(ans[i]+v[i+1]);
            }
        }
        if(f==0){
        for(int i=0;i<n;i++){
            cout<<ans[i+1]<<" ";
        }
        cout<<endl;}
    }
    return 0;
}