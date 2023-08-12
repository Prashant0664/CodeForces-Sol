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
        cin>>k;
        string s,s2;
        ll ans=0;
        cin>>s;
        vector<ll>v;
    }
    return 0;
}