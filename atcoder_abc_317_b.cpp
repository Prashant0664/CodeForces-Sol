#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik, n) for (int i = ik; i < n; i++)
typedef long long int ll;

/// @brief 
/// @return 
int main()
{
    ll n,m,k;
    cin>>n;
    ll ans=-1;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll j;
        cin>>j;
        v.push_back(j);
        // if(j+m>=k && ans==-1){
            // ans=i+1;
        // }
    }
    int g=0;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]+1){
            g=1;
            cout<<v[i-1]+1<<endl;
            break;
        }
    }
    if(g==0){
        cout<<v[0]-1<<endl;;
    }
    // if(ans==-1)cout<<0<<endl;
    // else
    // cout<<ans<<endl;
}