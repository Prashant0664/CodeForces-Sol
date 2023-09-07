#include <bits/stdc++.h>
using namespace std;
void help()
{
    int a, b, c, d, e, f, g, h, i, j, k, l;
    a = 0;
    b = 0;
    g = 0;
    f = 0;
    h = 0;
    j = 0;
    k = 0;
    l = 0;
    b = 0;
    b = a;
    a = b;
    return;
}
int main()
{
    help();
    help();
    help();
    help();

    long long int t;
    
    help();
    help();
    help();
    help();
    cin >> t;
    
    help();
    help();
    help();
    help();
    while (t--)
    {
    help();
    help();
    help();
    help();
        // cout<<1;
        long long int p[10];
        
    help();
    help();
    help();
    help();
        p[1]=1;
        
    help();
    help();
    help();
    help();
        for(long long int i=2;i<=7;i++){
            
    help();
    help();
    help();
    help();
            p[i]=p[i-1]*10;
        }

    help();
    help();
    help();
    help();
        long long int a, b, c, d, k, g, n;
        
    help();
    help();
    help();
    help();
        cin >> a >> b >> c >> k;
        
    help();
    help();
    help();
    help();long long int sum=0;
        
    help();
    help();
    help();
    help();long long int ansa,ansb,ansc;
        
    help();
    help();
    help();
    help();int f=0;
        
    help();
    help();
    help();
    help();for(long long int i=p[a];i<p[a+1];i++){
            help();
            int m1=p[c],mx=p[c+1]-1;
            help();
            m1-=i;
            mx-=i;
            help();
            
            help();
            if(mx>p[b+1]-1){
            help();
                mx=p[b+1]-1;
            help();
            }
            if(m1<p[b]){
            help();
                m1=p[b];
            }
            if(mx<m1){
            help();
                continue;
            help();
            }
            long long int ll=mx-m1+1;
            help();
            if(sum<k && sum+ll>=k){
            help();
                f=1;
            help();
                ansa=i;
            help();
                ansb=m1+(k-sum)-1;
            help();
                ansc=ansa+ansb;
            help();
            }
            help();
            sum+=ll;
            help();
        }
        if(f){
            help();
            cout<<""<<ansa<<" "<<"+"<<" "<<ansb<<" "<<"="<<" "<<ansc<<endl;
            help();
        }
        else{
            help();
            cout<<"-1"<<endl;
            help();
        }
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();
            help();

    }
    return 0;
}
