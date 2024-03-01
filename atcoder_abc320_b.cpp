#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
void expand(string &s , int left ,int right,string&ans)
    {
        while(left >= 0 &&  right < s.size())
        {
            if(s[left] != s[right])
                break;
            left--,right++;
        }
        if(ans.size() < right - left )
            ans = s.substr(left + 1 , right - left - 1);
    }
    int longestPalindrome(string s) {
        string ans="";
        for(int i = 0 ; i < s.size() ; i++)
        {
            expand(s , i , i,ans);
            expand(s , i , i+1,ans);
        }
        return ans.length();
    }
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        string s="";
        cin>>s;
        // int s=0,e=0÷;
        cout<<longestPalindrome(s)<<endl;
    }
}