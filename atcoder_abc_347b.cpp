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
    // cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    n=s.length();
    unordered_set<string>st;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string t=s.substr(i,j-i+1);
            // sort(t.begin(),t.end());
            st.insert(t);
        }
    }
    // for(int i=0;i<100;i++){
        // cout<<i%10;
    // }
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