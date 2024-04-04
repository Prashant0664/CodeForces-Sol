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
    cin>>m;
    ll k;
    cin>>k;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        v[i]--;
        ll h=(v[i]%(m+k));
        // h--;
        // if(v[i]>=(m+k)){
            // h++;
        // }
        cout<<v[i]<<" "<<h<<" : ";
        if(h<m){

        }
        else{
            cout<<"No"<<endl;
            // return;
        }
        cout<<endl;
    }
    // for(int i= 
    cout<<"Yes";
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