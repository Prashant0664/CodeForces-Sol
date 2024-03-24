#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<int>v(n+2,0);
    for(int i=2;i<=n+1;i++){
        if(!v[i]){
            for(int j=i*2;j<=n+1;j+=i){
                v[j]=1;
            }
        }
    }
    if(n>2){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
    for(int i=2;i<=n+1;i++){
        if(v[i]){
            cout<<2<<" ";
        }else{
            cout<<1<<" ";
        }
    }
    pn("\n");
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