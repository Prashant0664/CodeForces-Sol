#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    // t=1;
    cin>>t;
    while(t--){
        ll n,m,a,b,c,d;
        // string s;
        cin>>n>>m;
        vector<int>v(n);

        // cin>>n;
        // cin>>m;
        // cin>>s;
        // n=s.length();
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n==2){
            if(abs(v[0]-v[1])<=m){
                cout<<0<<endl;
                continue;
            }
            cout<<1<<endl;
            continue;
        }
        int f=0;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(abs(v[i]-v[i-1]>m)){
                f=1;
            }
        }
        if(!f){
            cout<<0<<endl;
            continue;
        }

        ans=1;
        ll ansr=1;
        for(int i=1;i<n;i++){
            if(abs(v[i]-v[i-1])>m){
                ans=max(ans,ansr);
                ansr=1;
                // break;
            }
            else{
                ansr++;
            }
        }
        ll ans2=1;
        ll ansl=1;
        // cout<<ans<<endl;
        for(int i=n-2;i>=0;i--){
            if(abs(v[i]-v[i+1])>m){
                ans2=max(ans2,ansl);
                ansl=1;
                // break;
            }
            else{
                ansl++;
            }
        }
        // cout<<ans2<<endl;
        cout<<min(n-ans,n-ans2);
        cout<<endl;
        // cout<<ans<<endl;
    }
    return 0;
}