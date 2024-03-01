#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, s2, s3;
        ll a, b, c, n, m, k;
        vector<ll> v;
        vector<vector<ll> > v2;
        ll ans = 0;
        ll f1, f2, f3, f4, f5, f6;
        f1 = f2 = f3 = f4 = f5 = f6 = 0;
        // cin>>s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            vector<ll>cf;
            cf.pb(b);
            cf.pb(a);
            v2.push_back(cf);
        }
        f1=INT_MAX;
        // sort(v2.begin(), v2.end());
        for(int i=0;i<n;i++){
            if(v2[i][0]>=3){
                if(v2[i][0]%2){
                    f1=min(f1,v2[i][1]+(v2[i][0]/2));
                }
                else{
                    f1=min(f1,v2[i][1]+(v2[i][0]/2-1));
                }
            }
            else{
                f1=min(f1,v2[i][1]);
            }
            // v2[i][1]=v2[i][0]+v2[i][1]/2;
        }
        cout<<f1<<endl;
        int sa=0;
        for(int i=1;i<n;i++){
            sa+=v2[i][1];
            if(v2[i-1][1]<=v2[i][0]){
                ans=sa;
                break;
            }
        }
        // cout<<ans<<endl;
        continue;
        for (int i = 0; i < n; i++)
        {
            v.push_back(v2[i][1]/2);
        }
        int i = 0;
        // ans = v2[i][0];
        /*
        cout<<ans<<endl;
        int i=0;
        int small=v2[0][1]/2;
        for(int i=0;i<n;i++){
            if(v2[i][1]/2<small){
                small=v2[i][1];
            }
        }
        while(1){
            for(int i=0;i<)
            v2[i][1]--;
            if(v2[i][1]<=0){

            }
        }
        cout << ans << endl;
        */
    }
    return 0;
}