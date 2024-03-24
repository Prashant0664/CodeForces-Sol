#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    vector<ll>v(n);
    ll ed=0,od=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i%2==0) ed+=v[i];
        else od+=v[i];
    }
    ll ans=0;
    ll os=0,es=0;
    // cout<<ed<<' '<<od<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ll os2=os,es2=es;
            es2+=(od);
            os2+=(ed-v[i]);
            // cout<<es2<<' '<<os2<<endl;
            if(es2==os2)ans++;
            ed-=v[i];
            es+=v[i];
        }
        else{
            ll os2=os,es2=es;
            es2+=(od-v[i]);
            os2+=(ed);
            if(es2==os2)ans++;
            od-=v[i];
            os+=v[i];
        }
    }
    pn(ans);
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