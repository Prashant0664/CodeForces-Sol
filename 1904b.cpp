#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    if(i>0)v[i].first+=v[i-1].first;
    for(auto i:v){
        cout<<i.first<<" ";
    }
    vector<int>ans(n,n);
    for(int i=n-1;i>=0;i--){
        if(v[i].first>=v[i+1].first){
            ans[i]=ans[i+1];
        }
        else ans[i]=i;
    }
    cout<<"\n";
    vector<ll>sp(n);
    for(int i=0;i<v.size();i++){
        sp[v[i].second]=ans[i];
    }
    for(int i=0;i<n;i++){
        cout<<sp[i]<<" ";
    }

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