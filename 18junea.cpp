#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int c=0;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            if(m==1){
                c++;
            }
            v.push_back(m);
        }
        int c2=n-c;

        if(c2==0){
            cout<<0<<endl;
        }
        // else if(c==0){
        //     if(c2%2==0){
        //         if((c2/2)%2==1){
        //             cout<<(c2/2+1);
        //         }
        //         else{
        //             cout<<c2/2<<endl;
        //         }
        //     }
        //     else{
        //         if(c2==1){
        //             cout<<1<<endl;
        //         }
        //         else if((c2-c2/2+1)%2==1){
        //             cout<<c2/2+1+1<<endl;
        //         }
        //         else{
        //             cout<<c2/2+1<<endl;
        //         }
        //     }
        // }
        else if(c==c2){
            if(c2%2==0)
            cout<<0<<endl;
            else{
                cout<<1<<endl;
            }
        }
        else
            if(c2<c){
                if(c2%2==1){
                    cout<<1<<endl;
                }
                else{
                    cout<<0<<endl;
                }
            }
            else{
                if(c2%2==1){
                    int i=0;
                    while(c<c2){
                        c++;
                        i++;
                        c2--;
                    }
                    if(c2%2==1){
                        cout<<i+1<<endl;
                    }
                    else{
                        cout<<i<<endl;
                    }
                }
                else{
                    int h=n/2;
                    int d=c2-h;
                    if(h%2!=0){
                        d++;
                    }
                    cout<<d<<endl;
                }
            }
        
    }
    return 0;
}
    