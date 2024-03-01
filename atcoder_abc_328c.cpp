#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>st(n,0),en(n,0);
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i])st[i]=st[i-1]+1;
        else st[i]=st[i-1];
    }
    for(int i=n-2;i>=0;i--){
        if(s[i+1]==s[i])en[i]=en[i+1]+1;
        else en[i]=en[i+1];
    }
    ll a,b;

    // for(int i=0;i<n;i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<st[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        a--;
        b--;
        // cout<<endl;
        // cout<<", "<<a<<" "<<b<<" -\n";
        // cout<<st[a]<<" "<<st[b]<<" \n";
        cout<<(st[b]-st[a])<<endl;
    }




    // for(int i=0;i<n;i++){
    //     cout<<en[i]<<" ";
    // }
    // cout<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}