#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int n,m;
        // cin>>n>>m;
        // vector<vector<int>>v(n,vector<int>(n,0));
        // vector<int>v1(,0);
        // vector<int>v2(n,0);
        // unordered_map<int,int>m1;
        int n1=0;
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<int>v2;
            for(int i=0;i<n-1;i++){
                int h;
                cin>>h;
                v2.push_back(h);
            }
            v.push_back(v2);
        }
        int c=0;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(v[0][0]==v[1][0]){
                ans[0]=(v[0][0]);
            }
            else if(v[0][0]==v[2][0]){
                ans[0]=(v[0][0]);
            }
            else{
                ans[0]=(v[1][0]);
            }
        }
        for(int i=0;i<n;i++){
            if(v[i][0]!=ans[0]){
                c=i;
            }
        }
        for(int i=0;i<n-1;i++){
            int j=v[c][i];
            ans[i+1]=(j);
            // cout<<j<<" ";
        }
        // cout<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}