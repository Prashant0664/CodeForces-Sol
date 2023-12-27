#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll find(ll n,ll m,ll e){
    ll low=1,high=m;
    ll ans=0;
    // cout<<n<<" "<<m<<" "<<e<<endl;
    while(low<=high){
        ll mid=(low+high)>>2;
        if(e*mid>n){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;
        }
    }
    return ans;
}
void solution(){
    vector<ll>f(32,0);
    ll _;
    cin>>_;
    for(ll kk=0;kk<_;kk++){
        ll a,b;
        cin>>a>>b;
        if(a==1){
            f[b]++;
        }
        else{
            ll fl=1;
            for(ll i=31;i>=0;i--){
                if(f[i]==0){
                    continue;
                }
                else{
                    if(((ll)pow(2,i))<=b){
                        if(((ll)pow(2,i))*f[i]<=b){
                            b-=((ll)pow(2,i))*f[i];
                        }
                        else{
                            ll g=b/((ll)pow(2,i));
                            b-=((ll)pow(2,i))*g;
                        }
                    }
                    if(b==0)break;
                }
            }
            if(b==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            
            }
        }
    }
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}