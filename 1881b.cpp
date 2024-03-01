#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void ans(){
    ll a,b,c;
    cin>>a>>b>>c;
    priority_queue<ll,vector<ll>,greater<ll>>q;
    q.push(a);
    q.push(b);
    q.push(c);
    ll small=q.top();
    q.pop();
    while(q.size()>0 && q.top()==small){
        q.pop();
    }
    if(q.size()==0){
        cout<<"Yes\n";
        return;
    }
    ll ns=q.top();
    q.pop();
    ll le=ns-small;
    q.push(le);
    q.push(small);
    while(q.size()>0 && q.top()==small){
        q.pop();
    }
    if(q.size()==0){
        cout<<"Yes\n";
        return;
    }

    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }
    // return;
    // cout<<q.size()<<endl;
    ns=q.top();
    q.pop();
    le=ns-small;
    q.push(le);
    q.push(small);
    while(q.size()>0 && q.top()==small){
        q.pop();
    }
    if(q.size()==0){
        cout<<"Yes\n";
        return;
    }
    ns=q.top();
    q.pop();
    le=ns-small;
    q.push(le);
    q.push(small);
    while(q.size()>0 && q.top()==small){
        q.pop();
    }
    if(q.size()==0){
        cout<<"Yes\n";
        return;
    }
    // cout<<q.top()<<endl;
    // q.pop();
    // cout<<q.top()<<endl;
    // q.pop();
    // cout<<q.size()<<endl;
cout<<"No\n";

    return;
}
int main(){
    int _;
    cin>>_;
    while(_--){
        ans();
    }
    return 0;
}