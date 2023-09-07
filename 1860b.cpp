#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik,n) for(int i=ik;i<n;i++)
typedef long long int ll;
void help(ll cost,ll k,ll a,ll b,ll & c){
    if(cost==0){
        cout<<c<<endl;
        c=0;

        cout<<"<";
        return;
    }
    if(cost<0){
        cout<<"0000\n";
        cout<<c<<endl;
        c=min(c,abs(0-cost));
        cout<<c<<endl;
        return;
    }
    if(a==0 && b==0){
        ll kk=(cost/k);
        cost-=kk*k;
        c=min(c,kk+cost);
        cout<<"-";
        // cout<<kk<<" "<<cost<<endl;
        // c=min(c,abs(0-cost));
        return;
    }
    // if()
    if(b>0 && cost-k>=0)help(cost-k,k,a,b-1,c);
    if(a>0){
        help(cost-a,k,a-1,b,c);
    }
    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        ll m=n;
        ll a1=a;
        ll a2=b;;
        if(n<=a ||(m%k<=a && m/k<=b)){
            cout<<0<<endl;
            continue;
        }
            ll c=INT_MAX;
            ll nnn=min(n-k*(min(n/k,b)),a);
            ll rr=m-min(n-k*(min(n/k,b)),a)-k*(min(n/k,b));
            if(rr%k==0){
                cout<<(m-min(n-k*(min(n/k,b)),a)-k*(min(n/k,b)))/k<<"\n";
                continue;
            }
            if((k-(m-min(n-k*(min(n/k,b)),a)-k*(min(n/k,b)))%k)<=nnn){
                cout<<(m-min(n-k*(min(n/k,b)),a)-k*(min(n/k,b)))/k+1<<"\n";
                continue;
            }
            else cout<<(m-min(n-k*(min(n/k,b)),a)-k*(min(n/k,b)))/k+rr%k<<"\n";
            continue;
            // help(n,k,a,b,c);
            cout<<c<<endl;
    }
}