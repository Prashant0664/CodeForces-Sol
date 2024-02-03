#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solution(){
    ll n,m;
    cin>>n;
    string s;
    // cin>>s;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    return;
}
void findIntersection(vector<pair<int,int>>v,int n){
    set<pair<int,int>>s;
    
}
int main(){
    int n = 6;
   
    // initialise the vector
    vector<pair<int, int> > v = { { 9, 12 },
                                  { 2, 11 },
                                  { 1, 3 },
                                  { 6, 10 },
                                  { 5, 7 },
                                  { 4, 8 } };
   
    findIntersection(v, n);
   
    return 0;
}