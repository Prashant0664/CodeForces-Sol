#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n,m;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    ll c=0;
    for(ll i=0;i<n;i++){
        if(v[i]%2==1)c++;
        sum+=v[i];
        if(i==0){
            cout<<sum<<" ";
        }
        else if(i==1){
            cout<<(sum/2)*2<<" ";
        }
        else cout<<(sum-(c)/3-(c-c/3)%2)<<" ";
    }
    cout<<endl;
    string s;
}
int main()
{
    int _ = 1;
    cin >> _;
    while (_--)
    {
        solution();
    }
}