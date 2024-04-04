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
    vector<ll>v(n,0);
    for(int i=1;i<n;i++){
        cin>>v[i];
    }
    ll c=0;
    ll w=0;
    map<int,int>mp;
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]<=0){
            pn("NO");
            return;
        }
        else if(c==0 && v[i]-v[i-1]>n){
            c=1;
            w=v[i]-v[i-1];
        }
        else if(c==1 && v[i]-v[i-1]>n){
            pn("NO");
            return;
        }
        else if(w==0 && mp[v[i]-v[i-1]]==1){
            // pn("NO");
            w=v[i]-v[i-1];
            // return;
        }
        else{
            mp[v[i]-v[i-1]]=1;
        }
    }
    set<ll>st;
    for(int i=1;i<=n;i++){
        if(!mp[i] || mp[i]==0){
            st.insert(i);
        }
    }
    if(st.size()>2){
        pn("NO");
        return;
    }
    else if(st.size()==2){
        auto it=st.begin();
        ll a=*it;
        it++;
        ll b=*it;
        if((a+b)==w){
            pn("YES");
        }
        else{
            pn("NO");
        }
    }
    else{
        pn("YES");
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