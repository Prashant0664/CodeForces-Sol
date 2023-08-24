#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(i,n) for(i;i<n;i++)
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        // cin>>s;
        // n=s.length();
        vector<ll>v(n);
        vector<ll>v2;
        vector<ll>v3;
        vector<vector<ll>>v4;
        int f=0;
        for(int i=0;i<n;i++){
            int m;
            // cin>>m;
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(v[i]!=v[i-1]){
                f=1;
                break;
            }
        }
        if(!f){
            cout<<-1<<endl;
            continue;
        }
        vector<ll>a,b,c;
        b.push_back(v[n-1]);
        for(int i=0;i<n-1;i++){
            if(v[i]!=b[0])
            c.push_back(v[i]);
            else b.push_back(v[i]);
            // if(v[i]%2==0){
            //     b.push_back(v[i]);
            // }
            // else{
            //     c.push_back(v[i]);
            // }
        }
        if(b.size()==0 || c.size()==0){
            cout<<-1<<endl;
        }
        else{
            cout<<c.size()<<" "<<b.size()<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }

    }
}