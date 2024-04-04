#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;
vector<ll>v2;
void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int c=0;
    for(int i=0;i<n;i++){
        int f=0;
        ll g=0;
        for(int j=0;j<v2.size();j++){
            ll x=v2[j]-v[i];
            if(x==v[i]){
                if(mp[v[i]]>1){
                    f=1;
                    g=x;
                // cout<<g<<"<";
                }
            }
            else if(mp[x]>0){
                f=1;
                g=x;
                // cout<<g<<">";
            }
        }
        if(f==0){
            c++;
        }
    }
    // endo;
    pn(c);
    return;
}
int main(){
    int _=1;
    for(int i=0;i<=30;i++){
        v2.push_back(pow(2,i));
    }
    for(auto &i:v2){
        // cout<<i<<' ';
    }
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}
// 4
// 6
// 4 7 1 5 4 9
// 5
// 1 2 3 4 5
// 1
// 16
// 4
// 1 1 1 1023
