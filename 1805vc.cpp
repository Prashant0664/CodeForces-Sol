#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll help(vector<ll>v1,vector<ll>v2,int i,int m,vector<vector<ll>>&v){
    if(i==v1.size() || m==0){
        ll mini=INT_MAX;
        ll maxi=INT_MIN;
        for(int j=0;j<v1.size();j++){
            mini=min(v1[j],mini);
            maxi=max(maxi,v1[j]);
        }
        return maxi-mini;
    }
    if(v[i][m]!=-1){
        return v[i][m];
    }
    int ns=0;
    ns=help(v1,v2,i+1,m,v);
    int sp=0;
    ll j=v1[i];
    v1[i]=v2[i];
    v2[i]=j;
    sp=help(v1,v2,i+1,m-1,v);
    return v[i][m]=min({sp,ns});
}
void solution(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v1(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    vector<vector<ll>>v(n+1,vector<ll>(m+1,-1));
    // vector<pair<ll,ll>>v;
    priority_queue<vector<ll>>pq;
    priority_queue<vector<ll>,vector<vector<ll>>,greater<vector<ll>>>pq2;

    for(int i=0;i<n;i++){
        cin>>v2[i];
        // v.push_back({v1[i],v2[i]});
        pq.push({v1[i],v2[i],i});
        pq2.push({v1[i],v2[i],i});
    }
    int a=0,b=0;
    set<int>st;
    while(m--){
        auto t=pq.top();
        pq.pop();
        auto t2=pq2.top();
        pq2.pop();
        if(abs(t[0]-t2[1])<abs(t[0]-t2[0]) && abs(t[0]-t2[1])<abs(t[1]-t2[0])){
            st.insert(t2[2]);
            swap(t2[1],t2[0]);
            pq.push(t);
            pq2.push(t2);
       }
       else if(abs(t[1]-t2[0])<abs(t[0]-t2[0]) && abs(t[1]-t2[0])<abs(t[0]-t2[1])){
            st.insert(t[2]);
            swap(t[1],t[0]);
            pq.push(t);
            pq2.push(t2);
       }
       m--;
    }
    cout<<abs(pq.top()[0]-pq2.top()[0])<<endl;
    // cout<<help(v1,v2,0,m,v)<<endl;


    
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
}