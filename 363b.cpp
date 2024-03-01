#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll height=0;
    for(ll i=0;i<m;i++){
        height+=v[i];
    }
    ll min_height=height;
    ll i=0,j=m,index=0;
    while(j<n){
        height=height-v[i]+v[j];
        if(height<min_height){
            min_height=height;
            index=i+1;
        }
        i++;
        j++;
    }
    cout<<max(0LL,index+1)<<endl;
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}