 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll jifdejivnijer(vector<ll>& arr) {
    ll n = arr.size();
    ll hfrhevbhbfvbejbc = 0;
 
    for (ll i = 0; i < n; i++) 
        if (arr[i] < arr[hfrhevbhbfvbejbc])
            hfrhevbhbfvbejbc = i;
 
    ll res = hfrhevbhbfvbejbc;
    for (ll i = hfrhevbhbfvbejbc; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) {
            res = -1;
            break;
        }
    return res;
}
 

ll ans(){
    ll n;
        cin >> n;
 
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        return jifdejivnijer(arr);
}


int main(){
    int _=1;
    cin>>_;
    while(_--){
       cout<<ans()<<endl;;
    }

    return 0;
}
