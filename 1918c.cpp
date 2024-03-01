#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m,k;
    cin>>n;
    cin>>m>>k;
    string s;
    ll a=n,b=m,r=k;
    ll q=a,w=b,e=r;
        if (q > w) {
            swap(q, w);
        }
        ll bec = w - q;
        ll z = 0;
        for (ll i = 30; i >= 0; --i) {
            if ((q ^ w) >> i & 1) {
                if (z + (1 << i) <= e) {
                    if (0 == (q >> i & 1)) {
                        if (1 << (i + 1) <= bec) {
                            z += (1 << i);
                            bec -= (1 << (1 + i));
                        }
                    }
                }
            }
        }
        cout << bec << endl;
}
int main(){
    int _=1;
    cin>>_;
    while(_--){
        solution();
    }
    return 0;
}