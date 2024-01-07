#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll lengthOfLIS(vector<ll>& nums) {
        vector<ll> tails(nums.size(), 0);
        ll size = 0;

        for (ll x : nums) {
            ll i = 0, j = size;
            while (i != j) {
                ll m = (i + j) / 2;
                if (tails[m] <=x)
                    i = m + 1;
                else
                    j = m;
            }
            tails[i] = x;
            if (i == size) ++size;
        }
        int j=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(tails[i]!=0){
                v.push_back(tails[i]);
            }
        }
        reverse(v.begin(),v.end());
        vector<int>v2;
        j=0;
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(j<v.size() && nums[i]==v[j]){
                j++;
            }
            else{
                v2.push_back(nums[i]);
            }
            // for(auto i:v2){
            //     cout<<i<<" ";
            // }
            // cout<<"\n";

        }
        int c=0;
        for(int i=1;i<v2.size();i++){
            if(v2[i]>v2[i-1])c++;
        }
        return c;
    }
void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    vector<ll>v2(n);
    int f2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        v2[i]=v[i];
        if(i>0 && v[i]!=v[i-1])f2=1;
    }
    if(f2==0){
        cout<<"0\n"; 
        return;
    }
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    else if(n==2){
        if(v[0]>=v[1]){
            cout<<0<<"\n";
            return;
        }
        else{
            cout<<1<<"\n";
            return;
        }
    }
    sort(v2.begin(),v2.end());
    int f=0;
    for(int i=0;i<n;i++){
        if(v[i]!=v2[i]){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<n-2<<"\n";
        return;
    }
    reverse(v.begin(),v.end());
    ll g=lengthOfLIS(v);
    cout<<g<<"\n";
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        // solution();
    }
    for(;;){
        cout<<"1\n";
    }
    return 0;
}