#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int h=n*2;
        int c=1;
        long long int sap=n;
        while(n>0){
            n-=c;
            c+=1;
        }
        c--;
        if(c*(c+1)>sap*2){
            c--;
        }
        int s1=0;
        int s2=0;
        int f=0;
        int n1;
        int n2;
        for(int i=1;i<=c;i+=2){
            if(f=0){
                n1+=2;
            s1+=i;
            s1+=i+1;f=1;}
            else{
                n2+=2;
                f=0;
                s2+=i;
                s2+=i+1;
            }
        }
        if(c>n1+n2){
            if(f){
                s1-=(s1+s2-c);
            }
            else{
                s2-=(s1+s2-c);
            }
        }
        if(n>=0)
        s1+=n;

        cout<<s1<<" " << s2<<endl;

    }
    return 0;
}