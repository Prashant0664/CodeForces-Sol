#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;

ll check(string s1,string s2,string s3){
    ll n=s1.length();
    ll ans=1e9;
    for(ll i=0;i<n;i++){
        ll x=((i%(n+1))+1);
        char g=s1[x-1];
        // cout<<"i: "<<g<<", ";
        for(ll j=i+1;j<n;j++){

            ll y=((j%(n+1))+1);
            char g2=s2[y-1];
            // cout<<"j: "<<g2<<", ";
            for(ll k=j+1;k<n;k++){
                ll z=((k%(n+1))+1);
                char g3=s3[z-1];
                // cout<<"k: "<<g3<<" ";
                if(g3==g2 && g2==g){
                    // cout<<"+";
                    ans=min(k,ans);
                }
            }
            // cout<<endl;
        }
        // cout<<endl;
    }
    return ans;
}
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        s1+=s1,s2+=s2,s3+=s3;
        s1+=s1,s2+=s2,s3+=s3;
        ll ans=1e9;
        for(ll i=0;i<s1.length();i++){
            for(ll j=0;j<s2.length();j++){
                for(ll k=0;k<s3.length();k++){
                    if(i!=j && j!=k && i!=k && s1[i]==s2[j] && s2[j]==s3[k]){
                        ans=min(ans,max({i,j,k}));
                    }
                }
            }
        }
        if(ans==1e9) cout<<-1;
        else cout<<ans;
        cout<<endl;
        /*
        ans=min(ans,check(s1,s2,s3));
        // cout<<ans<<endl;
        ans=min(ans,check(s1,s3,s2));
        // cout<<ans<<endl;
        ans=min(ans,check(s2,s3,s1));
        // cout<<ans<<endl;
        ans=min(ans,check(s2,s1,s3));
        // cout<<ans<<endl;
        ans=min(ans,check(s3,s2,s1));
        // cout<<ans<<endl;
        ans=min(ans,check(s3,s1,s2));
        // cout<<ans<<endl;
        if(ans==1e9) cout<<-1;
        else cout<<ans;
        cout<<endl;
        */
    }
}