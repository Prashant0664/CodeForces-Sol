#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// help function will check if t is continuous subsequence of s or not 
int help(string s,string t){
    int n=s.length();
    int m=t.length();
    int j=0,a=0;
    for(int i=0;i<s.length()-t.length();i++){
        while(i<n && j<m){
            if(s[i]==t[j]){
                j++;
            }
            else break;
        }
        a=max(a,j);
        j=0;
    }
    return j==m?1:0;
}
void solution(){
    ll n,m;
    string s,t;
    cin>>s>>t;
    n=s.length();
    m=t.length();
    if(n<m){
        swap(s,t);
        swap(n,m);
    }
    int ans=0;
    for(int i=0;i<m;i++){
        for(int j=i;j<m;j++){
            string h=t.substr(i,j-i+1);
            // cout<<h<<" ";
            size_t found = s.find(h);
            if (found != string::npos){
                // cout<<"-";
                if(ans<=h.length()){
                    ans=h.length();
                }
            }
        }
    }
    // cout<<ans<<" ";
    cout<<n+m-ans*2<<"\n"; 
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