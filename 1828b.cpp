#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct VectorComparator {
    bool operator()(const std::vector<ll>& a, const std::vector<ll>& b) const {
        // Compare the first elements of the vectors
        // If you want to sort by a different element, you can change the index (e.g., a[1], a[2], etc.)
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        else{
            return a[0]<b[0];
        }
    }
};
bool compare(vector<int>v1,vector<int>v2){
    if(v1[0]<v2[0]){
        return 0;
    }
    else if(v1[0]>v2[0]){
        return 1;
    }
    return v1[1]<v2[1];
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        ll a,b,n,k;
        cin>>n;
        // cin>>k;
        string s,s2;
        ll ans=-1;
        // cin>>s;
        vector<ll>v(n);
        vector<vector<ll>>v2(n,vector<ll>(2,0));
        ll sum=0;
        int ef=0;
        int of=0;
        for(int i=0;i<n;i++){
            ll m;
            cin>>m;
            v[i]=m;
            v2[i]={m,i+1}; 
            if(m%2==0 && (i+1)%2!=0){
                ef=1;
            }
            if(m%2==1 && (i+1)%2!=1){
                of=1;
            }
        }
        if(of || ef){
            // cout<<1<<endl;
            // continue;
        }
        sort(v2.begin(),v2.end());
        for(int i=0;i<n;i++){
            if(v[i]==v2[i][0]){
                // cout<<v[i]<<"<"<<endl;
                continue;
            }
            else if(ans==-1){
                ans=abs(i+1-v2[i][1]);
            }
            else{
                sum=1;
                ans=__gcd(ans,abs(i+1-v2[i][1]));
            }
        }
        if(!sum){
            cout<<1<<endl;
            continue;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}