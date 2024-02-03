#include <bits/stdc++.h>
using namespace std;
void help(){
    int a,b,c,d,e,f,g,h,i;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    // e=0;
    // e=0;
    f=0;
    g=0;
    h=0;
    i=0;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[]={1,10,100,1000,10000};
        int n;
        // cin>>n;
        string s;
        cin>>s;
        n=s.size();
        
        int highs=-1;
        int highind=-1;
        for(int i=0;i<n;i++){
            if((int)s[i]>highs){
                highs=int(s[i]);
                highind=i-1;
            }
        }
        int lowe=-1;
        int lowendind=-1;
        for(int i=n-1;i>=0;i--){
            if((int)s[i]>lowe){
                lowendind=i+1;
                lowe=int(s[i]);
            }
        }
        if(s[i]==)
        
        

    }
    return 0;
}
