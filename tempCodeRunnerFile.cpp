#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        ll n;
        vector<ll>v(n);
        int xr=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<1<<" "<<2<<"\n"<<"1 2\n2 "<<n<<2<<" "<<n<<endl;
        }

    }
}