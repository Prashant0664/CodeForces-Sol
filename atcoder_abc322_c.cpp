#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        for(int i=1;i<=n;i++){
            auto t=lower_bound(v.begin(),v.end(),i);
            int j=t-v.begin();
            cout<<v[j]-i<<endl;
        }
    }
}