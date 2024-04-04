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
    vector<ll>v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int o=0,z=0;
    for(int i=0;i<n;i++){
        cin>>v2[i];
        if(v2[i]==1){
            o=1;
        }
        else{
            z=1;
        }
    }
    if(o && z){
        pn("Yes");
        return;
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            pn("No");
            return;
        } 
    }
    pn("Yes");
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