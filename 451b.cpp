#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m=-1;
    cin>>n;
    vector<ll>v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v2[i]=v[i];
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        if(v[i]!=v2[i]){
            m=i;
            break;
        }
    }
    if(m==-1){
        cout<<"yes\n";
        cout<<1<<" "<<1<<endl;
        return; 

    }
    ll m2=n-1;
    for(int i=n-1;i>=0;i--){
        if(v[i]!=v2[i]){
            m2=i;
            break;
        }
    }
    reverse(v.begin()+m,v.begin()+m2+1);
    for(int i=0;i<n;i++){
        if(v[i]!=v2[i]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes\n";
    cout<<m+1<<" "<<1+m2<<endl;
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}