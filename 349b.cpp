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
    // cin>>n;
    n=10;
    cin>>m;
    // string s;
    // cin>>s;
    vector<pii>v(n);

    map<int,int>mp;
    int s=0;
    for(int i=1;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
        s++;
        mp[i]=v[i].first;
    }
    string ans="";
    sort(v.begin()+1,v.end(),[&](pii a,pii b){
        if(a.first==b.first){
            return a.second>b.second?1:0;
        }
        return a.first<b.first?1:0;
    });
    // debug(v);
    while(m>0){
        if(v[1].first<=m){
            ans+=to_string(v[1].second);
            m-=v[1].first;
        }
        else{
            break;
        }
    }
    if(ans.length()==0){
        pn(-1);
        return;
    }
    // debug(m);
    // pn(ans);
    // pn(m);
    for(int i=0;i<ans.length();i++){
        for(int j=9;j>0;j--){
            if((ans[i]-'0')>=j){
                break;
            }
            int x=j;
            int a=mp[j];
            m+=mp[ans[i]-'0'];
            if(a<=m){
                m-=a;
                ans[i]=x+'0';
                break;
            }
            m-=mp[ans[i]-'0'];
            // if(mp[ans[i]-'0'])
        }
        // pn(ans);
        // pn(m);
    }
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