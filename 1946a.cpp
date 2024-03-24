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
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        pn(1);
        return;
    }
    sort(v.begin(),v.end());
    ll ans=0;
    int ind=n/2+n%2;
    ind--;
    ll med=v[n/2+n%2];
    ll c=0;
    // cout<<med<<"-\n";
    if(v[ind]!=v[ind+1]){
        // cout<<v[ind+1]<<endl;
        cout<<1<<endl;
        return;
    }
    for(int i=ind;i<n;i++){
        if(v[i]==v[ind]){
            c++;
        }
    }
    cout<<c<<endl;
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