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
#define pn(x) cout<<x;
#define ps(x) cout<<x<<endl;
#define endo cout<<endl;
#define printv(v) for(auto x:v){cout<<x<<" ";}
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
    vector<ll>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int f=0;
    vector<int>v1,v2;
    int x=-1,y=-1;
    int g=0;
    for(auto &[i,j]:mp){
        if(j%2==0 && j>3){
            if(g==0){
                x=i,y=f;
                g=1;
                continue;
            }
            int k=j/2;
            while(k--)v1.push_back(i);
            k=j/2;
            while(k--)v2.push_back(i);
        }
        else if(j%2==0){
            int k=j/2;
            while(k--)v1.push_back(i);
            k=j/2;
            while(k--)v2.push_back(i);
        }
        else{
            int k=j;
            while(k--){
                if(f)v1.push_back(i);
                else v2.push_back(i);
                f=!f;
            }
        }
    }
    string s(n,' ');
    if(f==0){
        for(int i=0;i<y;i++){
            v1.push_back(x);
        }
        ps("YES");
        debug(v1);
        debug(v2);
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[j]==v1[i]){
                    s[j]='A';
                    v[j]=-1;
                    break;
                }
            }
        }

        for(int i=0;i<v2.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[j]==v2[i]){
                    s[j]='B';
                    v[j]=-1;
                    break;
                }
            }
        }
        ps(s);
    }
    else{
        if(g==0){
            ps("NO");
            return;
        }
        for(int i=0;i<y-1;i++){
            v1.push_back(x);
        }
        v2.push_back(x);

        ps("YES");
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[j]==v1[i]){
                    s[j]='A';
                    v[j]=-1;
                    break;
                }
            }
        }

        for(int i=0;i<v2.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[j]==v2[i]){
                    s[j]='B';
                    v[j]=-1;
                    break;
                }
            }
        }
        ps(s);
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