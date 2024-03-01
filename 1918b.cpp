#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void help(vector<pair<ll,ll>>&v,ll n){
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i].first>v[j].first && i<j){
                c++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i].second>v[j].second && i<j){
                c++;
            }
        }
    }
    cout<<c<<endl;
}
void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    vector<pair<ll,ll>>p(n);
    for(int i=0;i<n;i++){
        p[i].first=v[i];
        p[i].second=v2[i];
    }
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i].second<<" ";
    }
    cout<<endl;
    // help(p,n);
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