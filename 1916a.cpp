#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    ll mul=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mul*=v[i];
    }
    if(2023%mul==0){
        cout<<"YES\n";
        cout<<2023/mul<<" ";
        for(int i=0;i<m-1;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<"NO\n";
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