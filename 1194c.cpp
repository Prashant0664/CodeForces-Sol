#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    string s,t,p;
    cin>>s>>t>>p;
    int n=s.length();
    int m=t.length();
    int k=p.length();
    map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[p[i]]++;
    }
    map<int,int>mp2;
    for(int i=0;i<m;i++){
        mp2[t[i]]++;
    }
    for(int i=0;i<n;i++){
        mp2[s[i]]--;
    }
    for(auto x:mp2){
        if(x.second<0){
            pn("NO");
            return;
        }
    }
    for(auto &[a,b]:mp2){
        if(mp[a]<b){
            pn("NO");
            return;
        }
    }
    int j=0;
    for(int i=0;i<m;i++){
        if(s[j]==t[i]){
            j++;
        }
        if(j==n){
            break;
        }
    }
    if(j<n){
        pn("NO");
        return;
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