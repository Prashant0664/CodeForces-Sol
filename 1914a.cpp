#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    vector<int>v(1000,0);
    vector<int>vis(1000,0);
    for(int i=0;i<n;i++){
        v[s[i]-'A']++;
        if(v[s[i]-'A']>=int(s[i]-'A')+1){
            vis[s[i]-'A']=1;
        }
    }
    for(auto i:vis){
        if(i>0){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
}