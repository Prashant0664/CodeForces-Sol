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
    vector<ll> a(n-1);
    vector<ll> b(n);
    map<int,vector<int>>mp;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        mp[a[i]-1].push_back(i+1);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        b[i]--;
    }
    set<int>st;
    for(int i=0;i<n-1;i++){
        if(i==0 && b[i]!=0)st.insert(0);
        if(mp.find(b[i])!=mp.end()){
            if((mp[b[i]][0]==b[i+1] || mp[b[i]][1]==b[i+1])){
                continue;
            }
            st.insert(i);
        }
        else{

        }
    }
    if(mp.find(b[n-1])!=mp.end())st.insert(n-1);
    debug(st);
    while(m--){
        ll x,y;
        cin>>x>>y;
        x--,y--;
        swap(b[x],b[y]);
        int f=0;
        if(mp.find(b[x])!=mp.end()){
            if(x+1>=n){
                f=1;
            }
            if(f==0 && (mp[b[x]][0]==b[x+1] || mp[b[x]][1]==b[x+1])){
                if(st.find(x)!=st.end()){
                    st.erase(x);
                }
            }
            else{
                f=1;
            }
        }
        if(x>0){
            if(mp.find(b[x-1])!=mp.end()){
                if((mp[b[x-1]][0]==b[x] || mp[b[x-1]][1]==b[x])){
                    if(st.find(x-1)!=st.end()){
                        st.erase(x-1);
                    }
                }
            }
            else{
                st.insert(x-1);
            }
        }
        if(mp.find(b[0])==mp.end()){
            st.insert(0);
        }
        int f2=0;
        
        if(mp.find(b[y])!=mp.end()){
            if(y+1>=n){
                f2=1;
            }
            if(f2==0 && (mp[b[y]][0]==b[y+1] || mp[b[y]][1]==b[y+1])){
                if(st.find(y)!=st.end()){
                    st.erase(y);
                }
            }
            else{
                f2=1;
            }
        }
        if(y>0){
            if(mp.find(b[y-1])!=mp.end()){
                if((mp[b[y-1]][0]==b[y] || mp[b[y-1]][1]==b[y])){
                    if(st.find(y-1)!=st.end()){
                        st.erase(y-1);
                    }
                }
            }
            else{
                st.insert(y-1);
            }
        }
        if(f){
            st.insert(x);
        }
        if(f2){
            st.insert(y);
        }
        if(st.size()==0){
            pn("YES");
        }
        else{
            pn("NO");
        }
        debug(st);
    }
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