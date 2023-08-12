// #include <bits/stdc++.h>
// using namespace std;
 
// typedef unsigned int uint;
// typedef long long int ll;
// typedef unsigned long long ull;
// typedef pair<int, int> pii;
// typedef pair<ll, int> pli;
// typedef pair<int, ll> pil;
// typedef pair<ll, ll> pll;
 

// #define MP make_pair
// #define PB push_back
// #define EB emplace_back
// #define forn(ik,n) for(int i=0; i<(n); ++i) 
// #define vll(a,n) forn(i,n) cin>>a[i];
// #define vii(a,n) forn(i,n) cin>>a[i];

// int main()
// {
//   ll t = 1;
//   cin>>t;
//   while (t--){
//     int n;
//     cin >> n;
//     ll ans=0;
//     ll k;
//     cin>>k;
//     vector<ll>v(n);
//     ll maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         maxi=max(v[i],maxi);
//     }
//     if(n<=2){
//         ll h=(abs(v[0]-v[1]));
//         if(h<k){
//             cout<<max(v[0],v[1])<<endl;
//             continue;
//         }
//         cout<<(max(v[0],v[1])+1)<<endl;
//         continue;
//         h=k-h;
//         if(h%2==1){
//             cout<<(1+max(v[0],v[1])+h/2);
//             continue;
//         }
//         cout<<(max(v[0],v[1])+h/2);
//         continue;
//     }
//     int s=INT_MAX;
//     int ind=0;
//     int fl=0;
//     for(int i=2;i<n;i++){
//         if((abs(v[i]-v[i-1])+abs(v[i-1]-v[i-2]))<s){
//             if(v[i]>=v[i-1] && v[i-1]>=v[i-2]){
//                 s=(abs(v[i]-v[i-1])+abs(v[i-1]-v[i-2]));
//                 ind=i;
//                 fl=1;
//             }
//         }
//         else{
            
//         }
//     }
//     if(fl){
//         int f=0;
//         ll h=max(abs(v[ind]-v[ind-1]),abs(v[ind-1]-v[ind-2]));
//         ll h2=min(abs(v[ind]-v[ind-1]),abs(v[ind-1]-v[ind-2]));
//         ll a=abs(v[ind]-v[ind-1]);
//         ll b=abs(v[ind-1]-v[ind-2]);
//         ll x=v[ind];
//         ll y=v[ind-1];
//         ll z=v[ind-2];
//         if(k<=h2){
//             cout<<maxi<<endl;
//         }
//         if(k<=h){
//             cout<<maxi<<endl;
//         }
//         if(k<=(h+h2)){
//             k-=(h+h2);
//             if(k==0){
//                 cout<<max(maxi,max(x,max(y,z)));
//                 continue;
//             }
//             else{

//             }

//         }
//         if(k>(h+h2)){

//         }
//     }
//   }
//   return 0;
// }