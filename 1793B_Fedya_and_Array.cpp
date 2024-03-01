#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int k=2*(n-m);
        cout<<k<<endl;
        int ptr=0;
        int arr[k];
    for (long long int c = m; c <= n; ++c) {
        arr[ptr++] = c;
    }
    for (long long int c = n - 1; c > m; --c) {
        arr[ptr++] = c;
    }
    for (int i = 0; i < k; ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    }
    return 0;
}