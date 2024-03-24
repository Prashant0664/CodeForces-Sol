#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    ll iz=0,io=0;
    int o=0,z=0;
    m=n/2;
    for(int i=0;i<m;i++){
        if(s[i]=='0') z++;
        if(s[i]=='1') io++;
        if(s[i]=='0') iz++;
    }
    for(int i=m;i<n;i++){
        if(s[i]=='1') o++;
        if(s[i]=='1') io++;
        if(s[i]=='0') iz++;
    }
    if(iz==n){
        cout<<n<<endl;
        return;
    }
    if(iz==0){
        cout<<0<<endl;
        return;
    }
    ll ans=-1;
    // return;
    ll z2=z,o2=o;
    for(int i=m-1;i>=0;i--){
        if(z>=((i+1)/2+(i+1)%2) && o>=((n-(i+1))/2+(n-(i+1))%2)){
            ans=max(ans,(ll)(i+1));
            // break;
        }
        // cout<<i<<" "<<ans<<" "<<z<<" "<<o<<endl;

        // cout<<ans<< endl;
        if(s[i]=='0')z--;
        if(s[i]=='1')o++;
    }
    if(z>=((-1+1)/2+(-1+1)%2) && o>=((n-(-1+1))/2+(n-(-1+1))%2)){
            ans=max(ans,(ll)(-1+1));
            // break;
        }
    // return; 
    // cout<<ans<<"-"<<endl;
    ll ans2=n;
    // cout<<"\n";
    for(int i=m;i<n;i++){
        if(s[i]=='0')z2++;
        if(s[i]=='1')o2--;
        if(z2>=((i+1)/2+(i+1)%2) && o2>=((n-(i+1))/2+(n-(i+1))%2)){
            ans2=min(ans2,(ll)(i+1));
            // cout<<o2<<"[]";
            // cout<<i<<";"<<ceil((n-(i))/(double)2)<<"\n";
            // break;
        }
        // cout<<i<<" "<<ans2<<" "<<z2<<" "<<o2<<endl;
        // cout<<ans2<<endl;
        // cout<<"+";
    }
    // if(ans==-1){
    //     cout<<" ANS ";
    //     cout<<ans2<<endl;
    //     return;
    // }
    if(abs(float(n)/float(2)-float(ans))<=abs(float(n)/float(2)-float(ans2))){
        cout<<ans<<endl;
    }
    else{
        cout<<ans2<<endl;
    }
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}