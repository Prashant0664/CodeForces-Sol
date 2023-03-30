#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) { 
long long int n;
cin>>n;
long double l= -1;
        long long int r = 1e9;
        while (r - l > 1) {
            long long int mid = (l + r) / 2;
            if (mid * mid >= n)
                r = mid;
            else
                l = mid;
        }
        cout<<(r - 1)<<endl;


    }
    return 0;
}
