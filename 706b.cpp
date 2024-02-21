#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void help(vector<ll>v, ll k){
    ll high=v.size()-1;
    ll low=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(v[mid]==k){
            low=mid+1;
        }
        else if(v[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low<<"\n";
}
void solution(){
    ll n,m;
    cin>>n;
    set<ll>st;
    map<ll,ll>mp;
    vector<ll>v(1e5+1,0);
    for(int i=0;i<n;i++){
        ll s;
        cin>>s;
        v[s]++;
    }
    for(int i=1;i<1e5+1;i++){
        v[i]+=v[i-1];
    }
    cin>>m;
    while(m--){
        ll k;
        cin>>k;
        if(k>1e5){
            cout<<n<<"\n";
        }
        else{
            cout<<v[k] <<"\n";
        }
    }
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