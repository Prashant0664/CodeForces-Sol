#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int ans=0;
        priority_queue<long long int>q;
        for(int i=0,x;i<n;i++){
            cin>>x;
            if(x==0){
                if(q.size()==0){
                    continue;
                }
                else{
                    ans=(ans%1000000007+q.top()%1000000007)%1000000007;
                    q.pop();
                }
            }
            else{
                q.push(x);
            }
        }
        cout<<(ans%1000000007)<<endl;
    }
    return 0;
}
