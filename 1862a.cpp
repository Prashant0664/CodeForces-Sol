#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik, n) for (int i = ik; i < n; i++)
typedef long long int ll;
vector<ll> constructLowerArray(vector<ll> &arr)
{
    vector<ll> ans, temp;
    ll n = arr.size();
    for (ll i = n - 1; i >= 0; i--)
    {
        ll c = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        ans.push_back(c);
        temp.insert(temp.begin() + c, arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
void help(ll n,vector<ll>v,vector<ll>v2,ll f,ll f5,ll f2,ll f3,ll diff,ll maxi,map<ll,ll>mp){

        if(n==1 && v[0]==1){
            cout<<"YES\n";
            return;
        }
        if(n==1){
            cout<<"NO\n";
            return;
        }
        if(maxi>n){
            cout<<"NO\n";
            return;
        }
        for(int i=0;i<n;i++){
            v2[v[i]]--;
        }
        if(f==1){
            cout<<"NO\n";
            return;
        }
        // if(f2==0 || f3==0){
        //     cout<<"YES\n";
        //     continue;
        // }
        ll s=0;
        fo(0,n){
            s+=v2[i];
            v2[i]=s;
        }
        fo(0,n){
            if(v2[i]!=v[i]){
                f5=1;
                break;
            }
        }
        if(f5){cout<<"NO\n";return;}
        else {cout<<"YES\n";return;}

}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll f=0;
        ll f5=0;
        ll f2=0;
        ll f3=0;
        ll diff=-1;
        ll maxi=-1;

        map<ll,ll>mp;
        vector<ll>v2(n+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            maxi=max(maxi,v[i]);
            if(i>1 && v[i]>v[i-1]){
                f=1;
            }
            if(i>1 && diff==-1){
                diff=v[i-1]-v[i];
            }
            if(i>1 && diff!=-1){
                if(v[i-1]-v[i]!=diff){
                    f2=1;
                }
            }
            if(i>1 && v[i]!=v[i-1]){
                f3=1;
            }
            mp[v[i]]++;
            v2[0]++;
        }
        

help(n,v,v2,f,f5,f2,f3,diff,maxi,mp);

        /*
        -
        -
        ---

        -
        -
        ---

        -
        -
        --
        ---

        -
        --
        ----

        -
        -

        --

        -
        -
        ---
        ---
        -----

        -
        -
        ---
        ---
        -----

        ---
        ---
        -----
        -----
        -----

        ---
        ---
        -----
        -----
        -----

        */


    }
}