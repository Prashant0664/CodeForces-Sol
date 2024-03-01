#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int c;
        cin>>c;
        vector<long long int>v;
        for(long long int i=1,x;i<=n;i++){
            cin>>x;
            v.push_back(x+i);
        }
        long long int ans=0;
        // for(long long int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        sort(v.begin(),v.end());
        
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        for(long long int i=0;i<n;i++){
            if(v[i]>c){
                // cout<<v[i]<<" "<<c<<endl;
                break;
            }
            else{
                c-=v[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}