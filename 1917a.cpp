#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n,m,k;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    int c=0;
    int e=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0){
            c++;
        }
        if(v[i]==0){
            e=1;
        }
    }
    if(e==1 || (c%2!=0)){
        cout<<0<<endl;
        return ;
    }
    else{
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
        return;
    }

    return;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
}