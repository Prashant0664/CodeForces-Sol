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
        vector<vector<ll>>v(n);
        for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            v[i]={b,a};
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        ll ans=0;
        // cout<<"---\n";
        // for(int i=0;i<n;i++){
            // cout<<v[i][0]<<" "<<v[i][1]<<endl;
        // }
        if(v[0][1]!=v[1][1])
        ans+=(v[0][0]+v[1][0]);
        else ans+=v[0][0]+v[1][0]/2;
        ll f=v[0][1];
        // cout<<ans<<endl;
        for(int i=0;i<n;i++){
            if(v[i][1]!=v[0][1]){
                ans=max(ans,v[i][0]+v[0][0]);
                break;
            }
        }
        cout<<ans<<endl;
        // 1 4
        // 2 10
        // 2 8
        // 3 6
    }
}