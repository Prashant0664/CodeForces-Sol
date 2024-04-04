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
    vector<ll>v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    int i=0;
    int j=0;
    set<ll>st;
    while(j<n && i<n){
        if(st.find(v[j])!=st.end()){
            j++;
        }
        else if(v[j]!=v2[i]){
            st.insert(v2[i]);
            i++;
        }
        else{
            j++;
            i++;
        }
    }
    pn(st.size());
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