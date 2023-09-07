#include<bits/stdc++.h>
using namespace std;
const long long int INF=1e18;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,d;
        cin>>n>>m>>d;
        vector<ll>v(m+1);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        ll st=0;
        if(v[0]!=1){
            st=1;
            for(int i=m;i>=1;i--){
                v[i]=v[i-1];
            }
            v[0]=1;
        }
        if(st==0){
            v[m]=n+1;
        }
        else
        v.push_back(n+1);
        n=v.size();
        ll ans=0;
        for(int i=1;i<n;i++){
            ll x=v[i-1];
            ll y=v[i];
            bool e=((y-x)%d)==0;
            ll g=(y-x)/d+1-(e?1:0);
            ans+=g;
        }
        ll ans2=ans;
        ll newan=ans;
        for(ll i=1;i<n-1;i++){
            ll x=v[i-1];
            ll y=v[i+1];
            bool e=((y-x)%d)==0;
            ll g=(y-x)/d+1-(e?1:0);
            x=v[i-1];
            y=v[i];
            e=((y-x)%d)==0;
            ll g2=(y-x)/d+1-(e?1:0);
            x=v[i];
            y=v[i+1];
            e=((y-x)%d)==0;
            ll g3=(y-x)/d+1-(e?1:0);
            newan=ans2+g-g2-g3;
            ans=min(ans,newan);
            

        }
        int cnt=0;
        for(int i=1;i<n-1;i++){
            ll x=v[i-1];
            ll y=v[i+1];
            bool e=((y-x)%d)==0;
            ll g=(y-x)/d+1-(e?1:0);
            x=v[i-1];
            y=v[i];
            e=((y-x)%d)==0;
            ll g2=(y-x)/d+1-(e?1:0);
            x=v[i];
            y=v[i+1];
            e=((y-x)%d)==0;
            ll g3=(y-x)/d+1-(e?1:0);
            newan=ans2+g-g2-g3;
            if(newan==ans)cnt++;
        }
        if(ans==ans2 && st==0){
            cnt++;
        }
        cout<<ans<<" "<<cnt<<endl;
    }
}
