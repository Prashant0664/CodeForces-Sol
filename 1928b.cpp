#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v;
    set<ll>st;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        st.insert(k);
    }
    for(auto i:st){
        v.push_back(i);
    }
    ll i=0,j=0,ans=0;
    while(i<v.size() && j<v.size()){
        if((v[i]-v[j])<n){
            ans=max(ans,i-j+1);
            i++;
        }
        else{
            j++;
        }
    }
    cout<< ans<<endl;

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