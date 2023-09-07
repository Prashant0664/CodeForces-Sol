#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) { 
      int n;
      cin>>n;
      vector<long long int>v;
      for(int i=0;i<n-1;i++){
        long long int m;
        cin>>m;
        v.push_back(m);
      }
      vector<long long int >ans;
      int in=0;
      long long int sm=INT_MAX;
      for(int i=0;i<n-1;i++){
        if(v[i]<sm){
            sm=v[i];
            in=i;
        }
      }
      for(int i=0;i<in;i++){
        ans.push_back(v[i]);
      }
      ans.push_back(sm);
      for(int i=in;i<n-1;i++){
        ans.push_back(v[i]);
      }
      for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
