#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
ll help(){
    ll n;
        ll mi=INT_MAX;
        ll ans=0;
        cin>>n;
        vector<ll>v(n);
        vector<vector<ll>>v4;
        vector<vector<ll>>v5;
        ll sm=INT_MAX;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<ll>sp;
            for(int j=0;j<m;j++){
                ll k;
                cin>>k;
                sp.pb(k);
            }
            ll l=sp[0];
            for(int h=0;h<m;h++){
                if(sp[h]!=sp[0]){
                    l=sp[h];
                    break;
                }
            }
            sort(sp.begin(),sp.end());
            sm=min(sm,sp[0]);
            v5.push_back(sp);
            v4.pb({sp[1],sp[0]});
            // v4.push_back({l,mini,i,0});
        }
        sort(v4.begin(),v4.end());
        for(int i=v4.size()-1;i>=1;i--){
            ans+=v4[i][0];
            mi=min(mi,v4[i][1]);
            // cout<<v4[i][0]<<" -\n";
        }
        ans+=min(mi,v4[0][1]);
        // cout<<v4[0][1]<<"-\n";
        return ans;
        // cout<<ans<<"\n";
        // cout<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        cout<<help()<<endl;;
    }
    return 0;
}