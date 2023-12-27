#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ans=0;
    ll lt=0;
    ll pt=k;
    ll mlt=0;
    ll mpt=k;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            lt=mlt;
            pt=mpt;
        }
        else if(s[i]=='1'){
            if(pt!=0){
                pt--;
            }
            else if(lt!=0){
                lt--;
            }
            else{
                mlt++;
                ans++;
            }
        }
        else{
            if(lt!=0){
                lt--;
            }
            else{
                ans++;
                mlt++;
            }
        }
    }
    cout<<ans<<endl;
    
    


    
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}