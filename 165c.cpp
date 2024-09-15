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

void print(int x) {cout << x;}
void print(long x) {cout << x;}
void print(long long x) {cout << x;}
void print(unsigned x) {cout << x;}
void print(unsigned long x) {cout << x;}
void print(unsigned long long x) {cout << x;}
void print(float x) {cout << x;}
void print(double x) {cout << x;}
void print(long double x) {cout << x;}
void print(char x) {cout << '\'' << x << '\'';}
void print(const char *x) {cout << '\"' << x << '\"';}
void print(const string &x) {cout << '\"' << x << '\"';}
void print(bool x) {cout << (x ? "true" : "false");}

template<typename T, typename V>
void print(const pair<T, V> &x) {print(x.first); cout << ', '; print(x.second); ;}
template<typename T>
void print(const T &x) {int f = 0; for (auto &i: x) cout << (f++ ? ", " : ""), print(i);}
void _print() {cout << "\n";}
template <typename T, typename... V>
void _print(T t, V... v) {print(t); if (sizeof...(v)) cout << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define printm(x...)  _print(x)
#else
#define printm(x...) _print(x)
#endif

void help(string &s){
    vector<int>v;
    int c=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;
        }
        else{
            if(c!=0){
                v.push_back(c+1);
                c=0;
            }
        }
    }
    if(c!=0){
        v.push_back(c+1);
        c=0;
    }
}

void solution(){
    ll n,m,k;
    cin>>k;
    // cin>>m;
    string s;
    cin>>s;
    if(k>count(s.begin(),s.end(),'1')){
        pn(0);
        return;
    }
    n=s.length();
    vector<int>v;
    if(s[0]=='1'){
        v.push_back(1);
    }

    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;
        }
        else{
            if(c!=0){
                v.push_back(c+1);
                c=0;
            }
        }
    }
    if(c!=0){
        v.push_back(c+1);
        c=0;
    }
    if(s[n-1]=='1'){
        v.push_back(1);
    }
    printm(v);
    // pn(6);
    // return;
    // 12342
    int i=0,j=0;
    while(j<k){
        j++;
    }
    ll ans=0;
    ans+=v[j]*v[i];
    // cout<<j<<" "<<v.size()<<endl;
    j++;
    i++;
    while(j<n){
        ans+=v[j]*v[i];
        i++;
        j++;
    }
    set<int>st;
    st.insert(24444);
    printm(st);
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