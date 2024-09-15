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


ll solution(ll n){
    // ll n,m;
    ll m=0;
    // cin>>n;
    ll ans=0;
    ll ans2=0;
    ll st=1,en=2;
    while(1){
        ans2++;
        ll en2=en;
        en=st+en;
        st=en2;
        if(en>n)break;
    }
    return ans2;
    while(1){
        while(n>0){
            if(n%2 && n!=1){
                m++;
            }
            ans++;
            n/=2;
        }
        if(n==0 && m==0)break;
        n=m;
        m=0;
    }
    if(abs(ans-ans2)>=2){
        // return -10;
    }
    cout<<ans<<" ";
    return ans-ans2;
}
int main(){
    int _=1;
    // cin>>_;
    // cout<<solution(7LL);
    // return 0;
    while(_--){
        ll a=0,b=0;
        ll y;
        cin>>y;
        // for(ll i=0;i<1e5;i++){
            ll g=solution(y);
            cout<<g<<endl;
            return 0;
        //     if(g==-10){
        //         cout<<i<<" \n";
        //         return 0;
        //         break; 
        //     }
        //     if(g<0)a++;
        //     else if(g>0)b++;
        // }
        // cout<<a<<" "<<b<<endl;
    }
    return 0;
}

// 10,00,00,00,00,00,00,00,000