//
#include<bits/stdc++>
using namespace std;
typedef long long int ll;
bool check(string s){
    int n=s.length();
    if(s=="0" || s=="+0" || (s[0]=='+' && s[1]=='0')) {cout<<"1."<<endl;return 0;}
    vector<int>v;
    vector<int>v2;
    for(int i=0;i<n;i++){
        if(v.size()==0 && s[i]!='+') {cout<<"2."<<endl;return 0;}
        if(s[i]=='+'){
            v.push_back(1);
        }
        else if(s[i]=='-'){
            v.pop_back();
        }
        else if(s[i]=='1'){
            if(v.size()<=1) {cout<<"3."<<endl;return 0;}
            for(int j=1;j<v.size();j++){
                if(v[j]<v[j-1]){cout<<"4."<<endl;return 0;}
            }
        }
        else{
            int f=1;
            for(int j=1;j<v.size();j++){
                if(v[j]<v[j-1]){ f=0;break;}
            }
            if(f){cout<<"5."<<endl;return 0;}
        }
        // cout<<s[i]<<endl;
        // 1 1 
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        if(check(s1))cout<<"YES"; else cout<<"NO"; cout<<endl;
    }
    return 0;
}