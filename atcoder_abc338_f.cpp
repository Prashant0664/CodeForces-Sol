#include <bits/stdc++.h>
using namespace std;

void dfs(int i,set<int>st,vector<vector<int>>edges){
    st.erase(i);
    for(auto j:edges[i]){
        if(vis[j]==0){
            dfs(j,st,edges,vis);
        }
    }
}


int main() {

	int V = 3;
    int ans=0;
	vector<vector<int>> edges(4, vector<int>(3));
	edges[0] = {0, 1, 5};
	edges[1] = {1, 0, -3};
	edges[2] = {1, 2, -4};
	edges[3] = {2, 0, 100};
	// edges[4] = {1, 2, -2};
	// edges[5] = {3, 4, -2};
	// edges[6] = {2, 4, 3};

    for(int i=0;i<V;i++){
        int S = i;
        int maxi=0;
        Solution obj;
        vector<int> dist = obj.bellman_ford(V, edges, S);
        int j=0;
        for (auto d : dist) {
            if(j==S){
                j++;
                // continue;
            }
            // if(d==0)continue;
            cout << d << " ";
            maxi=max(d,maxi);
        }
        cout<<maxi<<" ";
        cout << endl;
    }

	return 0;
}