#include<bits/stdc++.h>

using namespace std;
int help(int x,int y,int n){
    x--;y--;
    x=min(x,n-x-1);
    y=min(y,n-y-1);
    return min(x,y);
}
int main() {
    int t;
    cin >> t;
    while (t--) { 
      int n,x1,y1,x2,y2;
      cin>>n>>x1>>y1>>x2>>y2;
      int k=help(x1,y1,n);
      int k2=help(x2,y2,n);
      int a1=x1-1;
      
      int b1=y1-1;
      a1=min(a1,n-a1-1);
      b1=min(b1,n-b1-1);
      int aa1=min(a1,b1);
      int a2=x2-1;
      int b2=y2-1;
      a2=min(a2,n-a2-1);
      b2=min(b2,n-b2-1);
      int aa2=min(a2,b2);
      int ans=abs(aa2-aa1);
      cout<<ans;
      cout<<endl;
    }
    return 0;
}

