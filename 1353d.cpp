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

class Compare
{
public:
    bool operator() (pair<int,pair<int,int>>a, pair<int,pair<int,int>>b)
    {
        if(a.first==b.first){
            return a.second.first>b.second.first;
        }
        return a.first<b.first;
    }
};
class Compare2
{
public:
    bool operator() (pair<int,pair<int,int>>a, pair<int,pair<int,int>>b)
    {
        if(a.first==b.first){
            return a.second.first>b.second.first;
        }
        return a.first<b.first;
    }
};
void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n,0);
    int ele=1;
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,Compare>q;
    q.push({n,{0,n-1}});
    while(!q.empty()){
        auto p=q.top();
        q.pop();
        int l=p.second.first;
        int r=p.second.second;
        if(l>r){
            continue;
        }
        int mid=(l+r)/2;
        v[mid]=ele++;
        q.push({abs(l-mid+1),{l,mid-1}});
        q.push({abs(mid+1-r),{mid+1,r}});
    }
    printv(v);
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