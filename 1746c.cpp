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
    vector<int>v2(n,0);
    for(int i=0;i<n-1;i++){
        if(v[i]-v[i+1]<0){
            ll d=abs(v[i]-v[i+1]);
              v2[i+1]=d;
        }
    }
    multiset<ll>st;
    for(int i=1;i<=n;i++){
        st.insert(i);
    }
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        if(v2[i]!=0){
            auto x=lower_bound(st.begin(),st.end(),v2[i]);
            ll y=*x;
            st.erase(x);
            mp[y]=i+1;
        }
    }
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            cout<<n<<" ";
        }
        else{
            cout<<mp[i]<<" ";
        }
    }
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