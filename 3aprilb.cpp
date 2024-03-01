#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return ((double)(a.first/(double)a.second) < (double)(b.first/(double)b.second));
    }
    int help(){
        int a=0;
        int b=0;
        int c=0;
        int t=a+b+c;
        int h=t;
        int gg=t;
        int ggg=t;
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        
        cin>>n;
        vector<int>a(n+1),b(n+1);
        
        map<int,vector<int>>mp;
        for(int i=1;i<=n;i++){
        
            cin>>a[i]>>b[i];
            
        
            mp[a[i]].emplace_back(b[i]);
        }
        
        for(int i=1;i<=n;i++){
            
            sort(mp[i].begin(),mp[i].end(),greater<int>());
        
        }
        long long int com=0;
        
        for(int i=1;i<=n;i++){
            
            for(int j=0;j<i&&j<mp[i].size();j++){
                com+=mp[i][j];
                
            }
        }
        
        cout<<com<<endl;
    }
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     vector<pair<int,int>>v;
    //     for(int i=0;i<n;i++){
    //         int a,b;
    //         cin>>a>>b;
    //         v.push_back({a,b});
    //     }
    //     sort(v.begin(),v.end(),sortbysec);
    //     for(int i=0;i<n;i++){
    //         cout<<v[i].first<<" "<<v[i].second<<"-"<<endl;
    //     }
    //     int c=0;
    //     int poi=0;
        
    //     unordered_map<int,int>m;
    //     for(int i=0;i<n;i++){

    //         if(m[v[i].first]){
    //             continue;
    //         }
    //         // if(c>0&&v[i].first<=c){
    //         //     c--;
    //         //     if(c<0){
    //         //         c=0;
    //         //     }
    //         //     continue;
    //         // }
    //         if(v[i].first<=c){
    //             continue;
    //         }
    //         else{
    //             poi+=v[i].second;
    //             c++;
    //             m[c]=1;
    //         }
    //     }
    //     cout<<poi<<endl;
    //     }
    return 0;
}



