#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll second=n;
        ll first=i;
        ll f=1;
        for(int j=0;j<m-2;j++){
            ll sec=first;
            first=second-sec;
            second=sec;
            if(min(first,second)>=0 && first<=second){

            }
            else{
                f=0;
                break;
            }
        }
        if(f)ans++;
    }
    cout<<ans<<endl;
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