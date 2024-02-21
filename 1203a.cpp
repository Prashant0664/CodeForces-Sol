#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v2=v;
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        if(v[i]==v2[0]){
            m=i;
            break;
        }
    }
    int f=0,f2=0;
    for(int i=0;i<n;i++){
        // cout<< v[(i+m)%n] << " "<< v2[i] << endl;
        if(v[(i+m)%n]!=v2[i]){
            f=1;
            // cout<<"a";
            break;
        }
    }
    reverse(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        if(v[i]==v2[0]){
            m=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        // cout<< v[(i+m)%n] << " "<< v2[i] << endl;
        if(v[(i+m)%n]!=v2[i]){
            f2=1;
            // cout<<"b";
            break;
        }
    }
    if(f==0||f2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    // 1 3 2
    // 1 2 3
    // 3 2 1


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