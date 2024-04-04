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
    cin>>n;
    vector<ll>v={n};
    if(n%2==1){
        v.push_back(n-1);
        n--;
    }
    ll m=n;
    int c=0;
    while(m){
        if(m%2==1){
            c++;
        }
        m>>=1;
    }
    c--;
    int i=0;
    while(c){
        if((n>>i)&1){
            n-=(1<<i);
            v.push_back(n);
            c--;
        }
        i++;
    }
    while(n!=1){
        n/=2;
        v.push_back(n);
    }
    pn(v.size());
    printv(v);
    // pn(n);
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