#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        int c=0;
        for(int i=0;i<12;i++){
            string s;
            cin>>s;
            for(int j=0;j<4;j++){
                if(s[j]=='#')c++;
            }
        }
        int f=0;
        int arr[]={1,4,9,16,25,36,49,64};
        for(int i=0;i<8;i++){
            if(c==arr[i]){
                f=9;
                cout<<"Yes"<<endl;
            }
        }
        if(f==0)cout<<"No\n";
    }
}