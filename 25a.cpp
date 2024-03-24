#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    int f=0,f2=0,c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];

        if(v[i]%2==1)f=i+1;
        else{
            f2=i+1;c++;
        }
    }
    if(c>1)cout<<f<<endl;
    else
    cout<<f2<<endl;

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