#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    cin>>m;
    string s;
    // cin>>s;
    multiset<ll>ms;
    multiset<ll>st;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ms.insert(x);
        st.insert(x);
    }
    ll ans=0;
    ll w=m;
    int height = 1, space_left = m;

        while (!st.empty()) {
            auto it = st.upper_bound(space_left);
            if (it != st.begin()) {
                it--;
                int val = *it;
                space_left -= val;
                st.erase(it);
            } else {
                space_left = m;
                height++;
            }
        }
    while(!ms.empty()){
        auto t=ms.upper_bound(w);
        if(t!=ms.begin()){
            t--;
            w-=*t;
            ms.erase(t);
        }
        else{
            ans++;
            w=m;
        }
    }
    pn(height);
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