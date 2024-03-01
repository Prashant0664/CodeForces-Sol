#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n*=2;
        int k;
        cin>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            int j;
            cin>>j;
            v.push_back(j);
        }
        int f=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++){
            if(v[n/2+i]-v[i]<k){
                cout<<"NO"<<endl;
                f=1;
                break;
            }
            else{
                continue;
            }
        }if(!f){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}