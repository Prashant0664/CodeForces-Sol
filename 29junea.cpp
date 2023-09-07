#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void help()
{
    int a, b,c,d,e,f,g,h,i,j,k,l;
    a = 0;
    b=0;

    b = 0;
    b = a;
    a = b;
    // continue;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        int l=-1;
        int r=accumulate(v.begin(),v.end(),0);
        while(l<=r){
            int low=0;
            int high=n;
            int mid=(low+high)>>1;
            while(low<n-1 && abs(v[low]-v[low+1])<=mid){
                low++;
            }
            while(1<high && abs(v[high]-v[high-1])<=mid){
                high--;
            }
            

        }
    }
    return 0;
}