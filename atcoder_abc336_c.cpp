#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(ll n){
    cin>>n;
    ll i=-2;
    while(n){
        // cout<<i<<" ";;
        string s=to_string(i);
        if(s[0]=='1' || s[0]=='3' || s[0]=='5' || s[0]=='7' || s[0]=='9'){
            i+=10;
            continue;
        }
        int g=0;
        for(auto j:s){
            if(j=='1' || j=='3' || j=='5' || j=='7' || j=='9'){
                g=1;
                break;
            }
        }
        if(g){
            i+=2;
            continue;
        }
        n--;
        i+=2;
    }
    cout<<i<<endl;
    return;

}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        // for(ll i=0;i<1;i++)
        solution(1);
        
    }
    return 0;
}