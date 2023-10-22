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
    cout<<998244353/7<<" "<<998244353/17<<endl;
    cout<<998244353/(float)7<<endl;
    while(t--){
        ll n1, n2, hcf, temp, lcm;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    hcf = n1;
    temp = n2;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;

    cout << "LCM = " << lcm;
    }
}