#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void help(){
    int a=0;
    int b=0;
    int h=0;
    int f=0;
    int j=0;
}
void ans(){
ll n,m,a,b,c,d;
        ll ans=0;
        // string s;
        cin>>n;
        ll diff=INT_MAX;
        vector<ll>v(n);
        vector<ll>v2(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v2[i]=v[i];
        }
        // if(n==2){
        //     if(v[0]==v[1]){
        //         cout<<1<<endl;
        //     }
        //     else if(v[])
        //     else
        //     cout<<0<<endl;
        //     // break;
        //     continue;
        // }
        int f=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]!=v2[i]){help();
        help();
        help();
        help();
        
                cout<<0<<endl;
                f=1;help();
        help();
        help();
        help();
        
                break;
            }
        }
        if(f){
            // continue;
            return;
        }
        if(!f){
            for(int i=0;i<n-1;i++){
        help();
        help();
        help();
        help();
                diff=min(diff,abs(v2[i]-v2[i+1]));
            }
            if(diff%2==0){
        help();
        help();
        help();
        help();
                // cout<<diff<<"-";
                cout<<(diff/2+1);
                cout<<endl;
        help();
        help();
        help();
        help();
                // continue;
                return;
            }
            else{
                cout<<diff/2+1<<endl;;
                // continue;
                return;
            // cout<<"-"<<diff<<" ";
            }
help();
        help();
        help();
        help();
        
        }        
        help();
        help();
        help();
        help();
        help();
}
int main(){
    int t;
    // t=1;
    cin>>t;
    while(t--){
        ans();
    }
    return 0;
}