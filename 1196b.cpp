#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    ll c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==1)c++;
    }
    ll g=c;

    if(m>c){
        cout<<"NO\n";
        return;
    }
    g-=(m);
    g++;
    if(g%2==0 || (m==1 && c%2==0)){
        cout<<"NO\n";
        return; 
    }
    // cout<<g<<endl;
    cout<<"Yes\n";
    if(m==1){
        cout<<n<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(v[i]%2==1){
            cout<<i+1<<" ";
            m--;
            if(m<=1){
                break;
            }
        }
    }
    cout<<n<<endl;
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