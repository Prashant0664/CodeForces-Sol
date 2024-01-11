#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void help(vector<string>&v,ll n,ll m,ll i,ll j,string &ans,ll k,string s,set<pair<ll,ll>>st){
    if(i<0 || j<0 || i>=3 || j>=3 || st.find({i,j})!=st.end()){
        if(k==0){
            ans=min(ans,s);
        }
        else{

        }
        return;
    }
    if(k==0){
        ans=min(ans,s);
        // cout<<"-";
        return;
    }
    st.insert({i,j});
    help(v,n,m,i+1,j,ans,k-1,s+v[i][j],st);
    help(v,n,m,i,j+1,ans,k-1,s+v[i][j],st);
    help(v,n,m,i-1,j,ans,k-1,s+v[i][j],st);
    help(v,n,m,i,j-1,ans,k-1,s+v[i][j],st);

    help(v,n,m,i-1,j+1,ans,k-1,s+v[i][j],st);
    help(v,n,m,i-1,j-1,ans,k-1,s+v[i][j],st);
    help(v,n,m,i+1,j-1,ans,k-1,s+v[i][j],st);
    help(v,n,m,i+1,j+1,ans,k-1,s+v[i][j],st);


}
void solution(){
    ll n,m;
    // cin>>n;
    vector<string>v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    n=3,m=3;
    string ans="ZZZ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            set<pair<ll,ll>>st;
            help(v,n,m,i,j,ans,3,"",st);
        }
    }
    cout<<ans<<"\n";
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