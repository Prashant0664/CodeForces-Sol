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
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll k=n;
    // cout<<k<<" ";
    vector<ll>ans(n,0);
    for(int i=n-1;i>=0;i--){
        if(v[i]<=0){
            // v[i]=k+abs(v[i]);
            ans[i]=(v[i]<0?-v[i]:v[i]);
            ans[i]+=k;
        }
        else if(v[i]>0){
            ll kk=v[i];
            ans[i]=k-v[i];
            k=ans[i];
        }
        else{
            
        }
    }
    // for(int i=0;i<n;i++){
        // cout<<anms[i]<<" ";
    // }
    printv(ans);
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