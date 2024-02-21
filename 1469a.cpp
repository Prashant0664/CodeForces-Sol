#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    string s;
    cin>>s;
    if(s.length()%2!=0){
        cout<<"NO\n";
        return;
    }
    stack<char>st;
    int c=s.length()-2;
    c/=2;
    for(auto &i:s){
        if(c<=0 && i=='?'){
            i=')';
        }
        else if(i=='?'){
            i='(';
            c--;
        }
    }
    // cout<<s<<" ";
    for(auto i:s){
        if(i=='('){
            st.push(i);
        }
        else if(i==')'){
            if(st.empty()){
                cout<<"NO\n";
                return;
            }
            st.pop();
        }
    }
    cout<<"YES\n";
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}