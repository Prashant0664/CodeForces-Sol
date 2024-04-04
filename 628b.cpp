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
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        if(i>=1){string t=s.substr(i-1,2);
        int y=stoi(t);
        if(y%4==0){
            ans+=(i);
        }
        }
        if(s[i]=='4' || s[i]=='8' || s[i]=='0')ans++;
        // cout<<ans<<" ";
    }
    // endo;
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