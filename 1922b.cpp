#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    map<ll,ll>mp;
    ll sum=0;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    // ll sum=0;
    ll ans=0;
    for(auto [i,j]:mp){
        if(sum==0){
            if(j>2){
                ans+=j*(j-1)*(j-2)/6;
            }
            sum+=j;
            continue;
        }
        if(j>2){
            ans+=j*(j-1)*(j-2)/6;
        }
        if(j>=2){
            ans+=sum*(j*(j-1)/2);
        }
        sum+=j;
    }
    cout<<ans<<endl;
    
    return;
}

// 1 2 4 8 16 32 64



int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}