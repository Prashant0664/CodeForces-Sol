#include<iostream>
#include<bits/stdc++.h>
// add ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0,j=0;
    ll sum=0;
    while(j<n){
        if((v[j]<0 && v[i]>0) || (v[j]>0 && v[i]<0)){
            ll maxi=INT_MIN;
            for(ll k=i;k<j;k++){
                maxi=max(maxi,v[k]);
            }
            sum+=maxi;
            i=j;
        }
        j++;
    }
    ll maxi=INT_MIN;
            for(ll k=i;k<j;k++){
                maxi=max(maxi,v[k]);
            }
            sum+=maxi;
    cout<<sum<<endl;
    // ll a=__gcd(1,2);
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