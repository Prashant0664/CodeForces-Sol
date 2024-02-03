#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==2){
        ll q;
        cin>>q;
        while(q--){
            ll a,b;
            cin>>a>>b;
            cout<<1<<"\n";
        }
        return;
    }
    vector<ll>r(n,0);
    vector<ll>l(n,0);
    for(int i=1;i<n-1;i++){
        if(abs(v[i]-v[i+1])>abs(v[i]-v[i-1])){
            l[i]=1;
            r[i]=abs(v[i]-v[i+1]);
        }
        else{
            l[i]=abs(v[i]-v[i-1]);
            r[i]=1;
        }
    }
    l[n-1]=1;
    r[0]=1;
    for(int i=1;i<n;i++){
        r[i]=r[i-1]+r[i];
    }
    for(int i=n-1;i>=0;i--){
        l[i]=l[i+1]+l[i];
    }
    ll q;
    cin>>q;
    r.push_back(0);
    l.push_back(0);
    sort(r.begin(),r.end());
    while(q--){
        ll a,b;
        cin>>a>>b;
        if(b>a){
            cout<<r[b-1]-r[a-1]<<"\n";
        }
        else cout<<abs(l[a]-l[b])<<"\n";
    }
    // for(auto i:r){
    //     cout<<i<<" ";
    // }
    // cout<<"\n";

    for(auto &i:l){
        cout<<i<<" ";
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