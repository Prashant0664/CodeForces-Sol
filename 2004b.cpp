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
    ll n=-1,m=-1;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>v={a,b,c,d};
    sort(v.begin(),v.end());
    int x=v[0];
    int y=v[3];
     if(c>b || a>d){
        pn(1);
        return;
     }
     else if(a>c){
        swap(a,c);
        swap(b,d);
     }
    unordered_map<int,int>mp;
    int i=a;
    i=c;
    while(i!=d+1){
        mp[i]++;
        i++;
    }
    i=a;
    while(i!=b+1){
        mp[i]++;
        i++;
    }
    i=c;
    int ans=-1;
    for(int i=1;i<=1000;i++){
        if(mp[i]==2){
            ans++;
        }
        if(mp[i]==2 && n==-1){
            n=i;
        }
        if(mp[i]==2)m=i;
    }
    if(x<n){
        ans=ans+1;
    }
    if(y>m){
        ans=ans+1;
    }
    pn(ans);
    // return;

    if(b<=c || d<=a){
        // pn(1);
        return;
    }
    if(a==c && b==d){
        // pn(b-a);
        return;
    }
    if((a>c && b<d) || (a<c && b>d)){
        x=min(b-a,d-c)+1;
        // pn(x+1);
        return;
    }
    if(a==c){
        // pn(min(b,d)-a+1);
        return;
    }

    if(b==d){
        x=min(b-a,d-c);
        // cout<<x+1<<endl;
        return;
    }
    int low=max(a,c);
    int high=min(b,d);
    // cout<<high-low+1<<endl;
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