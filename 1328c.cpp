#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define pns(x) cout<<x<<" ";
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    int f=1;
    string a="",b="";
    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            if(f==1){
                a+="1";
                b+="1";
            }
            else{
                a+="0";
                b+="2";
            }
        }
        else if(s[i]=='0'){
            a+="0";
            b+="0";
        }
        else{
            if(f==1){
                a+="1";
                b+="0";
                f=0;
            }
            else{
                a+="0";
                b+="1";
            }
        }
    }
    cout<<a<<"\n"<<b<<endl;
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