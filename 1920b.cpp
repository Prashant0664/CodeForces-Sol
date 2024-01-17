// , k, k1 = map(int, input().split())
//     a = list(map(int, input().split()))
//     sum = 0
//     for i in range(len(a)):
//         sum += a[i]
//     a.sort(reverse=True)
//     for i in range(k1):
//         sum -= 2 * a[i]
//     mx = sum
//     ind = k1
//     for i in range(k):
//         sum += a[i]
//         if ind < n:
//             sum -= 2 * a[ind]
//         ind += 1
//         mx = max(mx, sum)
//     print(mx)

// t = 1
// t = int(input())
// while t > 0:
//     void()
//     t -= 1

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    
    void solution(){
        ll n,m,k,x;
        cin>>n>>k>>x;
        // string s;
        // cin>>s;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=0;i<min(n,x);i++){
            sum-=v[i]*2;
        }
        ll ans=sum;
        ll jk=x;
        for(int i=0;i<k;i++){
            sum+=v[i];
            if(jk<n){
                sum-=v[jk]*2;
            }
            jk++;
            ans=max(ans,sum);
        }
        // cout<<"\n- "<<ans<<" - \n";
        cout<<ans<<endl;
        return;
    }
    int main(){
        int _=1;
        cin>>_;
        while(_--){
            solution();
            // cout<<"-";
        }
        return 0;
    }