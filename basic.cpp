#include<bits/stdc++.h>

using namespace std;


int main() {
    // int t;
    // cin >> t;
    // while (t--) { 
        int n;
        cin>>n;
        string s;
        int t;
        string arr[n];
        string ans="";
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            cin>>s>>t;
            m[s]+=t;
            arr[i]=s;
        }
        int mi=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(m[arr[i]]>mi){
                mi=m[arr[i]];
                ans=arr[i];
            }
        }
        cout<<ans<<endl;

    // }
    return 0;
}
