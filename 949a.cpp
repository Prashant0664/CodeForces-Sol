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
    // cin>>m;
    string s;
    cin>>s;
    n=s.length();
    set<int>o;
    set<int>z;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            z.insert(i);
        }else{
            o.insert(i);
        }
    }
    vector<vector<int>>ans;
    // while(!z.empty()){
    //     auto t=z.begin();
    //     cout<<*t<<endl;
    //     z.erase(t);
    // }
    // return;

    int c=0;
    while(1){
        auto t=z.begin();
        if(t==z.end()){
            break;
        }
        int ind=*t;
        ans.push_back({ind});
        z.erase(t);
        int f=1;
        while(1){
            if(f){
                auto tt=o.lower_bound(ind);
                if(tt==o.end()){
                    break;
                }
                ans.back().push_back(*tt);
                ind=*tt;
                // cout<<ind<<"- ";
                o.erase(tt);
            }
            else{
                auto tt=z.lower_bound(ind);
                if(tt==z.end()){
                    auto ine=ans.back().back();
                    o.insert(ine);
                    ans.back().pop_back();
                    break;
                }
                ans.back().push_back(*tt);
                ind=*tt;
                z.erase(tt);
            }
            f=!f;
        }
        // if(ans.back().back()==1){
        //     pn(-1);
        //     return;
        // }
        c+=ans.back().size();
        // pn("___");
        // debug(ans);
    }
    // pn(c);
    if(c!=n){
        pn(-1)
        return;
    }
    for(auto &i:ans){
        if(s[i.back()]=='1'){
            pn(-1);
            return;
        }
    }
    if(ans.size()==0){
        pn(-1);
        return;
    }
    else{
        pn(ans.size());
        for(auto &i:ans){
            cout<<i.size()<<" ";
            for(auto &j:i){
                ps(j+1);
            }
            endo;
        }
    }
    // debug(ans);
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