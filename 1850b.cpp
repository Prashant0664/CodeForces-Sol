#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    // t=1;
    cin>>t;
    while(t--){
        ll n,m,a,b,c,d;
        string s;
        cin>>n;
        ll ans=-1;
        ll ind=-1;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<=10){
                if(ans<b){
                    ans=b;
                    ind=i+1;
                // ind=i+1;
                }
                ans=max(ans,b);
            }
        }
        cout<<ind<<endl;
        // cin>>m;
        // cin>>s;
        // n=s.length();
        // ll ans=0;
        // for(int i=0;i<n;i++){

        // }
        // cout<<ans<<endl;
    }
    return 0;
}