#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<ll>v(n);
        // unordered_map<ll,vector<vector<int>>>mp;
        map<ll,string>mp2;
        for(int i=0;i<n;i++){
            cin>>v[i];
            // if(mp[v[i]])
            mp2[v[i]]+=s[i];
            // mp[v[i]].push_back({int(s[i]-'a'),i});
        }
        vector<int>vis(n,0);
        map<ll,ll>poi;
        for(int i=0;i<n;i++){
            if(poi[v[i]]==0){
                s[i]=mp2[v[i]][mp2[v[i]].size()-1];
                poi[v[i]]++;
            }
            else{
                s[i]=mp2[v[i]][poi[v[i]]-1];
                poi[v[i]]++;
            }
        }
        // for(int i=1;i<=m;i++){
        //     ll k=v[i];
        //     vis[i]=1;
        //     vector<vector<int>>ve=mp[k];
        //     int nn=ve.size();
        //     char c=(ve[nn-1][0]+'a');
        //     for(int j=1;j<nn;j++){
        //             s[ve[j][1]]=char(ve[j-1][0]+'a');
        //     }
        //     s[ve[0][1]]=c;
        // }
        cout<<s<<endl;
        // a 1
        // b 2
        // c 3
        // d 4
        // e 5
        // eabcd
    }
}