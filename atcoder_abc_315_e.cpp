#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
class Solution {
public:
	void dfs(ll node, ll vis[], stack<ll> &st,
	         vector<ll> adj[]) {
		vis[node] = 1;
		for (auto it : adj[node]) {
			if (!vis[it]) dfs(it, vis, st, adj);
		}
		st.push(node);
	}
public:
	//Function to return list containing vertices in Topological order.
	vector<ll> topoSort(ll V, vector<ll> adj[])
	{
		ll vis[V] = {0};
		stack<ll> st;
				dfs(0, vis, st, adj);
		vector<ll> ans;
		while (!st.empty()) {
			ans.push_back(st.top());
			st.pop();
		}
        reverse(ans.begin(),ans.end());
		return ans;
	}

/*
    void dfs(ll i,vector<ll>&vis,vector<ll>adj[],set<ll>&st){
        vis[i]=1;
        st.insert(i);
        for(auto ik:adj[i]){
            dfs(ik,vis,adj,st);
        }
        return;
    }
	vector<ll> topoSort(ll V, vector<ll> adj[])
	{
        int n=V;
        vector<ll>vis(n+1,0);
        set<ll>st;
        dfs(0,vis,adj,st);
        // for(int i=0;i<n;i++){
        //     cout<<vis[i]<<" ";
        // }
        vector<ll>adj2[n+1];
        for(int i=0;i<n;i++){
            if(st.find(i)==st.end()){
                continue;
            }
            for(auto ik:adj[i]){
                if(st.find(ik)!=st.end()){
                    adj2[i].pb(ik);
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<i<<" : ";
        //     for(auto ik:adj2[i]){
        //         cout<<ik<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
		ll indegree[V] = {0};
		for (ll i = 0; i < V; i++) {
			for (auto it : adj2[i]) {
				indegree[it]++;
			}
		}

		queue<ll> q;
		q.push(0);
		vector<ll> topo;
		while (!q.empty()) {
			ll node = q.front();
			q.pop();
			topo.push_back(node);
			for (auto it : adj2[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}
        reverse(topo.begin(),topo.end());
		return topo;
	}
    */
};

int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v[n+1];
        for(int i=0;i<n;i++){
            ll k;
            cin>>k;
            for(int j=0;j<k;j++){
                ll h;
                cin>>h;
                h--;
                v[i].pb(h);
            }
        }
        Solution sol;
        vector<ll>ans=sol.topoSort(n,v);
        int mm=ans.size();
        // if(mm==0){
        //     cout<<0<<endl;
        // }
        for(int i=0;i<mm-1;i++){
            cout<<ans[i]+1<<" ";
        }
        cout<<endl;
    }
}