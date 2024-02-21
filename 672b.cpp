#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    cin>>s;
    if(n>26){
        cout<<-1<<endl;
        return;
    }
    set<char> st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    cout<<n-st.size()<<endl;
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