#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    map<int,int>mp;
    int pre=-1;
    for(int i=0;i<n;i++){

        ll h;
        cin>>h;
        if(h==-1){
            pre=h;
        }
        mp[h]=i+1;
    }
    // cout<<pre<<" ";
    // n--;
    while(n--){
        cout<<mp[pre]<<" ";
        pre=mp[pre];
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