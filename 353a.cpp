#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(5,0);
    for(int i=0;i<n;i++){
        ll k,j;
        cin>>k>>j;
        if(k%2==0 && j%2==0){
            v[0]++;
        }
        else if( k%2==1 && j%2==1){
            v[1]++;
        }
        else if(k%2==1 && j%2==0){
            v[2]++;
        }
        else if(k%2==0 && j%2==1){
            v[3]++;
        }
    }
    // e e
    // o o
    // o e
    // e o
    ll ans=INT_MAX;
    v[1]%=2;
    cout<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
    if((v[1]+v[2]+v[3])%2==0){
        pn(0);
        return;
    }
    if(v[1]==1){
        if(v[2]%2==1 && v[3]%2==0){
            pn(1);
            return;
        }
        if(v[2]%2==0 && v[3]%2==1){
            pn(1);
            return;
        }
    }
    if(v[1]==0){
        if(v[2]==1 && v[3]==1){
            pn(1);
            return;
        }
    }
    cout<<-1<<"\n";
    return;

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