#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    int even=0,odd=0,one=0;
    for(int i=0;i<n;i++){
        if(i<n-1 && s[i]=='1' && s[i+1]=='1'){
            cout<<"NO"<<endl;
            return;
        }
        if(s[i]=='1'){
            one++;
        }
        if(i%2==0){
            even++;
        }else{
            odd++;
        }
    }
    for(int i=1;i<n-1;i++){
        if(s[i]=='0' && s[i-1]=='0' && s[i+1]=='0'){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(n>1 && s[0]=='0' && s[1]=='0'){
        cout<<"NO"<<endl;
        return;
    }
    if(n>1 && s[n-1]=='0' && s[n-2]=='0'){
        cout<<"NO"<<endl;
        return;
    }
    if(one==0){
        cout<<"NO"<<endl;
        return;
    
    }
    pn("YES");
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