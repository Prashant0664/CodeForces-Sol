#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    map<int,int>mp1,mp2,mp3,mp4;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        mp1[i]=x;
        mp2[i]=y;
        mp3[x]++;
        mp4[y]++;
    }
    for(int i=0;i<n;i++){
        ps(n-1+mp3[mp2[i]]);
        pn(2*(n-1)-(n-1+mp3[mp2[i]]));
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