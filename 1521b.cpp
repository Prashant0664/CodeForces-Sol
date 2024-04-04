#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    int n; cin >> n;
        int x = 1e9 + 7, pos = -1;
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            if (a < x) x = a, pos = i;
        }
        cout << n - 1 << endl;
        for (int i = 0; i < n; ++i) {
            if (i == pos) continue;
            cout << pos + 1 << ' ' << i + 1 << ' ' << x << ' ' << x + abs(i - pos) << "\n";
        }
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