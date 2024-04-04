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
    m=10;
    string s;
    cin>>s;
    vector<ll>v(m+1);
    for(int i=1;i<=9;i++){
        cin>>v[i];
    }
    int st=0;
    for(int i=0;i<n;i++){
        if(st==0 && (int)(s[i]-'0')<v[(int)(s[i]-'0')]){
            st=1;
            s[i]=(char)(v[(int)(s[i]-'0')]+'0');
        }
        else if(st==1 && (int)(s[i]-'0')<=v[(int)(s[i]-'0')]){
            st=1;
            s[i]=(char)(v[(int)(s[i]-'0')]+'0');
        }
        else if(st==1){
            st=2;
        }
        // cout<<s<<endl;
    }
    pn(s);
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