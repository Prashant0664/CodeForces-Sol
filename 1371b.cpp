// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// typedef long long int ll;

// void solution(){
//     ll n,m;
//     cin>>n;
//     cin>>m;
//     ll a=min(n,m),b=max(m,n);
//     cout<<(a+b)*(b-a+1)/2<<"\n";
//     return;
// }
// int main(){
//     int _=1;
//     cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include<stdio.h>
 
int main(){
  long long n,l=1,r,t,res;
  scanf("%lld",&t);
  while(t>0){
    t--;
    res=0;
    scanf("%lld%lld",&n,&r);
    if(n<=l){printf("1\n");continue;}
    if(n<=r){r=n-1;res=1;}
    printf("%lld\n",res+((l+r)*(r-l+1))/2);
  }
  return 0;
}