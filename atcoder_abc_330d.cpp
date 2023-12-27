#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    vector<string>nums(n);
    vector<ll>v(n,0);
    vector<ll>h(n,0);
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        ll c=0;
        for(int j=0;j<n;j++){
            if(nums[i][j]=='o'){
                c++;
            }
        }
        h[i]=c;
    }
    for(int i=0;i<n;i++){
        ll c=0;
        for(int j=0;j<n;j++){
            if(nums[j][i]=='o'){
                c++;
            }
        }
        v[i]=c;
    }
    
    for(int i=0;i<n;i++){
        if(v[i]<2)continue;
        for(int j=0;j<n;j++){
            
            if(h[j]<2 || nums[j][i]=='x')continue;
            ans+=(v[i]-1)*(h[j]-1);
            // v[i]-=1;
            // h[j]-=1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}