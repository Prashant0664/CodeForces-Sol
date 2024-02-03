#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void shortest_distance(vector<vector<int>>&matrix) {
		int n = matrix.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == -1) {
					matrix[i][j] = 1e9;
				}
				if (i == j) matrix[i][j] = 0;
			}
		}

		for (int k = 0; k < n; k++) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matrix[i][j] = min(matrix[i][j],
					                   matrix[i][k] + matrix[k][j]);
				}
			}
		}




		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == 1e9) {
					matrix[i][j] = -1;
				}
			}
		}
	}
vector<int> find(int n){
    cout<<n<<"\n0\n";
    if(n<=0)return {0};
    vector<int>ans(n,0);
    ans[0]=(n)*2;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]-2;
            if(ans[i]==0){
                break;
            }
        }
    return ans;
}
void solution(){
    int n=5,x=2,y=4;
    // x--;
    // y--;
        vector<int>ans(n,0);
    if(x==y){
        ans[0]=(n-1)*2;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]-2;
            if(ans[i]==0){
                break;
            }
            // ans[i]=ans[i+1]+2;
        }
    }
    else{
        vector<int>a=find(n-x-1);
        vector<int>b=find(y-1-1);
        vector<int>c=find(n-(y-x));
        for(int i=0;i<a.size();i++){
            ans[i]=a[i];
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
        for(int i=0;i<b.size();i++){
            ans[i]+=b[i];
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
        for(int i=0;i<c.size();i++){
            ans[i]+=c[i];
        }
        cout<<"\n";
        for(auto i:ans){
            cout<<i<<" ";
        }
    }
    
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}