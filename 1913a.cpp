#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,k;
    string s;
    cin>>s;
    n=s.length();
    if(s[0]=='0' || s.length()==0){
        cout<<-1<<endl;
        return;
    }
    string a="",b="";
    for(int i=0;i<n;i++){
        if(i==0){
            a+=s[i];
            continue;
        }
        if(b=="" && s[i]=='0'){
            a+=s[i];
        }
        else{
            b+=s[i];
        }
    }
    if(b.length()<a.length()){
        cout<<-1<<endl;
        return ;
    }
    ll d=stoi(a);
    ll e=stoi(b);
    if(e>d){
        cout<<a<<" "<<b<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return;

    return;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
}