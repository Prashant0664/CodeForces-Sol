#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    string s;

    cin>>s;
    if(s[0]<65 || s[0]>(65)+26){
        cout<<"No"<<endl;
        return;
    }
    for(int i=1;i<s.length();i++){
    
    if(s[i]<97 || s[i]>((97)+26)){
        cout<<"No"<<endl;
        return;
    }

    }

    cout<<"Yes"<<endl;
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}