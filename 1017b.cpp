#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string t;
    cin>>t;
    long long int a=0,b=0,c=0,d=0;
    /*
        00
        01
        10
        11
    */
    for(int i=0;i<n;i++){
        if(s[i]=='0' && t[i]=='0'){
            a++;
        }else if(s[i]=='0' && t[i]=='1'){
            b++;
        }else if(s[i]=='1' && t[i]=='0'){
            c++;
        }else{
            d++;
        }
    }
    ll ans=0;
    ans+=a*c;
    // pn(ans);
    ans+=d*a;
    ans+=b*c;
    // pn(ans);
    // pn(ans);
    // ans+=d*b;
    pn(ans);
    // pn("__");
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