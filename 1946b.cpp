#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;
void maxSubArraySum(vector<ll>a, ll size,ll k)
{
    vector<ll> dp(size, 0);
    dp[0] = a[0];
    ll ans = dp[0];
    for (ll i = 1; i < size; i++) {
        dp[i] = max(a[i], a[i] + dp[i - 1]);
        ans = max(ans, dp[i]);
    }
    ll sum=0;
    for(int i=0;i<size;i++){
        sum=sum+a[i];
        if(sum<0){
            sum=(sum+1000000007)%1000000007;
        }
        else{
            sum=sum%1000000007;
        }
    }
    // cout<<ans<<endl;
    if(ans<0){
        cout<<(sum+(ll)1000000007)%1000000007<<endl;
        return;
    }
    if(k==1){
        sum+=ans;
        pn(sum%1000000007);
        return;
    }
    ans%=1000000007;
    sum-=ans;
    for(ll i=0;i<k;i++){
        ans=((ans+ans)%1000000007);
    }
    // sum+=ans;
    // cout<<sum<<" "<<ans<<endl;
    cout<<(sum+ans+1000000007)%1000000007<<endl;
}
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    maxSubArraySum(v,n,m);
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}