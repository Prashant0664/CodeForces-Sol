#include<bits/stdc++.h>
using namespace std;
const long long int INF=1e18;
typedef long long int ll;

void solve() {
    
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll ans = 1;
        ll lsp = 1;
        ll a, b, c;
        pair<ll, ll> result;
        ll msa = INF;
        ll retire = 0;
        cin >> a >> b >> c;

        vector<ll> sela(b);
        for(ll i = 0; i < b; i++) {
            cin >> sela[i];
        }
        for(ll i = 0; i < b; i++) {
            ll dist = sela[i] - lsp;
            if(sela[i] == 1) continue;
            else {
                if(dist%c!=0){
                    ans=ans+dist/c;
                    ans++;
                }
                else if(dist%c==0){
                    ans=ans+dist/c;
                }
            }
        }

        ll dist = a - lsp;
        if(sela[b - 1] != a) {
            if(dist%c!=0){
                ans=ans+dist/c;
            }
            else{
                ans=ans+dist/c;
                ans++;
            }
        }
        for(ll i = 0; i < b; i++) {
            ll curr = ans;
            ll lsp = (i == 0) ? 1 : sela[i - 1];

            ll nsp = (i == b - 1) ? a + 1 : sela[i + 1];

            curr -= (sela[i] - lsp) / c;
            curr -= (nsp - sela[i] - 1) / c;
            curr += (nsp - lsp - 1) / c;

            if(curr < msa) {
                msa = curr;
                retire = 1;
            } else if(curr == msa) {
                retire++;
            }
        }
        cout << msa << " " << retire << endl;
    }
    return 0;
}
