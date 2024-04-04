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
    cin>>s;
    string t;
    cin>>t;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(i<n-1 && s[i]!=s[i+1] && s[i+1]!=t[i+1]){
                ans++;
                i++;
            }
            else{
                ans++;
            }
        }
    }
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