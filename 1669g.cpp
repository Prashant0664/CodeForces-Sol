#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<string>ans(n);
    for(int i=0;i<m;i++){
        int k=n-1,j=n-1;
        while(j>=0){
            if(v[j][i]=='.'){
                j--;
            }
            else if(v[j][i]=='o'){
                j--;
                k=j;
            }
            else{
                v[j][i]='.';
                v[k][i]='*';
                j--;
                k--;
            }
        }
    }
    for(auto &i:v){
        cout<<i<<endl;
    }
    cout<<endl;
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