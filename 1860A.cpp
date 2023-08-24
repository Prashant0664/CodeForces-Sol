#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik,n) for(int i=ik;i<n;i++)
typedef long long int ll;
bool isValid(string s) {
        stack<char>st; 
        for(auto it: s) {
            if(it=='(' || it=='{' || it == '[') st.push(it); 
            else {
                if(st.size() == 0) return false; 
                char ch = st.top(); 
                st.pop(); 
                if((it == ')' and ch == '(') or  (it == ']' and ch == '[') or (it == '}' and ch == '{')) continue;
                else return false;
            }
        }
        return st.empty(); 
    }
int isSubsequence(string & s1, string & s2, int i, int j, 
                   vector < vector < int >> & dp) {
  if (i < 0 || j < 0)
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];
  if (s1[i] == s2[j])
    return dp[i][j] = 1 + isSubsequence(s1, s2, i - 1, j - 1, dp);
  return dp[i][j] = max(isSubsequence(s1, s2, i - 1, j, dp), 
                        isSubsequence(s1, s2, i, j - 1, dp));
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        cin>>s;
        n=s.length();
        if(s=="()"){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            n=n*2;
            string ans="";
            string ans2="";
            for(int i=0;i<n/2;i++){
                ans+="()";
            }
            for(int i=0;i<n/2;i++){
                ans2+="(";
            }
            for(int i=0;i<n/2;i++){
                ans2+=")";
            }
            int f=1;
            for(int i=0;i<n/2;i++){
                if(ans.substr(i,n/2)==s){
                    cout<<ans2<<endl;
                    f=0;
                    break;
                }
            }
                if(f){
                    cout<<ans<<endl;
                }
            // cout<<ans<<endl;
        }

    }
}