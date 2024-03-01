#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n,c,m,k,a,b=0,x;
    string s;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    c=0;
    for(int i=0;i<n;i++){
        if(i>8 && (i+1)%11!=0)continue;
        for(int j=1;j<=v[i];j++){
            s=to_string(j);
            string ss=to_string(i+1);
            int f=0;
            for(int jj=0;jj<s.length();jj++){
                if(s[jj]!=ss[0]){
                    f=1;
                    break;
                }
            }
            // if(!f)cout<<i+1< <" "<<j<<endl;
            if(!f)c++;
        }
    }
    cout<<c<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}