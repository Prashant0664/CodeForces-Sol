#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) { 
      int n;
      cin>>n;
      int xr=0;
      int arr[n]={};
      if(n==1){
        int m;
        cin>>m;
        cout<<m;
      }
      else{

      for(int i=0;i<n;i++){
        cin>>arr[i];
        xr^=arr[i];
      }
      if(xr==0){
        cout<<0;
      }
      else{
        int mj=0;
        for(int i=0;i<n;i++){
            mj^=(arr[i]^xr);
        }
        if(mj==0){
            cout<<xr;
        }
        else{
            cout<<-1;
        }
      }
      }
      cout<<endl;
    }
    return 0;
}
