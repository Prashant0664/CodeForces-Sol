#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check(stack<char>q,string part){
    int n=part.size();
    int j=n-1;
    while(j>=0){
        if(q.top()==part[j]){
            q.pop();
            j--;
        }
        else return false;
    }
    return true;
}
string removeOccurrences(string s, string p)
{
	int T[1001]{-1};
	for(int i{}, j{-1}; i<p.length(); )
		j==-1 or p[i]==p[j] ? T[++i]=++j : j=T[j]; 
    
	int k{};
	for(int i{}, j{}, stack[2002]{}, t{1000}; i<s.length(); )
		if(j==-1 or s[i]==p[j])
		{
			s[k]=s[i];
			i++, j++, k++;
			if(j==p.length()) k-=j, j=stack[--t];
		}
		else
		{
			auto prev{j}; 
			for( ; j!=-1 and s[i]!=p[j]; j=T[j]);			
            stack[t++]=prev-max(0,j);
		}
	s.resize(k);
	return s;
}
void solution(){
    string s;
    cin>>s;
    cout<<removeOccurrences(s,"ABC")<<endl;
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }
}