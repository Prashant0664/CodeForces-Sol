#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-' || s[(i+1)%n]=='-'){
            a++;
        } 
        // /----><>-<-><>--<>>
        if(s[i]=='<'){
            b++;
        }
        else if(s[i]=='>'){
            c++;
        }
    }
    if(c==0){
        cout<<n<<endl;
        return;
    }
    if(b==0){
        cout<<n<<endl;
        return;
    }
    if(a>0){
        cout<<a<<endl;
    }
    else{
        cout<<0<<endl;
    }
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