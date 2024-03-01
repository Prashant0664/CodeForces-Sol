#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n;
    cin>>n;
    vector<ll>q(n);
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll ans=INT_MAX;
    ll ma=INT_MAX;
    ll mb=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]==0 && b[i]==0)continue;
        if(a[i]==0 && b[i]!=0){
            mb=min(q[i]/b[i],mb);
        }
        else if(b[i]==0 && a[i]!=0){
            ma=min(q[i]/a[i],ma);
        }
        else{
            ll low=0,high=q[i],s=0;
            while(low<=high){
                ll mid=(low+high)/2;
                if(a[i]*mid<=q[i] && (q[i]-a[i]*mid)/b[i]>=0 && (a[i]*mid+(q[i]-a[i]*mid)/b[i])<=q[i]){
                    s=mid;
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            ma=min(ma,s);
            mb=min(mb,(q[i]-a[i]*s)/b[i]);
        }
    }
    cout<<ma<<" "<<mb<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==0 && b[i]==0)ans=min(ans,q[i]);
        if(a[i]==0 && b[i]!=0){
            ans=min(ans,mb);
        }
        else if(b[i]==0 && a[i]!=0){
            ans=min(ans,ma);
        }
        else{
            ans=min(ans,ma+mb);
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int _=1;
    // cin>>_;
    ll a,b;
    cin>>a>>b;
    vector<ll>v(b);
    for(int i=0;i<b;i++){
        cin>>v[i];
        v[i]--;
    }
    ll ans=INT_MAX;
    for(int i=0;i<a;i++){
        ll dis=0;
        for(int i=0;i<b-1;i++){
            if(v[i]>=i+1 && v[i+1]>i){
                dis+=abs(v[i]-v[i+1]);
            }
            else if(v[i]<=i && v[i+1]<=i){
                dis+=abs(v[i]-v[i+1]);
            }
            else{
                ll d1=abs(min(v[i],v[i+1])-0)+abs(max(v[i],v[i+1])-a);
                dis+=d1;
            }
        }
        cout<<dis<<endl;
        ans=min(ans,dis);
    }
    cout<<ans<<"\n";
    while(_--){
        // solution();
    }
    return 0;
}