#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<n-1;i++){
        int f=0;
        for(int j=0;j<n;j++){
            ll d=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
            if(d>m){
                f=1;
                break;
            }
        }
        if(f==0){
            // cout<<i<<" ";
            cout<<1<<"\n";
            return;
        }
    }
    cout<<"-1\n";
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