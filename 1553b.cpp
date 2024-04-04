#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

bool help(string &s,string &t,int i,int j,int dir,vector<vector<vector<int>>> & v){
    if(j==t.length()){
        return 1;
    }
    if(i==s.length() || i<0){
        return 0;
    }
    if(s[i]!=t[j]){
        return 0;
    }
    if(v[i][j][dir]!=-1){
        return v[i][j][dir];
    }
    bool a=0;
    if(dir==1){
        if((i)<(t.length()-j-1))return 0;
        for(int k=i;k>=0;k--){
            if(i==0 || j==t.length()-1){
                return 1;
            }
            if(s[i]!=t[j]){
                return 0;
            }
            else{
                i--;
                j++;
            }
        }
        return 0;
        a=help(s,t,i-1,j+1,1,v);
    }
    else if(dir==0){
        a|=help(s,t,i-1,j+1,1,v);
        a|=help(s,t,i+1,j+1,0,v);
    }
    return v[i][j][dir]=a;
}

bool help(string &s,string &t,int i,int j,int dir){
    if(j==t.length()){
        return 1;
    }
    if(i==s.length() || i<0){
        return 0;
    }
    if(s[i]!=t[j]){
        return 0;
    }
    
    bool a=0;
    if(dir==1){
        a=help(s,t,i-1,j+1,1);
        // a=help(s,t,i-1,j+1,2);
    }
    if(dir==0){
        a|=help(s,t,i+1,j+1,1);
        a|=help(s,t,i+1,j+1,0);
    }
    return a;
}
void solution(){
    ll n,m;
    // cin>>n;
    // cin>>m;
    string s,t;
    cin>>s;
    cin>>t;
    n=s.length();
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        // if(s[i]==t[0])cout<<"<";
        vector<vector<vector<int>>>v(n+1,vector<vector<int>>(t.length()+1,vector<int>(3,-1)));
        if(s[i]==t[0] && (help(s,t,i,0,0,v))){
            // cout<<"-";
            pn("YES")
            return;
        }
    }
    pn("NO")
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