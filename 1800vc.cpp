#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solution(){
    stack<ll>s;
    ll n;
    cin>>n;
    vector<ll>v(n);
    int li=0;
    int si=n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=0){
            si=min(si,i);
        }
        else{
            li=max(li,i);
        }
    }
    ll ans=0;
    priority_queue<ll>pq;
    for(int i=si;i<=li;i++){
        if(v[i]==0){
            if(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
        }
        else{
            pq.push(v[i]);
        }
    }
    cout<<ans<<endl;

    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}