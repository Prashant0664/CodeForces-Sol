#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

bool check(string s,char c){
    int n=s.length();
    vector<int>v;
    for(int i=0;i<n-1;){
        if(s[i]==c){
            i++;
        }
        else{
            if(s[i]=='W'){
                s[i]='B';
            }
            else s[i]='W';

            if(s[i+1]=='W'){
                s[i+1]='B';
            }
            else s[i+1]='W';
            v.push_back(i+1);
            if(s[i+1]==c)i+=2;
            else i++;
            // i+=1;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]!=c){
            return false;
        }
    }
    pn(v.size());
    printv(v);
    return 1;
}

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    if(check(s,'B')) {
        return;
    }
    if(check(s,'W')){
        return;
    }
    pn(-1);
    return;
    vector<ll>cw; // consecutove 'w' numbers in string s
    vector<ll>cb; // consecutove 'b' numbers in string s
    ll count=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='B'){
            count++;
        }else{
            if(count>0){
                cb.push_back(count);
            }
            count=0;
        }
    }
    if(count>0){
        cb.push_back(count);
    }
    count=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='W'){
            count++;
        }else{
            if(count>0){
                cw.push_back(count);
            }
            count=0;
        }
    }
    if(count>0){
        cw.push_back(count);
    }
    int f=0,ff=0;
    for(auto i:cb){
        if(i%2==1)f=1;
    }
    for(auto i:cw){
        if(i%2==1)ff=1;
    }
    if(f==1 && ff==1){
        pn(-1);
        return;
    }
    char swapc='W';
    if(f==1){
        swapc='W';
    }
    else{
        swapc='B';
    }
    // cout<<swapc;
    vector<int>ans;
    for(int i=0;i<n;){
        if(s[i]==swapc){
            ans.push_back(i+1);
            i+=2;
        }
        else{
            i++;
        }
    }
    pn(ans.size())
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