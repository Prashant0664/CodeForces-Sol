#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
typedef long long int ll;
ll maxSubArray(vector<ll>& nums) {
        ll ans=0;
        ll sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
        }
        return ans;
    }
void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i%2==0){
            sum+=v[i];
        }
    }
    vector<ll>v1;
    vector<ll>v2;
    for (int i = 2; i < n; i += 2)
		v1.push_back(v[i - 1] - v[i]);
	for (int i = 0; i + 1 < n; i += 2)
		v2.push_back(v[i + 1] - v[i]);
    int s=0,e=0;
    ll a=maxSubArray(v1);
    ll b=maxSubArray(v2);
    pn(sum+max(a,b));

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