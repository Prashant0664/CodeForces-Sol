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
    set<string>st;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>s;
        if(st.find(s)==st.end()){
            pn("OK");
            st.insert(s);
            mp[s]=1;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
    // vector<ll>v(n);
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