#include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) { 
//       int n,m;
//       cin>>n>>m;
//       int a,b,c,d;
//       cin>>a>>b>>c>>d;
//       int s1=9;
//       int s2=9;
//       if(a==1&&b==1){
//         s1=2;
//       }
//       else if(a==1&&b==m){
//         s1=2;
//       }
//       else if(a==n&&b==1){
//         s1=2;
//       }
//       else if(a==n&&b==m){
//         s1=2;
//       }
//       else if(a==1){
//         s1=3;
//       }
//       else if(a==n){
//         s1=3;
//       }
//       else if(b==1){
//         s1=3;
//       }
//       else if(b==m){
//         s1=3;
//       }
//       else{
//         s1=4;
//       }
//       if(c==1&&d==1){
//         s2=2;
//       }
//       else if(c==1&&d==m){
//         s2=2;
//       }
//       else if(c==n&&d==1){
//         s2=2;
//       }
//       else if(c==n&&d==m){
//         s2=2;
//       }
//       else if(c==1){
//         s2=3;
//       }
//       else if(c==n){
//         s2=3;
//       }
//       else if(d==1){
//         s2=3;
//       }
//       else if(d==m){
//         s2=3;
//       }
//       else{
//         s2=4;
//       }
// cout<<min(s1,s2)<<endl;
//     }
//     return 0;
// }

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<abs(x1-x2)+abs(y1-y2)<<endl;
    }
}