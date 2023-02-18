#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int c=0;
        for(int i=0;i<n;i++){
            int h;
            cin>>h;
            if(h==2){
                c++;
            }
            v.push_back(h);
        }
        if(c%2!=0){
            cout<<-1<<endl;
        }
        else{
            c/=2;
            int ans=0;
            for(int i=0;i<n;i++){
                if(v[i]==2){
                    ans++;
                }
                if(ans==c){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}