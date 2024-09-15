#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
#define mod 1000000007
#define pll pair<ll,ll>
#define pii pair<int,int>
typedef long long int ll;

void solution(vector<ll>&v2){
    ll n,m=0;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(auto &i:v){
        m^=v2[i];
    }
    if(m==0){
        pn("Bob");
        return;
    }
    else{
        pn("Alice");
        return;
    }
    return;
}
void help(vector<ll>&v2){
    ll ans=0;
    int i=2,j=2;
    for(;i<v2.size();i++){
        if(v2[i]>=0)continue;
        else if(v2[i]<0){
            if(i%2==0 && i==2)ans=0;
            else if(i%3==0 && i==3)ans=2;
            else ans++;
            j=i;
            for(;;){
                if(v2[j]<0){
                    v2[j]=ans;
                    j+=i;
                }
                else if(v2[j]>=0){
                    j+=i;
                }
                else{
                    j+=i;
                }
                if(j>=v2.size()){
                    goto here;
                    break;
                }
            }
            goto here;
        }
        here:
    }
    return;
}
int main(){
    int _=1;
    cin>>_;
    vector<ll>v2(1e7+3,-10);
    for(int i=0;i<2;i++){
        v2[i]=i;
    }
    help(v2);
    while(_--){
        solution(v2);
    }
    return 0;
}