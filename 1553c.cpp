#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    // cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    n=s.length();
    ll ans=10;
    ll p=0,q=0;
    for(int i=0;i<10;i++){
        if(i%2==0 && s[i]=='1'){
            p++;
        }
        else if(i%2==1 && s[i]=='1'){
            q++;
        }
    }
    ll pp=0;
    ll qq=0;
    for(int i=0;i<10;i++){
        if(i%2==0 && (s[i]=='1' || s[i]=='?')){
            pp++;
            if(s[i]=='1'){
                p--;
            }
        }
        else if(i%2==1 && (s[i]=='1' || s[i]=='?')){
            qq++;
            if(s[i]=='1'){
                q--;
            }
        }
        if(((pp+p)>(5)) || ((qq+q)>(5))){
            ans=i+1;
            pn(ans);
            return;
        }
    }
    pn(10);
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