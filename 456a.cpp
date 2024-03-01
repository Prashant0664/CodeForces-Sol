#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    ll maxi=0;
    ll ele=-1;
    for(auto &i:v){
        if(ele==-1){
            ele=i.first;
            maxi=i.second;
            continue;
        }
        if(i.second<maxi){
            if(ele!=-1 && i.first!=ele){
                cout<<"Happy Alex"<<endl;
                return;
            }
        }
        else if(i.second>=maxi){
            maxi=i.second;
            ele=i.first;
        }
    }
    cout<<"Poor Alex"<<endl;
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