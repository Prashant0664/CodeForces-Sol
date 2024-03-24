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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ind=-1;
    int l=0,r=n-1;
    ll mid=(l+r)/2;
    while(r-l!=1){
        mid=(l+r)/2;
        // v[mid]=0; 
        if(v[mid]<=m){
            l=mid;
            if(ind==-1){ind=mid;}
        }
        else{
            r=mid;
        }
        v[mid]=0;
    }
    if(mid==ind){
        cout<<0<<endl;
        return;
    }
    if(v[mid]<=m){
        swap(v[mid],v[ind]);
        cout<<1<<"\n";
        cout<<mid<<" "<<ind<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(v[i]!=0 && v[i]<v[mid]){
            cout<<2<<"\n";
            cout<<i<<" "<<mid<<"\n";
            cout<<mid<<" "<<ind<<endl;
        }
        return;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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