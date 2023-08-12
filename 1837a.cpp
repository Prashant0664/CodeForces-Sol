#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool areBracketsBalanced(string s) {
        int i=-1;
        for(auto& ch:s){
            if(ch=='(' || ch=='{' || ch=='[')
                s[++i]=ch;
            else{
                if(i>=0 && ((s[i]=='(' && ch==')') || (s[i]=='{' && ch=='}') || (s[i]=='[' && ch==']')))
                    i--;
                else
                    return false;
            }
        }
        return i==-1;
    }
int main()
{
    int t;
    cin>>t;
    // t=1;
    while (t--)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        vector<ll>v1(n,0);
        vector<ll>v2;
        ll sum=0;
        priority_queue<pair<ll,ll>>p;
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            p.push({m,i});
            v1[i]=m;
        }
        // k--;
        for(ll i=0;i<n-k;i++){
            v1[p.top().second]=-1;
            p.pop();
        }
        ll j=0;
        for(ll i=0;i<n;i++){
            if(v1[i]==-1){
                continue;
            }
            v2.push_back(v1[i]);
            sum+=v1[i];
        }
        ll ls=0;
        ll i=0;
        ll ans=INT_MIN;
        // for(int i=0;i<k;i++){
        //     cout<<v2[i]<<" ";
        // }
        // cout<<endl;
        int diff=INT_MAX;
        while(i<k){
            ls+=v2[i];
            sum-=v2[i];
            i++;
            if(abs(ls-sum)<diff){
                diff=abs(ls-sum);
                ans=max(ls,sum);
            }
        }
        cout<<ans<<endl;
        cout<<(1LL<<50);

    }
    return 0;
}