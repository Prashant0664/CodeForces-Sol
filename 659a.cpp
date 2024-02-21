#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll pk=abs(k);
    if(k>0){
        while(pk--){
            m++;
            if(m>n){
                m=1;
            }
        }
            cout<<m<<"\n";
    }
    else{
        while(pk--){
            m--;
            if(m==0){
                m=n;
            }
        }
        cout<<m<<endl;
    }

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