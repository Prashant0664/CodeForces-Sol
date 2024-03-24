#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    set<ll>k;
    for(int i=0;i<n;i++){
        cin>>v[i];
        k.insert(i+1);
    }
    set<ll>st;
    vector<ll>ans(n,0);
    for(int i=0;i<n;i++){
        if(st.find(v[i])==st.end()){
            st.insert(v[i]);
            ans[i]=v[i];
            k.erase(v[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]==0){
            ans[i]=*k.begin();
            k.erase(k.begin());
        }
    }
    ll maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,ans[i]);
        if(maxi!=v[i]){
            ps(-1);
            endo;
            return;
        }
    }
    for(auto i:ans){
        ps(i);
    
    }
    endo;
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