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
    double x,y;
    cin>>x>>y;
    // cin>>m;
    string s;
    // cin>>s;
    vector<double>v(n);
    set<double>st;
    ll ans=0;
    for(int i=0;i<n;i++){
        double x1,y1;
        cin>>x1>>y1;
        if((x-x1)==0){
            ans=1;
            continue;
        }
        st.insert(double(y-y1)/double(x-x1));
    }
    pn(st.size()+ans);
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