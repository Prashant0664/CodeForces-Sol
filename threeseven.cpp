#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) { 
      long long n;
      cin>>n;
      vector<long long>v[n];
      for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        for(int j=0;i<x;j++){
            long long y;
            cin>>y;
            v[i].push_back(y);
        }
      }
      bool a[500000+5]={false};
      vector<long long>ans;
      for(long long l=n-1;l>=0;l--){
        bool found=false;
        for(auto i:v[l]){
            if(!found&&!a[i]){
                found=true;
                ans.push_back(i);
            }
            else{
                a[i]=false;
            }
        }
        if(ans.size()==n){
            reverse(ans.begin(),ans.end());
            for(auto l:ans){
                cout<<l<<" ";
            }
            
        }
        else{
                cout<<-1;
            }
            cout<<endl;
      }
    }
    return 0;
}
