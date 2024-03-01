#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    int f=0;
    for(int i=0;i<n;i++){
        if(s[i]=='>'){
            m=i;
            break;
        }
    }
    ll lf=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='<'){
            lf=i;
            break;
        }
    }
    if(lf==0 || m==n-1){
        cout<<n<<endl;
        return;
    }
    // cout<<m<<" "<<lf;
    ll ans=m+n-lf-1;
    cout<<ans<<endl;
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