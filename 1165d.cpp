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

    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    set<ll>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    sort(v.begin(),v.end());
    ll a=v[0]*v[v.size()-1];
    for(int i=0;i<n;i++){
        if(v[i]*v[v.size()-1-i]!=a){
            pn(-1);
            return;
        }
    }
    vector<ll>v2;
    for(ll i=2;i*i<=a;i++){
        if(a%i==0){
            v2.push_back(i);
            if(i!=a/i){
                v2.push_back(a/i);
            }
        }
    }
    sort(v2.begin(),v2.end());
    if(v2.size()!=n){
        pn(-1);
        return;
    }
    cout<<v[0]*v[v.size()-1];
    endo;
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