#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    map<string,int>mp;
    int f=0,ff=0,fff=0;
    for(int i=0;i<n;i++){
        string s;
        int c;
        cin>>c>>s;
        sort(s.begin(),s.end());
        if(mp[s]){
            mp[s]=min(mp[s],c);
        }
        else{
            mp[s]=c;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='A')f=1;
            if(s[i]=='B')ff=1;
            if(s[i]=='C')fff=1;
        }
    }
    if(f==0 || ff==0 || fff==0){
        pn(-1);
        return;
    }
    int ans=INT_MAX;
    if(mp["ABC"]){
        ans=mp["ABC"];
    }
    if(mp["A"] && mp["B"] && mp["C"]){
        ans=min(ans,mp["A"]+mp["B"]+mp["C"]);
    }
    if(mp["A"] && mp["BC"]){
        ans=min(ans,mp["A"]+mp["BC"]);
    }
    if(mp["B"] && mp["AC"]){
        ans=min(ans,mp["B"]+mp["AC"]);
    }
    if(mp["C"] && mp["AB"]){
        ans=min(ans,mp["C"]+mp["AB"]);
    }
    if(mp["AB"] && mp["AC"]){
        ans=min(ans,mp["AB"]+mp["AC"]);
    }
    if(mp["AB"] && mp["BC"]){
        ans=min(ans,mp["AB"]+mp["BC"]);
    }
    if(mp["AC"] && mp["BC"]){
        ans=min(ans,mp["AC"]+mp["BC"]);
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