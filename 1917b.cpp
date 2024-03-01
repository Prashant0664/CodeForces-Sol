#include<bits/stdc++.h>
using namespace std;

void kndecjknkjed(){
    set<char>st;
    long long n;
    int f=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v(900,0);
    for(int i=0;i<n;i++)
        if(v[s[i]-'a'])
            f=1;
        else
            v[s[i]-'a']=1;
    long long c=0;
    /*
    abc
    bc
    ac
    c
    b
    a
    a
    a
    aa
    */    

    for(int i=0;i<n;i++){
        st.insert(s[i]);
        c=c+st.size();
    }
    if(f==0){
        cout<<n*(n+1)/2<<endl;
        return;
    }
    cout<<c<<endl;
    
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        kndecjknkjed();
    }
}