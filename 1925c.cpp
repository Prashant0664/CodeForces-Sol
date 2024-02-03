#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    string c="";
    ll i=0;
    while(i<min(k,n*m)){
        ll j=0;
        vector<int>v(26,0);
        while(i+j<min((ll)s.length(),m+i)){
            v[s[i+j]-'a']++;
            j++;
        }
        int f=0;
        for(int l=0;l<m;l++){
            if(v[l]==0){
                c+=('a'+l);
                f=1;
                break;
            }
        }
        if(f==0){
            c+='-';
        }
        i+=m;
    }
    int cn=0;
    for(int i=0;i<c.length();i++){
        if(c[i]=='-'){
            c[i]='a';
            cn++;
        }
    }
    if(cn==c.length()){
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
    cout<<c<<"\n";
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