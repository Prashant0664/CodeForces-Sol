#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>pref(n+1,0);
    for(int i=0;i<n;i++){
        if(i==0){
            pref[i]=min(k,v[i+1]-1)-1;
        }
        else if(i==n-1){
            pref[i]=k-v[i-1]-1;
        }
        else{
            pref[i]=v[i+1]-v[i-1]-1;
            pref[i]--;
        }
    }
    for(int i=1;i<n;i++){
        pref[i]=pref[i]+pref[i-1];
    }
    // for(auto &i:pref)ps(i);
    pref[n]=0;
    for(int i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        x--;y--;
        if(x==y){
            cout<<k-1<<endl;
        }
        else{
            ll ans=0;
            ans+=v[x+1]-2;
            ans+=k-v[y-1]-1;
            x++;y--;
            if(y>=x)
            ans+=(pref[y]-pref[x-1]);
            cout<<ans<<endl;
        }
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