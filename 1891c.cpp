// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// #define mod 1000000007
// typedef long long int ll;

// void solution(){
//     ll n,m;
//     cin>>n;
//     // cin>>m;
//     string s;
//     // cin>>s;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     int i=0,j=n-1;
//     ll sum=0;
//     ll ans=0;
//     while(i<j){
//         sum+=v[i];
//         ans+=v[i];
//         v[i]=0;
//         if(sum>=v[j]){
//             sum-=v[j];
//             v[j]=0;
//             j--;
//             ll k=v[j];
//             v[j]-=sum;
//             sum=0;
//             ans++;
//         }
//         i++;
//     }
//     // pn(sum);
//     // pn(ans);
//     // // 1 2 2 3 4 5
//     // 4 6 6 6 6

//     printv(v);
//     if(i==j && v[j]!=0){
//         v[j]-=sum;
//         if(sum)ans++;
//         ans+=v[j]/2+(v[j]%2);
//     }
//     pn(ans);
//     return;
// }
// int main(){
//     int _=1;
//     cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
// int t, n, a[200005];
// long long sum, res, ans;
void work() {
    long long n,ans=0,c=0;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),greater<long long>());
    int i=0,j=n-1;
    while(i<j){
        long long x=min(v[i]-c,v[j]);
        if(v[i]<=x+c){
            v[i]=0;
            i++;
            ans++;
            ans+=x;
            v[j]-=(x);
            if(v[j]==0)j--;
            c=0;
        }
        else{
            c+=x;
            ans+=x;
            v[j]-=x;
            j--;
        }
    }
    if(v[i]==0 || i>j){
        cout<<ans<<endl;
        return;
    }
    if(v[i]==1){
        cout<<ans+1<<endl;
        return;
    }
    if(c>=v[i]){
        ans++;
    }
    else{
        v[i]-=c;
        ans+=(v[i]+1)/2;
        ans++;
        }
    cout<<ans<<endl;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) work();
    return 0;
}