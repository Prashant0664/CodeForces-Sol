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
    // cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    n=s.length();
    vector<ll>v(n);
    int x=count(s.begin(),s.end(),'x');
    int y=count(s.begin(),s.end(),'y');
    if(x>y){
        for(int i=0;i<abs(x-y);i++){
            cout<<'x';
        }
    }
    else if(y>x){
        for(int i=0;i<abs(x-y);i++){
            cout<<'y';
        }
    }
    endo;
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