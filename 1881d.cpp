

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void help(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<ll,ll>m;
    for(int i=0;i<n;i++){
        ll k=v[i];
        while (n%2 == 0)  
        {  
            m[2]++;
            k = k/2;  
        }  
        for (int i = 3; i <= sqrt(k); i = i+2)  
        {  
            while (k%i == 0)  
            {  
                m[i]++; 
                k = k/i;  
            }  
        }  
        if (k > 2)  
            m[k]++;
    }

    for(auto [i,j] : m){
        if(i==1)continue;
        if(j%n!=0){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}
int main(){
    int _;
    cin>>_;
    while(_--){
        help();
    }
    return 0;
}