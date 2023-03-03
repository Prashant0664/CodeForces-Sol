#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) { 
      string s;
      int n;
      char c;
      cin>>n>>c>>s;
      s+=s;
      n=n*2;
      vector<char>v;
      for(int i=0;i<n;i++){
        if(s[i]=='g'){
            v.push_back(i);
        }
      }
      int ans=-1;
      int m=v.size();
      if(m==0){
        cout<<-1<<endl;
      }
      else if(n==2&&s[0]=='g'){
        cout<<0<<endl;
      }
      else{
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(s[i]==c){
                for(int j=0;j<m;j++){
                    if(v[j]>i){
                        ans=max(ans,v[j]-i);
                        break;
                    }
                }
            }
        }
      cout<<ans<<endl;
      }
    }
    return 0;
}
