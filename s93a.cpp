#include <bits/stdc++.h>
using namespace std;
void help(){
    int j=0;
    int k=0;
    int ll=0;
    int oo=0;
    int hh=0;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                e++;
            }
            else o++;
        }
        int N=1e9+7;
        long long prod=1;
        for(int i=1;i<=e;i++){
            prod=((prod%N*2))%N;
        }
        if(o!=0){
            cout<<prod<<endl;
        }
        else{
            cout<<(prod-1)%N<<endl;
        }

    }

    return 0;
}
