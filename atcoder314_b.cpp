#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        unordered_map<ll,vector<pair<ll,ll>>>m;
        for(ll i=0;i<n;i++){
            ll k;
            cin>>k;
            for(int p=0;p<k;p++){
                ll j;
                cin>>j;
                m[j].push_back({k,i});
            }
        }
        ll w;
        cin>>w;
        if(m.find(w)==m.end()){
            cout<<0<<endl<<endl;
        }
        else{
            vector<pair<ll,ll>>v=m[w];
            sort(v.begin(),v.end());
            // for(int i=0;i<v.size();i++){
            //     cout<<v[i].first<<" "<<v[i].second<<endl;
            // }
            vector<ll>ans;
            for(int i=0;i<v.size();i++){
                if(v[i].first==v[0].first){
                   ans.pb(v[i].second+1);
                }
            }
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}