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
    int c=0;
    vector<int>v;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            c++;
            v.push_back(i);
            if(v.size()==2){
                if(n%(n/(v[0]*v[1]))!=0 || v[0]==(n/(v[0]*v[1])) || v[1]==(n/(v[0]*v[1]))){
                    v.pop_back();
                }
                else{
                    pn("YES");
                    ps(v[0]);ps(v[1]);pn(n/(v[0]*v[1]));
                    return;
                }
            }
        }
    }
    if(c>2){
        cout<<"YES"<<endl;
        cout<<v[0]<<' '<<v[1]<<' '<<n/(v[0]*v[1])<<endl;
    }
    else {
        pn("NO");
    }
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