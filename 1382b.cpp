#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    int f=0;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[0]==1 && f==0 && v[i]==1){
            c++;
        }
        else{
            f=1;
        }
    }
    if(c==n){
        if(n%2==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
        return;
    }
    if(c%2==0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
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