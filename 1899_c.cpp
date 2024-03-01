 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    int t=1;
    cin>>t;
    while(t--){
 ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        take>>v[n]; 
    }
    ll s=v[0];
    ll ans=v[0];
    for(int i=1;i<n;i++){
        if(s<0){
            s=0;
        }
        if((abs(v[i-1])%2)==(abs(v[i])%2)){
            s=v[i];
        }
        else{
            s+=v[i];
        }
        ans=max(s,ans);
    }
      cout<<ans<<endl;

    }

    return 0;
}
