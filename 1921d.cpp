#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    vector<ll>v2(m);
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum1+=v[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
        sum2+=v2[i];
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end(),greater<ll>());
    ll sum=0;
    vector<ll>p(m,v2[0]);
    // vector<ll>s(m,v2[m-1]);
    for(int i=1;i<m;i++){
        p[i]=p[i-1]+v2[i];
        // cout<<p[i]<<" ";
        // s[m-i-2]=v2[m-i-2]+s[m-i-1];
    }
    cout<<sum1<<" "<<sum2<<endl;
    for(int i=0;i<p.size();i++)cout<<p[i]<<" ";
    cout<<'\n';
    ll ans=0;
    ll d=abs(m-n);
    for(ll i=0;i<m-d+1;i++){
        cout<<i<<": "<<p[i+d-1]-(i==0?0:p[i-1])<<endl;
        ans=max(ans,abs(sum1-(sum2-(p[i+d-1]-(i==0?0:p[i-1])))));
    }
    cout<<ans<<endl;

/*
    1 2 4 6
    7 5 3 3 2 1
*/
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