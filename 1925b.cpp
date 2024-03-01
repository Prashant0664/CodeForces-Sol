#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    set<ll>st;
    auto it=st.lower_bound(n/m);
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    it=st.lower_bound(n/m);
    (*it<=(n/m))?cout<<*it:cout<<(*(--it));
    cout<<"\n";
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