#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    string s,t;
    cin>>s>>t;
    vector<string> days={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    int a,b;
    for(int i=0;i<7;i++){
        if(s==days[i]){
            a=i;
        }
        if(t==days[i]){
            b=i;
        }
    }
    if(a==b){
        cout<<"YES"<<endl;
        return;
    }
    if((a+2)%7==b || (a+3)%7==b){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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