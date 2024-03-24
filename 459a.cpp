#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    if(m==y){
        cout<<n<<" "<<m-(n-x)<<" "<<x<<" "<<y-(n-x)<<endl;
    }
    else if(n==x){
        // cout<<"=";
        cout<<n-(m-y)<<" "<<m<<" "<<x-(m-y)<<" "<<y<<endl;
    }
    else{
        if(abs(y-m)!=abs(x-n)){
            cout<<-1<<endl;
            return;
        }
        cout<<n<<" "<<y<<" "<<x<<" "<<m<<endl;
    }
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