#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int help(string s,string t,int n,int i,int k){
    if(i==n || k==0){
        if(s==t){
            return 1;
        }
        else{
            return 0;
        }
    }
    int swa=0,nswa=0,re=0;
    re=help(s,t,n,i+1,k);
    // for(int j=)
    swap(t[i],t[i-3]);
    swa=help(s,t,n,i+1,k-1);
    swap(t[i],t[i-3]);
    if(i>=4){
        swap(t[i],t[i-4]);
        nswa=help(s,t,n,i+1,k-1);
        swap(t[i],t[i-4]);
    }
    return max({swa,nswa,re});
}
void solution(){
    ll n,k;
    cin>>n>>k;
    string s,t;
    cin>>s>>t;
    // int g=help(s,t,n,3,k);
    // if(g==1){
    //     cout<<"YES\n";
    // }
    // else{
    //     cout<<"NO\n";
    // }
    map<char, int> mp;
	for (int i = 0; i < n; ++i) {
		++mp[s[i]];
		--mp[t[i]];
	}
	for (auto p : mp) {
		if (p.second) {
			cout<<"NO\n";
			return;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (i - k < 0 && i + k > n-1 && s[i] != t[i]) {
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";

    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}