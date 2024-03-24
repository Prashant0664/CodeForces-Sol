#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    ll ans=LLONG_MAX;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            for(int k=0;k<=4;k++){
                for(int l=0;l<=2;l++){
                    if((n-(i*1+j*3+k*6+l*10))>=0 && (n-(i*1+j*3+k*6+l*10))%15==0){
                        ans=min(ans,i+j+k+l+(n-(i*1+j*3+k*6+l*10))/15);
                        // return;
                    }
                }
            }
        }
    }
    pn(ans);
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}