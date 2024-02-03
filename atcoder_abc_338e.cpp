#include <bits/stdc++.h>
using namespace std;

void findIntersection(vector<pair<int, int> > v, int n)
{
    vector<pair<int, int> > data;
    vector<vector<int> > answer(n);
    for (int i = 0; i < n; i++) {
        data.push_back(make_pair(v[i].first, i));
        data.push_back(make_pair(v[i].second, i));
    }
    sort(data.begin(), data.end());
    int curr = 0;
    set<pair<int, int> > s;
    for (auto it : data) {
        if (curr >= n)
            break;
        if (s.count(it))
            s.erase(it);
        else {
            int i = it.second;
            int j = v[i].second;
            for (auto k : s) {
                if (k.first > j)
                    break;
                int index = k.second;
                
                cout<<"Yes\n";
                return;
            }
            s.insert(make_pair(j, i));
        }
    }
    
    cout<<"No\n";
}

int main()
{
    int n = 6;
    cin>>n;
    
    vector<pair<int, int> > v(n);
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        if(a<=b){
            v[i].first=a;
            v[i].second=b;
        }
        else{
            v[i].first=b;
            v[i].second=a;
        }
    }
    findIntersection(v, n);
    return 0;
}
