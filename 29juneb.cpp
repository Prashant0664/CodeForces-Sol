#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        cin>>s1>>s2;
        long long int a,b;
        cin>>a>>b;
        int t=0;
        queue<vector<long long int>>v;
        queue<vector<char>>v2;
        long long int st=0;
        while(b--){
            int c;
            cin>>c;
            if(c==1){
                int m;
                cin>>m;
                m--;
                v2.push({s1[m],s2[m]});
                s1[m]='.';
                s2[m]='.';
                v.push({st,st+a,m});
                st++;
                if(v.size()>0 && v.front()[1]<st){
                int mm=v.front()[2];
                s1[mm]=v2.front()[0];
                s2[mm]=v2.front()[1];
                v.pop();
                v2.pop();
            }
            }
            else if( c==2){
 
                int a1,a2,b1,b2;
                cin>>a1>>a2>>b1>>b2;
                a2--;
                b2--;
                if(a1==1 && b1==1){
                    swap(s1[a2],s1[b2]);
                }
                else if( a1==1 && b1==2){
                    swap(s1[a2],s2[b2]);
 
                }
                
                else if( a1==2 && b1==1){
                    swap(s2[a2],s1[b2]);
 
                }
                
                else if( a1==2 && b1==2){
                    swap(s2[a2],s2[b2]);
 
                }
                st++;
                if(v.size()>0 && v.front()[1]<st){
                int mm=v.front()[2];
                s1[mm]=v2.front()[0];
                s2[mm]=v2.front()[1];
                v.pop();
                v2.pop();
            }
            }
            else{
                st++;
                if(v.size()>0 && v.front()[1]<st){
                int mm=v.front()[2];
                s1[mm]=v2.front()[0];
                s2[mm]=v2.front()[1];
                v.pop();
                v2.pop();
            }
                string s11="";
                string s22="";
                for(int i=0;i<s1.length();i++){
                    if(s1[i]!='.'){
                        s11+=s1[i];
                    }
                    if(s2[i]!='.'){
                        s22+=s2[i];
                    }
                }
                int f=0;
                if(s11!=s22){
                    cout<<"NO"<<endl;
                    f=1;
                }
                if(f==0){
                    cout<<"YES"<<endl;
                }
            }
        }
    }
}