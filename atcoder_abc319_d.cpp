#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll a,l,n;
        cin>>n>>l;
        ll sum=0;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll avg=sum/l + sum%l;
        ll ans=avg;
        ll c=0;
        for(int i=0;i<n;i++){
            c+=v[i];
            if(c==avg){
                c=0;
                continue;
            }
            if(c>avg){
                ans=max(ans,c);
                c=0;
            }
            else{
                c+=1;
            }
        }
        cout<<ans<<endl;

    }
}