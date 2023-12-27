#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  map<char,int>mp;
  int i=1;
  int j=0;
  char ele=s[0];
  int c=1;
  vector<int>v(1000,0);
  while(i<n){
    if(s[i]!=s[j]){
        v[(int)s[j]]=max(v[(int)s[j]],c);
        c=1;
        j=i;
    }
    else{
        c++;
    }
    i++;
  }
  v[(int)s[j]]=max(v[(int)s[j]],c); 
//   for(int i=0;i<n;i++){
//     cout<<s[i]<<" "<<v[(int)s[i]]<<endl;
//   }
  int ans=0;
  for(auto i:v){
    if(i<=0)continue;
    ans+=(i);
  }
  cout<<ans<<endl;
}