#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll m;
        cin>>m;
         ll sum=0;
        vector<ll>v(m);
        for(int i=0;i<m;i++){
            ll k;
            cin>>k;
            sum+=k;
            v[i]=k;
        }
        ll j=sum/2;
        ll jj=j;
        ll s2=0;
        int dy=0;
        ll ss=0;
        for(int i=0;i<m;i++){
            j-=v[i];
            ss+=v[i];
            if(j<0){
                ss-=v[i];
                cout<<i+1<<" ";
                break;
            }
            else{

            }
        }
        int k=0;
        for(int i=ss;i<=jj;i++){
            k++;
        }
        cout<<k<<endl;
        // 1 2 3 4 5 6 7

    }
}