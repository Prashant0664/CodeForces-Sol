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
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(i+1);
    }
    vector<int>v2(n,0);
    ll psum=0,ssum=0;
    for(int i=0;i<n-1;i++){
        psum+=v[i];
        auto t=st.begin();
        if(*t+ssum==psum){
            t++;
            v2[i]=*t;
            ssum+=*t;
            st.erase(t);
        }
        else{
            v2[i]=*t;
            ssum+=*t;
            st.erase(t);
        }
        // v2[i]=(v[i])%n+1;
        // v2[i]=n-v[i]+1;
    }
    v2[n-1]=*st.begin();
    ll c=0;
    // 6 2 1 4 7 3 5
    // 5
// 1 2 3 4 5
//  3 5 4 2 1
    vector<int>v3={3,5,4,2,1};
    // vector<int>v3={6,2,1,4,7,3,5};
    for(int i=0;i<n;i++){
        ll sum1=0,sum2=0;
        for(int l=i;l<n;l++){
            for(int j=i;j<=l;j++){
                sum1+=abs(v[j]);
                sum2+=abs(v2[j]);
            }
            if(sum1==sum2){
                c++;
            }
        }
    }
    // printv(v2);
    // debug(v3);
    debug(v2);
    pn(c);
    // pn
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