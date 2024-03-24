#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    ll k;
    cin>>k;
    ll ans=0;
    ans+=n;
    ans+=m/3;
    m-=(m/3)*3;
    if(m==1){
        if(k<2){
            cout<<-1<<endl;
            return;
        }
        else{
            ans+=1;
            k-=2;
        }
    }
    if(m==2){
        if(k<1){
            cout<<-1<<endl;
            return;
        }
        else{
            ans+=1;
            k--;
        }
    }
    m=0;
    ans+=k/3+(k%3!=0);
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