#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    set<ll>st;
    map<ll,ll>mp;
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
        maxi=max(v[i],maxi);
        mp[v[i]]++;
    }
    for(auto &[i,j]:mp){
        if(maxi%i==0){
            j--;
        }
    }
    cout<<maxi<<" ";
    maxi=0;
    for(auto &[i,j]:mp){
        if(j>0)maxi=max(maxi,i);
    }
    cout<<maxi<<endl;

    

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