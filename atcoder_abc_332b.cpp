#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll k,g,m;
    cin>>k>>g>>m;
    ll mug=m,gg=g;
    for(int i=0;i<k;i++){
        if(gg==g){
            gg=0;
        }
        else if(mug==0){
            mug=m;
        }
        else{
            if(gg==0){
                if(mug<=g){
                    gg+=mug;
                    mug=0;
                }
                else{
                    mug-=(g);
                    gg=g;
                }
            }
            else{
                if(mug>(g-gg)){
                    mug-=(g-gg);
                    gg=g;
                }
                else{
                    mug=0;
                    gg+=mug;
                }
            }
        }
    }    
    cout<<gg<<" "<<mug<<endl;


    
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}