#include<iostream>
#include<cstdio>
#include<map>
#include<set>
#define MOD 1000000007
using namespace std;
typedef long long int llong;
llong modPow(llong a, llong x);
llong modInverse(llong a);
char str[1005];
int main()
{
    int n;cin>>n;
    scanf("%s",str);
    int r=0,l=0,rbeg=-1,lbeg=-1;
    for(int i=0;i<n;++i)
    {
        if(str[i]=='R'){++r;if(rbeg==-1)rbeg = i+1;}
        else if(str[i]=='L'){++l;if(lbeg==-1)lbeg = i+1;}
    }
    if(lbeg==-1)
    {
        cout<<rbeg<<" "<<rbeg+r<<endl;
    }
    else if(rbeg==-1)
    {
        cout<<lbeg+l-1<<" "<<lbeg-1<<endl;
    }
    else
    {
        cout<<rbeg<<" "<<lbeg-1<<endl;
    }
    return 0;
}
llong modPow(llong a, llong x) {
    llong res = 1;
    while(x > 0) {
        if( x&1 ) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        x >>= 1;
    }
    return res;
}
llong modInverse(llong a) {
    return modPow(a, MOD-2);
}