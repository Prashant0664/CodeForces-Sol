#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned int uint;
typedef long long int ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
 

#define MP make_pair
#define PB push_back
#define EB emplace_back
#define forn(ik,n) for(int i=0; i<(n); ++i) 
#define vll(a,n) forn(i,n) cin>>a[i];
#define vii(a,n) forn(i,n) cin>>a[i];

int main()
{
  ll t = 1;
  cin>>t;
  while (t--){
    string s;
    cin>>s;
    string ans=s;
    ll n=s.length();
    string sans=s;
    int c=0;
    string ch="";
    if(s[0]>='5'){
        cout<<1;
        for(int i=0;i<n;i++){
            cout<<"0";
        }
        cout<<endl;
        continue;
    }
    ch=ch+"1";
    s="0"+s;
    int j=n;
    // for(int i=0;i<=n;i++){
        // cout<<s[i]<<" ";
    // }
    for(int i=n;i>=1;i--){
        ch=ch+"0";
        if(s[i]>='5'){
            s[i-1]++;
            int k=i;
            int jj=k;
            // for(k;k<=j;k++)
                // s[k]='0';
            j=jj;
        }
    }
    // cout<<j<<" j \n";
    for(int i=j;i<=n;i++){
        s[i]='0';
    }
    
    // for(int i=0;i<=n;i++){
        // cout<<s[i]<<" ";
    // }
    if(s[0]>'9'){
        cout<<ch;
        cout<<endl;
        continue;
    }
    else{
        if(s[0]=='0'){
            for(int i=1;i<=n;i++){
                cout<<s[i]<<"";
            }
            cout<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }


    // for(int i=n-1;i>=0;i--){
    //     if(c==0){
    //         if(s[i]>='5'){
    //             c=1;
    //         }
    //         else if(s[i]<'5'){
    //             c=0;
    //         }
            
    //     }
    //     else{
    //         if(s[i]=='9'){
    //             c=1;
    //         }
    //         else if(s[i]>='5'){
    //             c=1;
    //         }
    //         else{
    //             s[i]+=1;
    //             if(s[i]=='5'){
    //                 c=1;
    //             }
    //             else{
    //                 c=0;
    //             }
    //         }
    //         ans=s;
    //     }
    //     ch=ch+"0";
    //     s[i]='0';
    //     // sans=s;
    // }
    // if(c==1){
    //     ans="1"+ch;
    // }
    // cout<<max(ans,sans)<<endl;
  }
  return 0;
}