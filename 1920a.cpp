#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    set<ll>st;
    vector<ll>v;
    ll mini=0,maxi=INT_MAX;
    for(int i=0;i<n;i++){
        // continue;
        ll a,b;
        cin>>a>>b;
        if(a==1){
            mini=max(mini,b);
        }
        else if(a==2){
            maxi=min(maxi,b);
        }
        else{
            v.push_back(b);
            // st.insert(b);
        }
    }
    // 1 2 3 4 5
    // 1 4 6 7 8 9
    // 0 2
    // 3

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(99);
    // v.push_back(100);
    if(mini>maxi){
        cout<<0<<endl;
        return;
    }
    int c=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<mini || v[i]>maxi){
            c++;
        }
    }
    // cout<<maxi<<" "<<mini<<" "<<bi<<" "     <<ui<<endl;
    ll g=(maxi-mini-(v.size()-c)+1);
    if(g<0){
        cout<<0<<endl;
    }
    else{
        cout<<g<<endl;
    }
    return;
    cout<<0<<endl;
    
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
        // cout<<"-";
    }
    return 0;
}