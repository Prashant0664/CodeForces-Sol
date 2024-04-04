#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    double d;
    cin>>d;
    if(d*d-4*d<0){
        pn("N");
        return;
    }
    double a=(d+sqrt(d*d-4*d))/2.0;
    // double b=(d-sqrt(d*d-4*d))/2;;
    double b=(d-sqrt(d*d-4*d))/2.0;
    if(b<0 || a<0){
        pn("N");
        return;
    }
    ps("Y");
    cout<<fixed<<setprecision(9)<<a<<' '<<b<<endl;
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