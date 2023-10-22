#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return 1;
    return 0;
}
void help(){
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    int k=m%n;
    int c=0;
    for(int i=0;i<=25;i++){
        if(isSubstring(s2,s1)){
            cout<<c<<endl;
            return;
        }
        c++;
        s1+=s1;
        if(s1.length()>50){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        help();
    }
}