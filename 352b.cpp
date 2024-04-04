#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    map<ll,vector<int>>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]].push_back(i+1);
    }
    vector<pair<ll,ll>>ans;
    for(auto &[k,j]:mp){
        if(j.size()==1){
            ans.push_back({k,0});
        }
        else if(j.size()==2){
            ans.push_back({k,j[1]-j[0]});
        }
        else{
            int f=0;
            ll diff=j[1]-j[0];
            for(int i=1;i<j.size();i++){
                if((j[i]-j[i-1])!=diff){
                    f=1;
                    break;
                }
            }
            if(f==0){
                ans.push_back({k,diff});
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto [k,j]:ans){
        cout<<k<<' '<<j<<endl;
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