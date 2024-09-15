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

void help1(vector<ll>&v, ll n){
    // reverse(v.begin(),v.end());
    vector<int>ans(n,-1);
    set<ll>st;
    set<int>st2;
    for(int i=n-1;i>=0;i--){
        if(st.find(v[i])==st.end()){
            st.insert(v[i]);
            ans[i]=v[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            st2.insert(i);
        }
    }
    debug(st2);
    pn(st.size());
    int last=-1;
    for(int i=n-1;i>=0;i--){
        if(ans[i]==-1){
            int h=*st2.begin();
            if(h!=i+1){
                last=i;
                st2.erase(h);
                ans[i]=h;
            }
            else{
                if(st2.size()==1){
                    st2.erase(h);
                    ans[i]=h;
                    if(last==-1){
                        pn(-1);
                        return;
                    }
                    swap(ans[i],ans[last]);
                }
                else{
                    st2.erase(h);
                    int g=*st2.begin();
                    st2.erase(g);
                    ans[i]=g;
                    st2.insert(h);
                }
            }
        }
    }
    printv(ans);
}
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
    vector<int>ans(n,-1);
    set<ll>st;
    set<int>st2;
    for(int i=0;i<n;i++){
        if(st.find(v[i])==st.end()){
            st.insert(v[i]);
            ans[i]=v[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            st2.insert(i);
        }
    }
    debug(st2);
    int last=-1;
    for(int i=0;i<n;i++){
        if(ans[i]==-1){
            int h=*st2.begin();
            if(h!=i+1){
                last=i;
                st2.erase(h);
                ans[i]=h;
            }
            else{
                if(st2.size()==1){
                    st2.erase(h);
                    ans[i]=h;
                    if(last==-1){
                        help1(v,n);
                        return;
                    }
                    swap(ans[i],ans[last]);
                }
                else{
                    st2.erase(h);
                    int g=*st2.begin();
                    st2.erase(g);
                    ans[i]=g;
                    st2.insert(h);
                }
            }
        }
    }
    pn(st.size());
    printv(ans);
    // debug(ans);
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