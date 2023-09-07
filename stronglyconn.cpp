#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime(ll n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return 1;
		}
	}
	return 1;
}
int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n;
		// cin>>n>>m;
		vector<ll>v(n,0);
		string s1;
		string s2;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		if(n==1){
				cout<<v[0]<<endl;
			continue;
		}
		else if(n==2){
			cout<<max(v[0],max(v[1],(ll)(INT_MIN)))<<endl;
			continue;
		}
		int f=0;
		ll maxi=INT_MIN;
		for(int i=0;i<n;i++){
			if(v[i]>0){
				f=1;
			}
			maxi=max(maxi,v[i]);
		}
		if(!f){
			cout<<maxi<<endl;
			continue;
		}
		ll os=0;
		ll es=0;
		for(int i=0;i<n;i+=1){
			if(i%2==0){
				if(v[i]<=0){}
				else es+=v[i];
			}
			else{
				if(v[i]>0){
					os+=v[i];
				}
			}
		}
		cout<<max(es,os)<<endl;
        
	}
	return 0;
}	

