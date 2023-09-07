#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        // 1 1 2 2
        // 1 1
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans+=v[i];
            int k=v[i];
            v[i]=0;
            v[i+1]-=k;
        }
        if(v[v.size()-1]>0){
            ans+=v[v.size()-1];
        }
        int s=v.size();
        int j=min(ans,s);
        cout<<j<<endl;
    }
    return 0;
}