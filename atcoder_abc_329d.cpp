#include<bits/stdc++.h>
using namespace std;
struct cmp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first < b.first;
    }
};
int main(){
  int n,m;
  cin>>n>>m;
  priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q;
  vector<int>v(200005,0);
  for(int i=0;i<m;i++){
    int h;
    cin>>h;



    v[h]++;
    pair<int,int>pp={v[h],h};
    q.push(pp);




    auto t=q.top();
    // vector<pair<int,int>>vv;
    // vv.push_back(t);
    // q.pop();
    // while(!q.empty() && q.top().first==t.first){
    //     if(t.second>q.top().second){
    //         t=q.top();
    //     }
    //     vv.push_back(q.top());
    //     q.pop();
    // }
    // for(auto ii:vv){
    //     q.push(ii);
    // }
    cout<<t.second<<endl;

  }
//   while(!q.empty()){
    // cout<<q.top().first<<" "<<q.top().second<<endl;
    // q.pop();
//   }
}