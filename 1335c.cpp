#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    unordered_map<ll,ll>mp;
    ll a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        mp[k]++;
    }
    for(auto &[i,j]:mp){
        if(j==1){
            a++;
        }else if(j>=2){
            a++;
        }
        b=max(b,j);
    }
    a--;
    // std::cout<<a<<" "<<b<<"\n";
    if(a>=b){
        std::cout<<b<<"\n";
        return;
    }
    if(a<b && (a+1)>=(b-1) && (b-1)>0){
        std::cout<<b-1<<endl;
        return;
    }

    if((a+1)<=(b-1) && (b-1)>0){
        std::cout<<a+1<<endl;
        return;
    }
    std::cout<<min(a,b)<<endl;
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
        // std::cout<<"-\n" .;
    }
    return 0;
}