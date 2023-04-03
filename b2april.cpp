#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) { 
      int n;
      cin>>n;
      string s;
      cin>>s;
      int m=s[0];
      int j=0;
      for(int i=0;i<n;i++){
        if(m>=(int)s[i]){
            m=s[i];
            j=i;
        }
      }
      if(j!=0)
      {cout<<s[j]<<s.substr(0,j)<<s.substr(j+1,n-j-1)<<endl;
    }
    else{
        cout<<s<<endl;
    }}
    return 0;
}
