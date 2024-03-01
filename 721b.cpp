#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<pair<ll,ll>>v;
    map<ll,ll>mp;
    cin>>m;
    for(int i=0;i<n;i++){
        string k;
        cin>>k;
        mp[k.length()]++;
    }
    for(auto &[i,j]:mp){
        v.push_back({i,j});
    }
    string jj;
    cin>>jj;
    ll g=jj.length();
    sort(v.begin(),v.end());
    ll ans=0;
    ll cnt=0;
    ll acnt=0;
    for(auto i:v){
        if(i.first<g){
            cnt+=i.second;
        }
        else if(i.first==g){
            acnt+=i.second;
        }
        else{
            break;
        }
    }
    // cnt++;
    acnt+=cnt;
    // cout<<cnt<<" "<<acnt<<" ";
    cout<<1+cnt+5*(cnt/m)<<" ";
    cout<<acnt+5*((acnt-1)/m)<<endl;
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