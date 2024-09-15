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
    // cin>>m;
    string s;
    cin>>s;
    vector<int>v(n,0);
    int i=0;
    while(i<s.length()){
        v[i]=s[i]-'0';
        i++;
    }

    // printv(v)
    i=0;
    int j=0;
    ll sum=0,ans=0;
    unordered_map<int,int>mp;
    mp[0]++;
    while(j<n){
        sum+=v[j];
        ans+=mp[sum-j-1];
        mp[sum-j-1]++;
        j++;
    }
    for(auto x:mp){
        // ans+=max(0,x.second*(x.second-1)/2);
    }
    pn(ans);
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