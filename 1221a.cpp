#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        // if(x==2048){
        //     cout<<"YES\n";
        //     return;
        // }
        pq.push(x);
    }
    while(!pq.empty()){
        ll x=pq.top();
        pq.pop();
        if(x==2048){
            cout<<"YES\n";
            return;
        }
        if(x>2048){
            cout<<"NO\n";
            return;
        }
        if(pq.empty()){
            cout<<"NO\n";
            return;
        }
        ll y=pq.top();
        if(y==x){
            pq.pop();
            pq.push(x+y);
            continue;
        }
    }
    cout<<"NO\n";
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