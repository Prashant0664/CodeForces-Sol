#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s="1";
        for(int i=1;i<=n;i++){
            int f=0;
            for(int j=1;j<=9;j++){
                if(n%j==0 && i%(n/j)==0){
                    s+=j+'0';
                    f=1;
                    // cout<<i<<" "<<n<<" "<<j<<" ";
                    // cout<<i%(n/j)<<" ";
                    // cout<<j<<" \n";
                    break;
                }
            }
            if(!f)s+='-';
        }
        cout<<s<<endl;

        
    }
}