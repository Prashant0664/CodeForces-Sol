#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    // cin>>m;
    string s;
    cin>>s;
    if(n%2!=0){
        pn(-1);
        return;
    }
    int f=0;
    int c=0;
    for(int i=0;i<=n/2;i++){
        if(s[i]==s[n-i-1])f=1;
    }
    if(count(s.begin(),s.end(),'0')!=count(s.begin(),s.end(),'1')){
        pn(-1);
        return;
    }
    if(f==0){
        pn(0);
        return;
    }
    int j=n-1,i=0;
    vector<int>ans;
    while(i<=j){
        if(s[i]==s[j]){
            if(s[i]==1)
            ans.push_back(i+1);
            else{
                ans.push_back(j+1);
            }
        }
        else{
            
        }
        i++;j--;
    }
    pn(ans.size());
    printv(ans);

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