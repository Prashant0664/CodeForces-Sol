#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n>>m;
    int f=0;
    if(n*m%2==0)
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                cout<<"B";
                continue;
            }
            if(j%2==1 && i%2==0){
                cout<<"B";
            }
            else if(j%2==0 && i%2==0){
                cout<<"W";
            }
            else if(j%2==1 && i%2==1){
                cout<<"W";
            }
            else if(j%2==0 && i%2==1){
                cout<<"B";
            }
        }
        cout<<endl;
    }
        else{
            for(int i=0;i<m;i++){
                if(i%2==0){
                    cout<<"B";
                    continue;
                }
                else{
                    cout<<"W";
                }
            }
        cout<<endl;

            for(int i=0;i<n-1;i++){
                for(int j=0;j<m;j++){
                    if(i%2==0){
                        cout<<"W";
                    }
                    else{
                        cout<<"B";
                    }
                }
        cout<<endl;

            }
        /*
        BBBBB
        WWWWW
        BWBWB
        WWWWW
        BBBBB
        */
    }
    // 
    // BB
    // WB
    // WB
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