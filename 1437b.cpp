 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;
 
 void solution(){
     ll n,m=0;
     cin>>n;
     string s;
     cin>>s;
     for(int i=0;i<n;i++){
        if(s[i]==s[(i+1)%n]){
            m++;
        }
     }
     cout<<m/2<<endl;
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