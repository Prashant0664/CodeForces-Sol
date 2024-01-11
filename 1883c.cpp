#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(m==2){
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<0<<"\n";
                return;
            }
        }
        cout<<1<<endl;
    }
    if(m==3){
        ll mini=5;
        for(int i=0;i<n;i++){
            if(v[i]%3==0){
                cout<<0<<"\n";
                return;
            }
            mini=min(mini,3-v[i]%3);
        }
        cout<<mini<<endl;
        return;
    }
    if(m==5){
        ll mini=6;
        for(int i=0;i<n;i++){
            if(v[i]%5==0){
                cout<<0<<"\n";
                return;
            }
            mini=min(mini,5-v[i]%5);
        }
        cout<<mini<<endl;
        return;
    }
    ll mul=1;
    if(m==4){
        ll mini=5;
        ll c=0;
        for(int i=0;i<n;i++){
            if(v[i]%4==0){
                cout<<0<<"\n";
                return;
            }
            if(v[i]%2==0){
                c++;
            }
            mul*=v[i];
            mini=min(mini,4-v[i]%4);
        }
        if(c>=2){
            cout<<0<<endl;
            return;
        }
        else if(c==1 && n>=2){
            cout<<1<<endl;
            return;
        }
        if(mul%4==0){
            cout<<0<<endl;
            return;
        }
        cout<<min(mini,(ll)2)<<endl;
        return; 
    }
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
        // cout<<"-\n";
        // cout<<endl;
    }
    return 0;
}