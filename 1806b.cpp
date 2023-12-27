#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solution(int t){
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>v2;
    int zc=0;
    int f=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=0 && v[i]!=1){
            f=1;
        }
        if(v[i]==0){
            zc++;
        }
        else{
            v2.push_back(v[i]);
        }
    }
    if(zc==0){
        cout<<0<<endl;
        return;
    }
    if(zc==n){
        cout<<1<<endl;
        return;
    }
    if(zc<=n/2+1 && n%2==1){
        cout<<0<<endl;
        return;
    }
    if(zc<=n/2 && n%2==0){
        cout<<0<<endl;
        return;
    }
    set<ll>st;
    set<ll>s2;
    ll ans1=INT_MAX;
    if(f==0){
        cout<<2<<endl;
        return;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        s2.insert(v[i]+v[i+1]);
    }
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            ll g=v[i];
            v[i]=v[n-1];
            v[n-1]=g;
            break;
        }
    } 
    for(ll i=0;i<n-1;i++){
        st.insert(v[i]+v[i+1]);
    }
    for(int i=0;i<2*1e5+1;i++){
        if(st.find(i)==st.end() || s2.find(i)==s2.end()){
            cout<<i<<endl;
            return;
        }
    }
    // 0 0 0 0 0 1 1 2 2 2
    for(ll i=0;i<n-1;i++){
        st.insert(v[i]+v[i+1]);
    }
    for(int i=0;i<2*1e5+1;i++){
        if(st.find(i)==st.end()){
            cout<<i<<endl;
            return;
        }
    }
    // 1 0 1 1



}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution(_);
    }
}