#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s,s2,s3;
        ll a,b,c,n,m,k;
        vector<ll>v;
        vector<vector<ll> > v2;
        ll ans=0;
        int f1,f2,f3,f4,f5,f6;
        f1=f2=f3=f4=f5=f6=0;
        // cin>>s;
        cin>>a>>b>>c;
        // for(int i=0;i<n;i++){

        // }
        k=abs(b-a);
        if(abs(b-a)%2==1){
            k=k/2+1;
        }
        else{
            k=k/2;
        }
        // cout<<k<<endl;
        ans+=abs(k)/c+(abs(k)%c>0?1:0);
        // if(abs((a-b)/2)%c!=0)
        cout<<ans<<endl;
        // else cout<<ans+1<<endl;
    }
    return 0;
}