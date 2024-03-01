#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,k;
    cin>>n>>k;
    string s;
    ll a,b;
    a=b=0;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A')a++;
        else b++;
    }
    if(b==k){
        cout<<0<<endl;
        return;
    }
    else if(b<k){
        cout<<1<<endl;
        int i=0;
        k-=b;
        for(i;i<n;i++){
            if(s[i]=='B'){
                continue;
            }
            else{
                k--;
            }
            if(k==0)break;
        }
        cout<<i+1<<" "<<"B\n";
    }
    else{
        cout<<1<<endl;
        int i=0;
        // b>k
        b-=k;
        for(i;i<n;i++){
            if(s[i]=='A'){
                continue;
            }
            else{
                b--;
            }
            if(b==0){
                break;
            }
        }
        cout<<i+1<<" "<<"A\n";
    }
    
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solution();
    }
}