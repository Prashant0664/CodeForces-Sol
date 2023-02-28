// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s1;
//         string s2;
//         cin>>s1>>s2;
//         unordered_map<char,int>m1;
//         int n1=s1.length();
//         int n2=s2.length();
//         for(int i=0;i<n1;i++){
//             m1[s1[i]]++;
//         }
//         int f=0;
//         int g=0;
//         string ans="";
//         if(s1[0]!=s2[0]){
//             ans="*";
//         }
//         else{
//             ans=s1[0];
//         }
//         int h=0;
//         for(int i=1;i<n2;i++){
//             if(m1[s2[i]]>0){
//                 f+=m1[s1[i]];
//                 g=m1[s1[i]];
//             }
//             if(g>=2&&h+1!=i){
//                 ans+="*";
//                 ans+=s2[i];
//                 ans+="*";
//                 ans+=s2[i];
//                 break;
//             }
//             else if(g>0&&h+1!=i){
//                 ans+="*";
//                 ans+=s2[i];
//             }
//             else if(m1[s2[i]]>0){
//                 ans+=s2[i];
//             }
//             if(f>=2){
//                 break;
//             }
//             g=0;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        long long int n=s1.length();
        long long int m=s2.length();
        if(n==1 && m==1){
            if(s1==s2){
                cout<<"YES";
                cout<<endl;
                cout<<s1;
                cout<<endl;
            }
            else{
                cout<<"NO";
                cout<<endl;
            }
        }
        else if(s1[0]==s2[0] || s1[n-1]==s2[m-1]){
            cout<<"YES";
            cout<<endl;
            if(s1[0]==s2[0]){
                cout<<s2[0]<<"*"<<endl;
            }
            else{
                cout<<"*"<<s1[n-1];
                cout<<endl;
            }
        }
        else{
            int h=0;
            for( int i=0;i<n;i++){
                if(h==1){
                    break;
                }
                for(int j=0;j<m;j++){
                    if(h==1){
                        break;
                    }
                if(s1[i]==s2[j]){
                    if(i<n-1 && j<m-1){
                        if(s1[i+1]==s2[j+1]){
                            cout<<"YES"<<endl;
                            cout<<"*";
                            cout<<s1[i]<<s1[i+1];
                            cout<<"*";
                            cout<<endl;
                            h=1;
                            break;
                        }
                    }
                }
                }
            }
            if(h==0){
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}