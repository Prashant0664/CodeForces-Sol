s="abc%x%def%y%";
x->"1"
y->"2"
x="4"
yxz=2
abc%x%y%

abc1%def%2%

// abc%cnkewkl

#include<bits/stdc++.h>
using namespace std;

n
m
n+n*m

abc%xyz%asd


string helper(string s, vector<pair<string,string>>v){
    int n=s.length();
    int i=0;
    bool flag=0;
    string ans="";
    while(i<n && s[i]!='%'){
        ans+=s[i];
        i++;
    }
    if(i==n){
        return ans;
    }

    while(i<n){
        string temp="";
        while(i<n && s[i]!='%')
        {
            temp+=s[i];
            i++;
        }
        if(i==n){
            return "";
        }
        for(auto &k:v){
            if(temp==k.first){
                ans+=k.second;
                break;
            }
        }
        i++;
    }
    return ans;

}

int main(){
    string s;
    cin>>s;
    vector<pair<string,string>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        pair<string,string>p;
        cin>>p.first>>p.second;
        v.push_back(p);
    }

}