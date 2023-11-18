
 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans(){
    ll n,ans=0,s=0;
        cin>>n;
        vector<ll> v(n+1), kjrbekjvbrjbe;
        for (ll i = 1; i <= n; i++)
        {
            cin>>v[i];
            s+=v[i];
            v[i]=s;
        }
        for (ll i = 1; i*i <= n; i++)
        {
            if (n%i==0) 
            {
                kjrbekjvbrjbe.push_back(i);
                kjrbekjvbrjbe.push_back(n/i);
            }
            else{
            }
        }
        ans=0;
        for(int kk=0;kk<kjrbekjvbrjbe.size();kk++){
            ll it=kjrbekjvbrjbe[kk];
        // for (auto &&it : kjrbekjvbrjbe)
        // {
            ll mn=1e18, mx=0;
            for (ll i = it; i <= n; i+=it)
            {
                mn=min(mn,v[i]-v[i-it]);
                mx=max(mx,v[i]-v[i-it]);
            }
            // ans=max(ans,mx-mn);
            if(ans<mx-mn){
                ans=mx-mn;
            }
        }
        return ans;

}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        cout<<(ll)ans()<<endl;
    }

    return 0;
}   
