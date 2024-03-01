#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,k;
    cin>>n>>k;
    // string s;
    // cin>>s;
    vector<ll>v(n);
    int c0=0;
    int li=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==v[0])c0++;
        if(c0==k && li==-1)li=i;
    }
    // cout<<li<<" ";
    // cout<<"\n"<<n<<"<>"<<k<<endl;
    if(k==1){
        cout<<"YES\n"<<endl;
        return;
    }
    if(c0>=k && v[0]==v[n-1]){
        cout<<"YES\n"<<endl;
        return;
    }
    if(c0<k){
        cout<<"NO\n"<<endl;
        return;
    }
    int c2=0;
    for(int i=n-1;i>li;i--){
        if(v[i]==v[n-1])c2++;
        if(c2==k)break;
    }
    if(c2%k==0){
        cout<<"YES\n"<<endl;
        return;
    }
    cout<<"NO\n"<<endl;
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