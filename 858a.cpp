#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    ll l=n;
    ll two=0,five=0;
    while(n%2==0 && n!=0){
        n/=2;
        two++;
    }
    while(n%5==0 && n!=0){
        n/=5;
        five++;
    }
    ll mul=1;
    if(min(five,two)>=m){
        cout<<l<<endl;
        return;
    }
    else{
        ll c=0,d=0;
        while(five<m){
            five++;
            c++;
        }
        while(two<m){
            two++;
            d++;
        }
        l*=(pow(2,d)*pow(5,c));
        cout<<l<<endl;
    }
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}