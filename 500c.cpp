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

ll help(stack<int>&st, vector<ll>&v2, vector<ll>&v, ll &n, ll &m){
    stack<int>st2;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x=v[i];
        while(st.top()!=x){
            st2.push(st.top());
            st.pop();
            ans+=v2[st2.top()-1];
        }
        st.pop();
        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        st.push(x);
    }
    return ans;
}
void solution(){
    ll n,m;
    cin>>m>>n;
    vector<ll> v2(m),v(n);
    for(ll i=0;i<m;i++){
        cin>>v2[i];
    }
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    stack<int>st;
    set<int>s;
    vector<int>v3;
    for(int i=0;i<n;i++){
        if(s.find(v[i])==s.end()){
            v3.push_back(v[i]);
            s.insert(v[i]);
        }
    }
    // debug(v3);
    for(int i=v3.size()-1;i>=0;i--){
        st.push(v3[i]);
    }
    // return;
    ll ans=help(st,v2,v,n,m);
    pn(ans);

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