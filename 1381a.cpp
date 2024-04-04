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
    string t;
    cin>>t;
    cin>>s;
    vector<int>ans;
    ll o=0;
    string g=t;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            ans.push_back(i+1);
            ans.push_back(1);
            ans.push_back(i+1);
        }
    }
    // cout<<g<<endl;
    ps(ans.size());
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