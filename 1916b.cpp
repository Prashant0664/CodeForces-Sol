#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
void solution(){
    int n=0,m=0;
    cin>>n>>m;
    int g= __gcd(m, n);
    if(g==1 && n!=1){
        cout<<m*m<<endl;
        return;
    }
    else if(g==1){
        cout<<n*m<<endl;
    }
    else{
        if(g==n && m%n!=0){
            cout<<m*2<<endl;
            return;
        }
        else if(g==n){
            cout<<m*g<<endl;
        }
        cout<<m*g<<endl;
    }
    string s;
}
int main()
{
    int _ = 1;
    cin >> _;
    while (_--)
    {
        solution();
    }
}