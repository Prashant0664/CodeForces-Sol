 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void ans(){
    ll n,k,c=0;
    cin>>n;
    ll num=1;
    for(int i=1;i<=16;i++){
        num=1;
        for(int j=1;j<=i;j++){
          num*=i;
        }
        if(num==n){
          cout<<i<<endl;
          return;
        }
    }
    cout<<-1<<endl;
    return;
}
// 437893890380859375
int main(){
    int _=1;
    
    // cin>>_;
    while(_--){
        ans();
    }
    return 0;
}
