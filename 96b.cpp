#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;
void help(string s,string t,int k,string &st,ll &ans){
    if(t.size()>(s.size()+k)){
        cout<<";";
        return;
    }
    if(t.length()==(s.length()+k)){
        ll a=stoll(t);
        ll b=stoll(s);
        if(a<b){
            return;
        }
        ll four=0,seven=0;
        for(int j=0;j<t.length();j++){
            if(t[j]=='4'){
                four++;
            }
            else if(t[j]=='7'){
                seven++;
            }
        }
        if(four!=seven){
            return;
        }
        if((a-b)<ans){
            st=t;
            ans=a-b;
        };
        return;
    }
    help(s,t+"4",k,st,ans);
    help(s,t+"7",k,st,ans);
}
void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    s=to_string(n);
    int four=0,seven=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'){
            four++;
        }
        else if(s[i]=='7'){
            seven++;
        }
    }
    if(four==seven && (four + seven)==s.size()){
        pn(s);
        return;
    }
    if(s.length()%2==1 ||  s[0]>='8'){
        // pn(s)
        for(int i=0;i<s.length();i++){
            if(i<=s.length()/2){
                cout<<4;
            }
            if(i>=s.length()/2){
                cout<<7;
            }
        }
        if(s.length()%2==0){
            cout<<7;
        }
        // cout<<"-";
        endo;
        return;
    }
    // cout<<"____";
    string st="<>";
    ll ans=LLONG_MAX;
    help(s,"",0,st,ans);
    help(s,"",1,st,ans);
    help(s,"",2,st,ans);
    pn(st);
    // pn(ans);
    // pn("======");

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