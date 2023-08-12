#include <iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        vector<ll>v2;
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            v2.push_back(m);
        }
        sort(v2.begin(),v2.end());
        map<ll,ll>mpp;
        for(ll i=0;i<n;i++){
            ll m=log2(v2[i])+1;
            mpp[m]++;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
ll x=mpp[v[v.size()]-1];
        cout<<(x+1)/2<<"-"<<endl;
    }
	return 0;
}
/*
9
NAUTILUS
FIREFOX
GEDIT
FIREFOX
NAUTILUS
WINE
GIMP
TERMINAL
WINE
*/