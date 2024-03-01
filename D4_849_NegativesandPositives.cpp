#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int ne=0;
        int f=0;
        long long int sum=0;
        for(int i=0,x;i<n;i++){
            cin>>x;
            if(x<0){
                ne++;
            }
            sum=(sum+abs(x));
            v.push_back(abs(x));
            // cout<<sum<<"--";
        }
                sort(v.begin(),v.end());
        if(ne & 1) sum -= 2 * v[0];
        cout<<sum<<endl;
        // if(ne%2==0){
        //     cout<<sum<<endl;
        // }
        // else{
        //     if(f){
        //         cout<<sum<<endl;
        //     }
        //     else{
        //         long long int g=0;
        //         int ff=0;
        //         for(int i=0;i<n-1;i++){
        //             if(v[i]<=0&&v[i+1]>0){
        //                 g=v[i];
        //                 ff=1;
        //                 break;
        //             }
        //         }
        //         if(ff==1){
        //                 sum+=2*g;
        //             }
        //             else{
//             #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         int n; cin >> n;
//         vector<int> a(n);
//         long long sum = 0;
//         int negs = 0;
        // for(int i = 0; i < n; ++i) {
        //     cin >> a[i];
        //     if(a[i] < 0) {
        //         ++negs;
        //         a[i] = -a[i];
        //     }
        //     sum += a[i];
        // }
        // sort(a.begin(), a.end());
        // if(negs & 1) sum -= 2 * a[0];
        // cout << sum << "\n";
//     }
// }

//         //                 sum+=2*v[n-1];
        //             }
        //         cout<<sum<<endl;
        //     }
        // }

    }
    return 0;
}