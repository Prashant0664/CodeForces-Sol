/*
       ___      _      ___     ____   _    _   ____     _____  
      |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
        | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
    |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
    |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

                  ____         _      __  __ 
                 |  _ \       / \    |  \/  |
                 | |_) |     / _ \   | \  / |
                 |  _ <     / ___ \  | |\/| |
                 |_|  \_\  /_/   \_\ |_|  |_|

*/
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

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    if(n==1){
        if(m>=10){
            cout<<"-1 -1\n";
        }
        else cout<<m<<" "<<m<<endl;
        return;
    }
    vector<int>v(n,0);
    int i=0;
    int x=0;
    int y=0;
    int m2=m;
    while(m!=0 && i<n){
        v[i]=min(9LL,m);
        i++;
        m-=min(m,9LL);
    }
    // debug(v);
    if(m==0)x=1;
    else x=0;
    vector<int>v2(n,0);
    m=m2;
    i=0;
    if(m>n*9){
        y=0;
        x=0;
    }
    else{
        v2[0]=1;
        m--;
        m=max(m,0LL);
        reverse(v2.begin(),v2.end());
        while(m!=0 && i<n){
            if(i==n-1){
                if(m<=8)v2[i]+=m;
                break;
            }
            v2[i]=min(9LL,m);
            i++;
            m-=min(m,9LL);
        }
        reverse(v2.begin(),v2.end());
        y=1;
    }
    // debug(v2);
    if(accumulate(v.begin(),v.end(),0)==0 || accumulate(v.begin(),v.end(),0)!=m2)x=0;
    if(accumulate(v2.begin(),v2.end(),0)==0 || accumulate(v2.begin(),v2.end(),0)!=m2)y=0;
    if(y){
        for(int i=0;i<n;i++)cout<<v2[i];
    }
    else cout<<-1;
    ps("");
    if(x){
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
        
    }
    else cout<<-1;
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