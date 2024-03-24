#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    int i=0,j=n-1;
    ll sum=0;
    ll rans=0;
    while(i<=j){
        if(sum>0){
            sum-=v[j];
            j--;
        }
        else{
            sum+=v[i];
            ans+=v[i];
            i++;
        }
        // ps(sum);ps(i);pn(j);
        // cout<<sum<<"\n";
        if(sum==0){
            rans=ans;
            // cout<<rans<.<"-"<<"\n";
        }
    }
    pn(rans);
    return;
}
int main(){
    int _=1;
    // cin>>_;/
    while(_--){
        solution();
    }
    return 0;
}