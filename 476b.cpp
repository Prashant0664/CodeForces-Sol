#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;
ll dfs(ll m, ll p, ll su){
    if(m==0 && p==0 && su==0){
        return 0;
    }
    else{
        if(m==0 && (p!=0 || su!=0)){
            return 1;
        }
    }
    int a=dfs(m-1,p-1,su);
    int b=dfs(m-1,p,su-1);
    return a+b;
}
ll dfs2(ll m, ll p, ll su){
    if(m==0 && p==0 && su==0){
        return 1;
    }
    else{
        if(m==0 && (p!=0 || su!=0)){
            return 0;
        }
    }
    int a=dfs2(m-1,p-1,su);
    int b=dfs2(m-1,p,su-1);
    return a+b;
}
void solution(){
    ll n;
    // cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    string t;
    cin>>t;
    n=s.length();
    ll m=0;
    ll p=0,su=0;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            p++;
        }
        else if(s[i]=='-'){
            su--;
        }
        if(t[i]=='-'){
            su++;
        }
        else if(t[i]=='+'){
            p--;
        }
        else{
            m++;
        }
    }
    if(p<0 || su>0){
        pn("0.000000000000")
        return;
    }
    if(p==0 && su==0){
        pn("1.000000000000");
        return;
    }
    ll n2=dfs(m,abs(p),abs(su));
    ll n3=dfs2(m,abs(p),abs(su));
    ll k=pow(2,m);
    float ans=float(n3)/(float(k));
    // cout<<n2<<" "<<n3<<"\n";
    // pn(ans);
    printf("%.12f\n",ans);
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