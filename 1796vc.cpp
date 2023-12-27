#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solution(){
    ll a,b,ans=0;
    cin>>a>>b;
    ll sm=a;
    ll se=1;
    ll c1=1,c2=0;
    while(se*2<=b){
        c1++;
        se*=2;
    }
    se/=2;
    ans=b/se-a+1;
    cout<<c1<<" ";
    se/=2;
    se*=3;
    ans+=max((0LL),(c1-1)*(b/se-a+1));
    cout<<ans<<endl;
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}