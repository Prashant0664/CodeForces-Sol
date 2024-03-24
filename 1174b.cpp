#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<"\n";
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    vector<pair<ll,ll>>odd;
    vector<pair<ll,ll>>even;
    vector<ll>v(n);
    ll f=0,ff=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            f=1;
            even.push_back({v[i],i});
        }
        else{
            ff=1;
            odd.push_back({v[i],i});
        }
    }
    if(f==0 || ff==0){
        for(int i=0;i<n;i++){
            ps(v[i]);
        }
        endo;
        return;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        ps(v[i]);
    }
    endo;
    return;
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==1){
            if(j<even.size() && even[j].first<v[i]){
                if(even[j].second>i){
                swap(v[i],v[even[j].second]);
                j++;
                }
            }
        }
        else{
            if(k<odd.size() && odd[k].first<v[i]){
                if(odd[k].second>i){
                swap(v[i],v[odd[k].second]);
                k++;}
            }
        }
    }
    for(int i=0;i<n;i++){
        ps(v[i]);
    }
    endo;
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}