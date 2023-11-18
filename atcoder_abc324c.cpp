#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    static int helper2(string s1, string s2){
        int dp[505][505];
        memset(dp,0,sizeof dp);

        for(int j=0; j<s2.length(); j++){    //  base case
            int i=s1.length();
            dp[i][j] = s2.length()-j;
        }

        for(int i=0; i<s1.length(); i++){    // base case
            int j=s2.length();
            dp[i][j] = s1.length()-i;
        }

        for(int i=s1.length()-1; i>=0; i--){
            for(int j=s2.length()-1; j>=0; j--){
                if(s1[i]==s2[j])  dp[i][j] =  dp[i+1][j+1];
                else{
                    int a = 1+dp[i+1][j+1];   //replace char at i;
                    int b = 1+dp[i+1][j];    // delete char at i
                    int c = 1+dp[i][j+1];     // insert char at i;

                    dp[i][j] = min(a,min(b,c));
                }       
            }
        }
        return dp[0][0];
    }


    int minDistance(string s1, string s2) {
        if(s1.length()==0) return s2.length();
        return helper2(s1,s2);
    }
void ans(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        string s2;
        cin>>s2;
        int nn=minDistance(s,s2);
        if(nn<=1){
            v.push_back(i+1);
        }
    }
    cout<<v.size();
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;

}
int main(){
    int _=1;
    while(_--){
        ans();
    }
    return 0;
}