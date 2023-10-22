#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        ll n;
        // cin>>n;
        string s;
        cin>>s;
        vector<string>v={"tourist", "3858",
"ksun48" ,"3679",
"Benq","3658",
"Um_nik","3648",
"apiad","3638",
"Stonefeang","3630",
"ecnerwala","3613",
"mnbvmar","3555",
"newbiedmy","3516",
"semiexp","3481"};
for(int i=0;i<v.size();i++){
    if(v[i]==s){
        cout<<v[i+1];
        break;
    }
}
        cout<<endl;
    }
}