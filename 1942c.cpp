#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
 
 
 void help(ll n, vector<ll>v){
    ll m=v.size();
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<m-1;i++){
        if((v[i+1]-v[i])==2){
            ans++;
        }
    }
    if(v[m-1]==n-1 && v[0]==1){
        ans++;
    }
    else if(v[m-1]==n && v[0]==2){
        ans++;
    }
    cout<<ans+max(0LL,m-2)<<endl;
    return;
 }
void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    ll k;
    cin>>k;
    ll ans=0;
    ll a=m;
     vector<ll> pos(a);
        for (ll i = 0; i < a; i++) {
            cin >> pos[i];
        }
        vector<ll> v;
        sort(pos.begin(), pos.end());
        set<ll>ff;
        for (ll i = 0; i < a; i++) {
            
            if (k>0 && (pos[(i + 1) % a] + n - pos[i]) % n >=4) {
                for(int h=1;h<((pos[(i + 1) % a] + n - pos[i]) % n);h+=2){
                    pos.push_back((pos[i]+h) % n+1);
                    k--;
                    if(k<=0)break;
                }
                // k--;
            }
            // v.push_back(pos[i]);
        }
        for(auto i:pos){
            ff.insert(i);
        }
        vector<ll>pos3;
        for(auto i:ff){
            pos3.push_back(i);
        }
        sort(pos3.begin(), pos3.end());
        a=pos3.size();
        for (ll i = 0; i < a; i++) {
            if (k>0 && (pos3[(i + 1) % a] + n - pos3[i]) % n >=3) {
                pos3.push_back((pos3[i]+1) % n);
                k--;
            }
            // v.push_back(pos[i]);
        }
        // for(auto i:pos){
            // cout<<i<<" ";
        // }
        // cout<<endl;
        set<ll>st;
        for(auto i:pos3){
            st.insert(i);
        }
        vector<ll>pos2;
        for(auto i:st){
            pos2.push_back(i);
        }
        a=pos2.size();
        sort(pos2.begin(), pos2.end());
        for (ll i = 0; i < a; i++) {
            if ((pos2[(i + 1) % a] + n - pos2[i]) % n == 2) {
                v.push_back((pos2[i]+1) % n + 1);
            }
            v.push_back(pos2[i]);
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        help(n,v);
        // cout << max(0LL,(ll)(v.size()) - 2) << "\n";
    // sort(v.begin(),v.end());
    // vector<ll>v2;
    // for(int i=0;i<m;i++){
    //     if((v[(i + 1) % m] + n - v[i]) % n == 2){
    //         // v.push_back(v[i]+2);
    //         // k--;
    //         // ans++;
    //         v2.push_back(((v[i]%n)+1));
    //     }
    //     v2.push_back(v[i]);
    //     // cout<<v[i+1]-v[i]<<" ";
    // }
    
    //     sort(v2.begin(), v2.end());
    //     v2.erase(unique(v2.begin(), v2.end()), v2.end());
    // cout<<max(0, static_cast<int>(v.size()) - 2)<<endl;
    // if(k>0){

    // }
    // if(v[m-1]==n-1 && v[0]==1){
    //     ans++;
    // }
    // else if(v[m-1]==n && v[0]==2){
    //     ans++;
    // }

    // cout<<ans+max(0LL,m-2)<<endl;
    // cout<<"---"<<endl;
    return;
}
int main(){
     int t;
    cin >> t;

    while (t--) {
        solution();
        // int n, a, b;
        // cin >> n >> a >> b;

        // if (n == 2) {
        //     cout << "2\n";
        //     continue;
        // }

        // vector<int> pos(a);
        // for (int i = 0; i < a; i++) {
        //     cin >> pos[i];
        // }

        // sort(pos.begin(), pos.end());

        // vector<int> v;
        // for (int i = 0; i < a; i++) {
        //     if ((pos[(i + 1) % a] + n - pos[i]) % n == 2) {
        //         v.push_back((pos[i]) % n + 1);
        //     }
        //     v.push_back(pos[i]);
        // }

        // sort(v.begin(), v.end());
        // v.erase(unique(v.begin(), v.end()), v.end());

        // cout << max(0, static_cast<int>(v.size()) - 2) << "\n";
    }

    return 0;
}