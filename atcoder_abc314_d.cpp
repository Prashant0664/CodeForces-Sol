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
        string s;
        cin>>s;
        ll q;
        cin>>q;
        ll u=0;
        ll l=0;
        set<ll>small;
        set<ll>large;
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                small.insert(i);
            }
            else{
                large.insert(i);
            }
        }
        while(q--){
            ll a,b; char c;
            cin>>a>>b>>c;
            if(a==2){
                l++;
            }
            else if(a==3){
                u++;
            }
            else{
                ll ind=b;
                int f=0;
                if(c<='z' && c>='a'){
                    f=1;
                }
                if(small.find(b)==small.end()){
                    if(f){
                        small.insert(b);
                        large.erase(b);
                    }
                    else{
                        large.insert(b);
                    }
                }
                if(large.find(b)==large.end()){
                    if(!f){
                        large.insert(b);
                        small.erase(b);
                    }
                    else{
                        small.insert(b);
                    }
                }
            }
            if(l==u){

            }
        }
    }
}