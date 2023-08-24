#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik,n) for(int i=ik;i<n;i++)
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll a,b,c;
        cin>>a>>b>>c;
        ll d=a+b+c;
        int l=a+c-c/2;
        int k=c/2+b;
        if(l>k){
            cout<<"First\n";
        }else cout<<"Second\n";
        // 110
        // 011
        // if(a==b && b==c){
        //     cout<<"First\n";
        // }
        // else
        // if(d%2==1){
        //     cout<<"First\n";
        // }
        // else
        // cout<<"Second\n";
        /*
        else if(b==1){
            cout<<"First\n";
        }
        else if((a+c)%2==0){
            cout<<"Second\n";
        }
        else
        cout<<"First\n";*/
        /*
        cin>>n;
        string s;
        cin>>s;
        n=s.length();
        vector<ll>v(n);
        vector<ll>v2;
        vector<ll>v3;
        vector<vector<ll>>v4;
        int f=0;
        for(int i=0;i<n;i++){
            int m;
            // cin>>m;
            cin>>v[i];
        }*/
    }
}