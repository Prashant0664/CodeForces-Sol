#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans=LLONG_MAX;
    int i=0,j=0;
    while(i<v.size()){
        ll k=m;
        j+=abs(v[i])*2;
        while(k-- && v[i]<0){
            i++;
        }
        if(v[i]>=0)break;
    }
    ;
    while(i<v.size()){
        ll k=m;
        j+=v[i];
        while(k-- && i<v.size()){
            i++;
        }
    }
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