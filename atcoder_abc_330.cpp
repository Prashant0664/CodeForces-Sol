#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    int n,m;
    string s;
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k>=m){
            ans++;
        }
        
    }
        cout<<ans<<endl;
    // cin>>s;

}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}