#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    if(m==n+1){
        cout<<-1<<"\n";
        return;
    }
    if(m-n<=1){
        cout<<-1<<"\n";
        return;
    }
    if(n%2==1 && m-n<=2){
        cout<<-1<<"\n";
        return;
    }
    if(n%2==1){
        cout<<n+1<<" "<<n+2<<" "<<n+3<<"\n";
        return;
    }
    cout<<n<<" "<<n+1<<" "<<n+2<<"\n";
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}