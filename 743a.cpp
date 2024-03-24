#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    m--;
    k--;
    // cin>>m;
    string s;
    cin>>s;
    if(s[m]==s[k]){
        pn(0);
        return;
    }
    pn(1);
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