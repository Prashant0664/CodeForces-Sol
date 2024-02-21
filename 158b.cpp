#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    int a=0,b=0,c=0,d=0;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==1){
            a++;
        }
        else if(x==2){
            b++;
        }
        else if(x==3){
            c++;
        }
        else{
            d++;
        }
    }
    ll ans=0;
    ans+=d;
    ans+=c;
    if(c>=a){
        a=0;
    }
    else{
        a-=c;
    }
    c=0,d=0;
    if(b%2==0){
        ans+=b/2;
        b=0;
    }
    else{
        ans+=b/2;
        b=1;
    }
    if(a>=0 && b>0){
        ans+=1;
        a-=2;
        b--;
    }
    if(a>0){
        ans+=a/4;
        if(a%4!=0){
            ans++;
        }
    }
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