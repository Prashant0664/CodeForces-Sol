#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int mini=0;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    mini=max(v[i],mini);
  }  
  int ans=-1;
  for(int i=0;i<n;i++){
    if(v[i]!=mini){
        ans=max(ans,v[i]);
    }

  }
  cout<<ans<<endl;
  
  cout<<endl;
}