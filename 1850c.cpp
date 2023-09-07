#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    // t=1;
    cin>>t;
    while(t--){
        ll n,m,a,b,c,d;
        // string s;
        // cin>>n;
        n=8;
        vector<string>v(8);
        for(int i=0;i<8;i++){
            cin>>v[i];
        }
        string ans="";
        int ind=-1;
        int uind=-1;
        for(int i=0;i<n;i++){
            if(ind!=-1){
                break;
            }
            for(int j=0;j<v[i].length();j++){
                if(v[i][j]!='.'){
                    ind=j;
                    uind=i;
                    break;
                }
            }

        }
        if(uind!=-1)
        for(int i=uind;i<n;i++){
            ans+=v[i][ind];
        }
        string rs="";
        for(int i=0;i<ans.length();i++){
            if(ans[i]!='.'){
                rs+=ans[i];
            }
        }
        cout<<rs<<endl;
        // cin>>m;
        // cin>>s;
        // n=s.length();
        // ll ans=0;
        // for(int i=0;i<n;i++){

        // }
        // cout<<ans<<endl;
    }
    return 0;
}