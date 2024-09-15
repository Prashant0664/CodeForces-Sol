#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        int d=v[(i+1)%n].first-max(0LL,v[i].second);
        v2[i]=d;
    }
    for(auto &i:v2)cout<<i<<" ";
    



    // ll i=0,c=INT_MAX;
    // for(int j=0;j<n;j++){
    //     int d=v[(j+1)%n].first-max(0LL,v[j+1].first-v[j].second);
    //     if(d<c){
    //         i=j;
    //         c=d;
    //     }
    // }
    // c=0;
    // ll ans=0;
    // for(int j=i+1;j<n;j++){
    //     v[j].first-=c;
    //     if(v[j].first>0){
    //         ans+=v[j].first;
    //     }
    //     c=v[j].second;
    // }
    // for(int j=0;j<=i;j++){
    //     v[j%n].first-=c;
    //     if(v[j%n].first>0){
    //         ans+=v[j%n].first;
    //     }
    //     c=v[j%n].second;
    // }
    // // if(ans!=7)
    // pn(ans);
    // return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}