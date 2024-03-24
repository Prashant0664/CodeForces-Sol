#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n;
    // cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    int hr = stoi(s.substr(0,2));
    hr=hr%12;
    int min = stoi(s.substr(3,2));
    float h=float(hr)*30+(float)min*0.5;
    float m=float(min)*6;
    cout<<h<<" "<<m<<endl;
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