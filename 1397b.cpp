// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// typedef long long int ll;

// void solution(){
//     ll n,m;
//     cin>>n;
//     vector<string>v(2);
//     cin>>v[0];
//     cin>>v[1];
//     vector<string>a;
//     unordered_map<string,int>mp;
//     for(int i=0;i<n;i++){
//         string t=v[0].substr(0,i+1)+v[1].substr(i,n-i);
//         a.push_back(t);
//         mp[t]++;
//     }
//     sort(a.begin(),a.end());
//     cout<<a[0]<<endl;
//     cout<<mp[a[0]]<<endl;
//     return;
// }
// int main(){
//     int _=1;
//     cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
typedef double db; 
typedef long long ll;
typedef unsigned long long ull;
const int N=1000010;
const int LOGN=28;
const ll  TMD=0;
const ll  INF=2147483647;
int  T,n;
char a[3][N];

int main()
{
	scanf("%d",&T);
	while(T--)
	{
    	        scanf("%d",&n);
		for(int i=1;i<=2;i++)
		{
		    scanf("\n");
			for(int j=1;j<=n;j++)
				scanf("%c",&a[i][j]);
		}
		int max_down=n,min_down=1;
		for(int i=n;i>=2;i--)
			if(a[1][i]=='1'&&a[2][i-1]=='0') max_down=i-1;
		for(int i=1;i<max_down;i++)
			if(a[2][i]=='1'&&a[1][i+1]=='0') min_down=i+1;
		for(int i=1;i<=max_down;i++) printf("%c",a[1][i]);
		for(int i=max_down;i<=n;i++) printf("%c",a[2][i]);
		printf("\n");
		printf("%d\n",max_down-min_down+1);
	}
	
	return 0;
}