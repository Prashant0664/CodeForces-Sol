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
    sort(v.begin(),v.end());
    ll m=n/2;
    int f=0;ll k=0,previ=m;
    for(int i=0;i<n+2;i++){
        if(f==0){
            f=1;
            if((previ+k)>=n)continue;
            cout<<v[previ+k]<<" ";
            previ=previ+k;
            k+=1;
        }
        else{
            f=0;
            if((previ-k)<0)continue;
            cout<<v[previ-k]<<" ";
            previ=previ-k;
            k+=1;
        }
    }
    cout<<endl;
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