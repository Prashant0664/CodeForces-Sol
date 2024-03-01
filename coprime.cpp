#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) { 
      int n;
      cin>>n;
      vector<int>v;
      for(int i=0,x;i<n;i++){
        cin>>x;
        v.push_back(x);
      }
      vector<int>v2;
      for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(__gcd(v[i],v[j])==1){
                v2.push_back(i+j+2);
            }
        }
      }
      int ans=-1;
      for(int i=0;i<v2.size();i++){
        if(v2[i]>ans){
            ans=v2[i];
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}
