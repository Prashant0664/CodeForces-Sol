#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    int f=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]%m!=0)f=1;
    }
    if(f==0){
        cout<<-1<<endl;
        return;
    }
    if(sum%m!=0){
        cout<<n<<endl;
        return;
    }
    int c=0,c2=0;
    ll sum2=sum;
    int i=0;
    int maxi=-1;
    while(i<n){
        sum-=v[i];
        i++;
        if(sum%m!=0){
            maxi=max(maxi,(int)n-(int)i);
            // return;
        }
    }
    i=n-1;
    // cout<<maxi<<",";

    while(i>=0){
        sum2-=v[i];
        i--;
        if(sum2%m!=0){
            maxi=max(maxi,(int)(i+1));
        }
    }
    // cout<<maxi<<endl;
    pn(maxi);
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