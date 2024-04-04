#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

string ans1="",ans2="";

bool check(string &x,ll a,ll b, int i,string y,string z,vector<vector<vector<int>>> &dp){
    if(i==x.length() && a==0 && b==0){
        ans1=y;
        ans2=z;
        return 1;
    }
    if(ans1!="" || ans2!=""){
        return 1;
    }
    if(a<0 || b<0){
        return 0;
    }
    if(dp[i][a][b]!=-1){
        return dp[i][a][b];
    }
    if(i==x.length()){
        return 0;
    }
    if(x[i]=='1'){
        int a=check(x,a-1,b,i+1,y+"1",z+"0",dp);
        int b=check(x,a,b-1,i+1,y+"0",z+"1",dp);
        return dp[i][a][b]=max(a,b);
    }
    else if(x[i]=='0'){
        int a=check(x,a,b,i+1,y+"0",z+"0",dp);
        int b=check(x,a-1,b-1,i+1,y+"1",z+"1",dp);
        return dp[i][a][b]= max(a,b);
    }
    return 0;
}
bool check(string &x,ll a,ll b, int i,string y,string z){
    if(i==x.length() && a==0 && b==0){
        ans1=y;
        ans2=z;
        return 1;
    }
    if(ans1!="" || ans2!=""){
        return 1;
    }
    if(i==x.length()){
        return 0;
    }
    if(a<0 || b<0){
        return 0;
    }
    if(x[i]=='1'){
        int a=check(x,a-1,b,i+1,y+"1",z+"0");
        int b=check(x,a,b-1,i+1,y+"0",z+"1");
        return max(a,b);
    }
    else if(x[i]=='0'){
        int a=check(x,a,b,i+1,y+"0",z+"0");
        int b=check(x,a-1,b-1,i+1,y+"1",z+"1");
        return  max(a,b);
    }
    return 0;
}

void solution(){
    ll a,b,s;

    cin>>a>>b>>s;
    ll aa=a,bb=b,ss=s;
    int c1=0,c2=0,c3=0;
    string x="",y="",z="";
    while(s){
        if((s%2==1)){
            z+="1";
            c3++;
        }
        else z+="0";
        s>>=1;
        // cout<<s<<endl;
    }

    while(a){
        if((a%2==1)){
            c1++;
            x+="1";
        }
        else{
            x+="0";
        }
        a>>=1;
    }

    while(b){
        if((b%2==1)){
            c2++;
            y+="1";
        }
        else{
            y+="0";
        }
        b>>=1;
    }
    // cout<<z<<endl;
    int maxi=max({x.length(),y.length(),z.length()});
    while(x.length()<maxi){
        x+='0';
    }
    while(y.length()<maxi){
        y+='0';
    }
    while(z.length()<maxi){
        z+='0';
    }
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    reverse(z.begin(),z.end());
    cout<<z.length()<<endl;
    cout<<x<<endl;
    pn(y)
    pn(z);
    vector<vector<vector<int>>>dp(z.length()+2,vector<vector<int>>(c1+1,vector<int>(c2+1,-1)));
    if(check(z,aa,bb,0,"","",dp)){
        cout<<"Yes\n";
        cout<<ans1<<" "<<ans2<<endl;
    }
        else{
            cout<<"No";
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