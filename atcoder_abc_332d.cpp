#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v(n,vector<ll>(m,0));
    vector<vector<ll>>v2(n,vector<ll>(m,0));
    map<ll,ll>m1;
    map<ll,ll>m2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            m1[v[i][j]]++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v2[i][j];
            m2[v2[i][j]]++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(m1[v[i][j]]!=m2[v2[i][j]]){
                cout<<-1<<endl;
                return;
            }
        }
    }
    for(int i=0;i<n;i++){
        vector<ll>sp=v2[i];
    }
    


    
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}