#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) { 
      int x,y;
      int a,b;
      cin>>x>>y>>a>>b;
      if(y>b){
        cout<<-1;
      }
      else if(y==b&&x<a){
        cout<<-1;
      }
      else if(x==a&&y==b){
        cout<<0;
      }
      else if(y==b&&x>a){
        cout<<x-a;
      }
      else if(x==a&&y<b){
        cout<<(b-y)*2;
      }
      else if(x>a){
        cout<<(x-a+b-y+b-y);
      }
      else if((b-y)/(a-x)>=1){
        cout<<((b-y)+(x+b-y-a));
      }
      else{
        cout<<-1;
      }
      cout<<endl;
    }

    return 0;
}
