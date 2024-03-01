#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    multiset<int>s;
    for(int i=0;i<n;i++){
        s.insert(v[i]);
        auto it=s.lower_bound(v[i]);
        it++;
        if(it!=s.end()){
            s.erase(it);
        }
    }
    cout<<s.size()<<"-\n";
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