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
        int xr=0;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<"4\n1 "<<n-1<<endl<<"1 "<<n-1<<endl<<"2 "<<n<<endl<<"2 "<<n<<endl;
            }

    }
}