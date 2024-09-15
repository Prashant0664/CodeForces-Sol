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

bool check(vector<vector<int>>&v, int n, int x){
    for(int i=0;i<n;i++){
        if(i==x)continue;
        int c=0;
        for(int j=0;j<5;j++){
            if(v[x][j]<v[i][j]){
                c++;
            }
        }
        if(c<3)return 0;
    }
    return 1;
}

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<vector<int>>v(n,vector<int>(5,0));
    for(int i=0;i<n;i++){
        cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3]>>v[i][4];
    }
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++){
        int x=st.top();
        int c=0;
        int c2=0;
        for(int j=0;j<5;j++){
            if(v[x][j]<v[i][j]){
                c++;
            }
            else c2++;
        }
        if(c2>=3){
            st.pop();
            st.push(i);
        }
        else if(c>=3){

        }
        else{
            st.push(i);
        }
    }
    int x=st.top();
    st.pop();
    debug(st.size());
    while(!st.empty()){
        int i=st.top();
        st.pop();
        int c=0;
        int c2=0;
        for(int j=0;j<5;j++){
            if(v[x][j]<v[i][j]){
                c++;
            }
            else c2++;
        }
        if(c<3){
            pn(-1);
            return;
        }
    }
    if(!check(v,(int)n,x)){
        pn(-1);
        return;
    }
    pn(x+1);
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