#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int k;
        cin>>k;
        for(int i=1;i<n;i++){
            int m;
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i]>k){k+=(v[i]-k+1)/2;}
        }
        cout<<k<<endl;;
    }
    return 0;
}