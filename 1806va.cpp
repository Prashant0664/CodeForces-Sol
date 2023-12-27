#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(){
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll ans=0;
    if(y>b){
        cout<<-1<<endl;
        return;
    }
    while(y!=b){
        x++;
        y++;
        ans++;
    }
    if(x<a){
        cout<<-1<<endl;
        return;
    }
    ans+=abs(x-a);
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