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
    // cin>>m;
    string s;
    cin>>s;
    int ans=INT_MAX;
    string an="";
    vector<string>v={"RGB","RBG","GRB","GBR","BRG","BGR"};
    for(int i=0;i<v.size();i++){
        int c=0;
        string t=s;
        for(int j=0;j<n;j++){
            if(t[j]!=v[i][j%3]){
                t[j]=v[i][j%3];
                c++;
            }
        }
        if(ans>c){
            ans=c;
            an=t;
        }
    }
    pn(ans);
    pn(an);
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