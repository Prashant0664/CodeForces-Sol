#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solution(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    vector<ll>v1(44,0);
    vector<ll>v2(44,0);
    for(int i=0;i<n;i++){
        if(s[i]<='Z' && s[i]>='A'){
            v2[s[i]-'A']++;
        }
        else if(s[i]<='z' && s[i]>='a'){
            v1[s[i]-'a']++;
        }
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(v1[i]<v2[i]){
            c+=v1[i];
            v2[i]-=v1[i];
            v1[i]=0;
        }
        else{
            c+=v2[i];
            v1[i]-=v2[i];
            v2[i]=0;
        }
    }
    for(int i=0;i<26;i++){
        if(k==0){
            break;
        }
        if(v1[i]>0){
            int mm=0;
            mm=min({v1[i]/2,k});
            c+=mm;
            k-=mm;
        }
        else if(v2[i]>0){
            int mm=0;
            mm=min({v2[i]/2,k});
            k-=mm;
            c+=mm;
        }
    }
    cout<<c<<endl;
    return;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
}