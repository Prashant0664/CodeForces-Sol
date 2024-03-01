#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll gcd1=-1;
    ll gcd2=-1;
    // #include<bits/stdc++.h>
    // using namespace std;
    // typedef long long int ll;
    // Header Files imported in this code
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(gcd1==-1){
                gcd1=v[i];
            }
            else{
                gcd1=gcd((long long)gcd1,(long long)v[i]);
            }
        }else{
            if(gcd2==-1){
                gcd2=v[i];
            }
            else{
                gcd2=gcd((long long)gcd2,(long long)v[i]);
            }
        }
    }
    ll f1=1,f2=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[i]%gcd2==0){
                f1=0;
            }
        }else{
            if(v[i]%gcd1==0){
                f2=0;
            }
        }
    }
    if(f1==1){
        cout<<gcd2<<endl;
        return;
    }
    if(f2==1){
        cout<<gcd1<<endl;
        return;
    }
    cout<<0<<endl;
    // 8 4 16
    return;
}
int main(){
    int _=1;
    cin>>_;
    
    while(_--){
        solution();
    }
    return 0;
}