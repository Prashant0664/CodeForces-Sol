#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;

bool isPerfectSquare(ll n)
{
    // Base case: 0 and 1 are perfect squares
    if (n <= 1) {
        return true;
    }
 
    // Initialize boundaries for binary search
    long long left = 1, right = n;
 
    while (left <= right) {
 
        // Calculate middle value
        long long mid = left + (right - left) / 2;
 
        // Calculate square of the middle value
        long long square = mid * mid;
 
        // If the square matches n, n is a perfect square
        if (square == n) {
            return true;
        }
 
        // If the square is smaller than n, search the right
        // half
        else if (square < n) {
 
            left = mid + 1;
        }
 
        // If the square is larger than n, search the left
        // half
        else {
 
            right = mid - 1;
        }
    }
 
    // If the loop completes without finding a perfect
    // square, n is not a perfect square
    return false;
}
vector<ll> printDivisors(ll n)
{
    vector<ll>v;
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                v.pb(i);
            else 
            v.pb(i),v.pb(n/i);
        }
    }
    return v;
}
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (ll i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        if(n<=5){cout<<"No\n";continue;}
        vector<ll>nums=printDivisors(n);
        int c=0;
        
        if(nums.size()<=2){
            cout<<"No"<<endl;
            continue;
        }
        sort(nums.begin(),nums.end());
        vector<ll>vv(2,0);
        ll mul=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1 || nums[i]==n) continue;
            if(isPrime(nums[i])){
                c+=1;
                cout<<nums[i]<<" ";
                mul*=nums[i];
                if(mul==n){
                    break;
                }
            }
        }
        if(c<2) cout<<"NO\n";
        else{
            ll a=n/vv[0];
            ll b=n/vv[1];
            if((a+b)>n){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }
        continue;
        ll a=nums[0],b=1;
        bool kl=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){

            b*=nums[i];
            cout<<nums[i]<<" ";
        }
        if(a+b==n ){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        continue;
        float d=n*n-4*n;
        if(d<0) {cout<<"NO\n";continue;}
        bool p=isPerfectSquare(ll(d));
        if(!p) {cout<<"NO\n";continue;}
        ll u1=n+sqrt(d);
        ll u2=n-sqrt(d);
        if(u1<=0 || u2<=0 || u1%2==1 || u2%2==1 ){
            cout<<"NO\n";
        }else{
            cout<<u1/2<<" "<<u2/2<<" ";
            cout<<"YES\n";
        }


    }
}