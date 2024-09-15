#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    if(n==4){
        pn("3 1 4 2")
        return;
    }
    if(n<=3){
        pn(-1);
        return;
    }
    vector<ll>v;
    int i=1;
    while(i<=n){
        v.push_back(i);
        i+=2;
    }
    if(i==n+1){
        i--;
    }
    else{
        i-=3;
    }
    ll j=v.size();
    while(i>=1){
        v.push_back(i);
        i-=2;
    }
    if(n%2==0){
        swap(v[j],v[j+2]);
        swap(v[j+1],v[j+2]);
    }
    else{
        swap(v[j],v[j+1]);
    }
    // for(int i=0;i<n-1;i++){
    //     if(abs(v[i]-v[i+1])<2 || abs(v[i]-v[i+1])>4){
    //         pn(n);
    //         return;
    //     }
    // }
    printv(v);

    // while(i<=n){

    // }
    // 1 3 5 7 9 6 10 8 4 2
    // 10 8 6 4 2

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