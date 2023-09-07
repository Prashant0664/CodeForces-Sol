#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ll t = 1;
  cin>>t;
  while (t--){
    string s;
    cin>>s;
    ll n=s.length();
    int c=0;
    if(s[0]>='5'){
        cout<<1;
        for(int i=0;i<n;i++){
            cout<<"0";
        }
        cout<<endl;
        continue;
    }
    int j=n;
    for(int i=n-1;i>=0;i--){
        if(s[i]+c>='5'){
            j=i;
            c=1;
        }
        else{
            s[i]+=c;
            c=0;
        }
    }
    for(int i=j;i<n;i++){
        s[i]='0';
    }
    if(c){
        cout<<1<<s;
        cout<<endl;
        continue;
    }
    else{
        cout<<s<<endl;
    }
  }
  return 0;
}