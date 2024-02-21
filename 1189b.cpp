// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// void solution(){
//     ll n,m;
//     cin>>n;
//     // string s;
//     // cin>>s;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     vector<ll>v2(n,-1);
//     ll mid=n/2;
//     ll i=mid,j=mid+1,ik=0;
//     for(;ik<n;ik+=2){
//         if(i<0){
//             break;
//         }
//         v2[i]=v[ik];
//         i--;
//         if(j>=n){
//             break;
//         }
//         v2[j]=v[ik+1];
//         j++;
//         cout<<"-";
//     }
//     if(j!=0){
//         while(j!=0){
//             v2[j]=v[ik];
//             j--;
//             ik++;
//         }
//     }
//     if(i<n-1){
//         while(i<n){
//             v2[i]=v[ik];
//             i++;
//             ik++;
//         }
//     }

//     for(int i=1;i<n-1;i++){
//         if(v[i]>=(v[i-1]+v[i+1])){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     if(v[0]>=(v[n-1]+v[1])){
//         cout<<"NO"<<endl;
//             return;
//     }
//     if(v[n-1]>=(v[n-2]+v[0])){
//         cout<<"NO"<<endl;
//             return;
//     }
//     cout<<"YES"<<endl;
//     for(int i=0;i<v2.size();i++){
//         cout<<v2[i]<<" ";
//     }
//     return;
// } 
// // 7 5 1 4 6 8
// int main(){
//     int _=1;
//     // cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solution(){
    ll n,m;
    cin>>n;
    // string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<ll>v2;
    v2.push_back(v[n-2]);
    v2.push_back(v[n-1]);
    for(int i=n-3;i>=0;i--){
        v2.push_back(v[i]);
    }
    for(int i=1;i<n-1;i++){
        if(v2[i]>=(v2[i-1]+v2[i+1])){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(v2[0]>=(v2[n-1]+v2[1])){
        cout<<"NO"<<endl;
            return;
    }
    if(v2[n-1]>=(v2[n-2]+v[0])){
        cout<<"NO"<<endl;
            return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return;
} 
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}