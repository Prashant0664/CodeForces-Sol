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
    vector<ll>v(n);
    vector<ll>red;
    vector<ll>blue;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            red.push_back(v[i]);
        }
        else{
            blue.push_back(v[i]);
        }
    }
    sort(red.begin(),red.end(),greater<ll>());
    sort(blue.begin(),blue.end());
    vector<int>ans;
    ll prev=n+1;
    for(auto &i:red){
        if((prev-i)<=0){
            pn("NO");
            return;
        }
        else{
            ans.push_back(prev-1);
            prev--;
        }
    }
    prev=1;
    for(auto &i:blue){
        if((-prev+i)<0){
            pn("NO");
            return;
        }
        else{
            ans.push_back(prev);
            prev=prev+1;
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
        if(ans[i]!=(i+1)){
            pn("NO");
            return;
        }
    }
    pn("YES");
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