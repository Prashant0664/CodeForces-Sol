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
    cin>>n>>m>>k;
    ll ans=-1;
    for(int i=0;i<n;i++){
        ll j;
        cin>>j;
        if(j+m>=k && ans==-1){
            ans=i+1;
        }
    }
    if(ans==-1)cout<<0<<endl;
    else
    cout<<ans<<endl;
}