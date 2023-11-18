 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll find(vector<ll>v,ll k,ll n){
  ll ans=0;
  k++;
  ll mini=INT_MAX,maxi=INT_MIN;
  ll c=0;
  for(int i=0;i<n;i++){
    c++;
    ans+=v[i];
    if(c==k){
      mini=min(ans,mini);
      maxi=max(ans,maxi);
      c=0;
      ans=0;
    }
  }
  // cout<<mini<<" "<<maxi<<endl;

  return (ll)abs(mini-maxi);
}
void ans(){
    ll n,m,k,c=0,ans=0,x,y,z,a,b;
    cin>>n;
    
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int i=0;
    int j=n-1;
    if(n==1){
      cout<<0<<endl;return;
    }

    while(i<=j){
      if(n%(i+1)==0){
        ll sp=find(v,i,n);
        ans=max(ans,sp);
      }
      i++;
      j--;
    }
    
    cout<<ans<<endl;

    return;
}


int main(){
    int _=1;
    cin>>_;
    while(_--){

        ans();
    
    }
    
    return 0;
}
