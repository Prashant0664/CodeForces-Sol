#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;

ll check(string s1,string s2,string s3){
    ll n=s1.length();
    ll ans=1e9;
    for(ll i=0;i<n;i++){
        ll x=((i%(n+1))+1);
        char g=s1[x-1];
        // cout<<"i: "<<g<<", ";
        for(ll j=i+1;j<n;j++){

            ll y=((j%(n+1))+1);
            char g2=s2[y-1];
            // cout<<"j: "<<g2<<", ";
            for(ll k=j+1;k<n;k++){
                ll z=((k%(n+1))+1);
                char g3=s3[z-1];
                // cout<<"k: "<<g3<<" ";
                if(g3==g2 && g2==g){
                    // cout<<"+";
                    ans=min(k,ans);
                }
            }
            // cout<<endl;
        }
        // cout<<endl;
    }
    return ans;
}

void dfs(vector<vector<ll>>adj[],ll i,unordered_map<ll,pair<ll,ll>>&mp,ll x,ll y){
    if(mp.find(i)!=mp.end()) return;
    mp[i]={x,y};
    for(auto k:adj[i]){
        ll e=k[0];
        ll a=k[1];
        ll b=k[2];
        ll rx=(x+a);
        ll ry=(y+b);
        dfs(adj,e,mp,rx,ry);
    }
    return;
}
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n;
        ll m;
        cin>>n>>m;
        vector<vector<ll>>v;
        for(int i=0;i<m;i++){
            ll a,b,x,y;
            cin>>a>>b>>x>>y;
            v.pb({a,b,x,y});
        }
        unordered_map<ll,pair<ll,ll>>mp;
        // mp[1]={0,0};
        vector<vector<ll>>adj[n+1];
        // continue;
        for(int i=0;i<v.size();i++){
            // cout<<v[i][0]<<" ";
            adj[v[i][0]].pb({v[i][1],v[i][2],v[i][3]});
            ll c=v[i][2],d=v[i][3];
            if(c<0){
                c=abs(c);
            }
            else{
                c=0-c;
            }
            if(d<0){
                d=abs(d);
            }
            else{
                d=0-d;
            }
            adj[v[i][1]].pb({v[i][0],c,d});
        }
        // for(auto k:adj[1]){
        //     for(int i=0;i<k.size();i++){
        //         cout<<k[i]<<" ";
        //     }
        // }
        dfs(adj,1,mp,0,0);
        for(int i=0;i<n;i++){
            // cout<<i<<": ";
            if(mp.find(i+1)!=mp.end()){
                cout<<mp[i+1].first<<" "<<mp[i+1].second<<endl;
            }
            else{
                cout<<"undecidable\n";
            }
        }



    }
}