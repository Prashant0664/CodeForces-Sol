#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) { 
      string s;
      cin>>s;
      if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]&&s[3]==s[0]){
        cout<<-1;
      }
      else{
        int c;
        unordered_map<char,int>m;
        for(int i=0;i<4;i++){
            m[s[i]]++;
        }
        c=0;
        for(int i=0;i<4;i++){
            c=max(c,m[s[i]]);
        }
        if(c==3){
            cout<<6;
        }
        else{
            cout<<4;
        }
      }
      cout<<endl;
    }
    return 0;
}
