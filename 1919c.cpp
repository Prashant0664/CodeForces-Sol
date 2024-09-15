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
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a=INT_MAX,b=INT_MAX;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(v[i]<a && v[i]<b){
            if(a==b){
                a=v[i];
            }
            else{
                if(a<b){
                    a=v[i];
                }
                else{
                    b=v[i];
                }
            
            }
        }
        else if(v[i]>a && v[i]>b){
            ans++;
            if(a<b){
                swap(a,b);
            }
            b=v[i];
        }
        else{
            if(v[i]>a){
                b=v[i];
            }
            else{
                a=v[i];
            }
        }
    }
    pn(ans);
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