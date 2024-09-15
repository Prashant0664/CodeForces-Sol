// /*
//        ___      _      ___     ____   _    _   ____     _____  
//       |_  |    / \    |_ _|   / ___| | |  | | |  _ \   |_   _| 
//         | |   / _ \    | |    \___ \ | |__| | | |_) |    | |   
//     |___| |  / ___ \   | |     ___) ||  __  | |  _ <    _| |_  
//     |_____| /_/   \_\ |___|   |____/ |_|  |_| |_|  \_\ |_____|

//                   ____         _      __  __ 
//                  |  _ \       / \    |  \/  |
//                  | |_) |     / _ \   | \  / |
//                  |  _ <     / ___ \  | |\/| |
//                  |_|  \_\  /_/   \_\ |_|  |_|

// */
// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// #define mod 1000000007
// #define pll pair<ll,ll>
// #define pii pair<int,int>
// typedef long long int ll;

// void __print(int x) {cerr << x;}
// void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
// void __print(unsigned x) {cerr << x;}
// void __print(unsigned long x) {cerr << x;}
// void __print(unsigned long long x) {cerr << x;}
// void __print(float x) {cerr << x;}
// void __print(double x) {cerr << x;}
// void __print(long double x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}

// template<typename T, typename V>
// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif
// set<int>st;

// bool isprime(ll x){
//     if(x==1){
//         return false;
//     }
//     ll lim=sqrt(x);
//     for(int i=2;i*i<=x;i++){
//         if(i>=lim)break;
//         if(x%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// vector<int> normalSieve(int n)
// {
//     vector<int>v={2};
//     bool prime[n / 2];
//     memset(prime, false, sizeof(prime));
//     for (int i = 3; i * i < n; i += 2) {
//         if (prime[i / 2] == false)
//             for (int j = i * i; j < n; j += i * 2)
//                 prime[j / 2] = true;
//     }
//     for (int i = 3; i < n; i += 2)
//         if (prime[i / 2] == false)
//             v.push_back(i);
//     return v;
// }
// vector<ll>help(ll n){
//     vector<ll>v;
//     for(auto &i:st){
//         if(n%i==0){
//             v.push_back(i);
//         }
//     }
//     return v;
//     for(int i=1;i<n;i++){
//         if(n%i==0){
//             if(st.find(i)!=st.end())v.push_back(i);
//             if(n/i!=i && st.find(n/i)!=st.end()){
//                 v.push_back(n/i);
//             }
//         }
//     }
//     return v;
// }

// void solution(){
//     ll n,m;
//     cin>>n;
//     cin>>m; 
//     ll n2=n,m2=m;
//     ll k;
//     cin>>k;
//     if(k==1){
//         if(n==1 || m==1){
//             pn("YES");
//             return;
//         }
//     }
//     vector<ll>v1=help(n),v2=help(m);
//     int c1=0;
//     int i=0;
//     // sort(v1.begin(),v1.end());
//     // sort(v2.begin(),v2.end());
//     while(n>1 && i<v1.size()){
//         if(v1[i]==1){
//             i++;
//             continue;
//         }
//         if(n%v1[i]==0){
//             c1++;
//             n/=v1[i];
//         }
//         else{
//             i++;
//         }
//     }
//     i=0;
//     int c2=0;
//     while(m>1 && i<v2.size()){
//         if(v2[i]==1){
//             i++;
//             continue;
//         }
//         if(m%v2[i]==0){
//             c2++;
//             m/=v2[i];
//         }
//         else{
//             i++;
//         }
//     }
//     int c3=0;
//     if(gcd(n2,m2)==n2 || gcd(n2,m2)==m2){
//         c3++;
//     }
//     else if(n2!=m2){
//         c3+=2;
//     }
//     if(k==1){
//         if(c3==1 && m2!=n2){
            
//         }
//         else{
//             // cout<<c3<<" "<<m2<<" "<<n2<<endl;
//             pn("NO");
//             return;
//         }
//     }
//     // debug(c1+c2,c2,k); 
//     if(c1+c2>=k && k>=c3 && k==1 && c3==1){
//         pn("YES");
//         return;
//     }
//     else if(c1+c2>=k && k>=c3 && k!=1){
//         pn("YES");
//     }
//     else{
//         pn("NO");
//     }


//     return;
// }
// int main(){
//     int _=1;
//     cin>>_;
//     vector<int>v=normalSieve(100000);
//     st.clear();
//     for(auto &i:v)st.insert(i);
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using cd = complex<ld>;

const int N = 50'000;

bool isPrime[N];
vector<int> primes;

void precalc() {
  fill(isPrime + 2, isPrime + N, true);
  for (int i = 2; i * i < N; i++) {
    for (int j = i * i; j < N; j += i) {
      isPrime[j] = false;
    }
  }
  for (int i = 2; i < N; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }
}

int calcPrime(int n) {
  int res = 0;
  for (int i : primes) {
    if (i * i > n) {
      break;
    }
    while (n % i == 0) {
      n /= i;
      res++;
    }
  }
  if (n > 1) {
    res++;
  }
  return res;
}

map<int, int> decompose(int n) {
  map<int, int> a;
  for (int i : primes) {
    if (i * i > n) {
      break;
    }
    int p = 0;
    while (n % i == 0) {
      n /= i;
      p++;
    }
    if (p > 0) {
      a[i] = p;
    }
  }
  if (n > 1) {
    a[n] = 1;
  }
  return a;
}

bool check(const map<int, int> &divs,
           map<int, int>::const_iterator it,
           map<int, int> &divsA,
           map<int, int> &divsB,
           int low,
           int high,
           int k) {
  if (it == divs.end()) {
    return __builtin_popcount(low) <= k && k <= high;
  }
  for (int p = 0; p <= it->second; p++) {
    int pa = divsA[it->first];
    int pb = divsB[it->first];
    int nextLow = low;
    if (p != pa) {
      nextLow |= 1;
    }
    if (p != pb) {
      nextLow |= 2;
    }
    if (check(divs, next(it), divsA, divsB, nextLow, high + pa + pb - 2 * p, k)) {
      return true;
    }
  }
  return false;
}

void solve() {
  int a, b, k;
  cin >> a >> b >> k;
  int g = __gcd(a, b);
  int low = 0;
  int high = 0;
  {
    int t;
    int ta = 1;
    while ((t = __gcd(a, g)) != 1) {
      a /= t;
      ta *= t;
    }
    high += calcPrime(a);
    if (a != 1) {
      low |= 1;
    }
    a = ta;
  }
  {
    int t;
    int tb = 1;
    while ((t = __gcd(b, g)) != 1) {
      b /= t;
      tb *= t;
    }
    high += calcPrime(b);
    if (b != 1) {
      low |= 2;
    }
    b = tb;
  }
  auto divs = decompose(g);
  auto divsA = decompose(a);
  auto divsB = decompose(b);
  cout << (check(divs, divs.begin(), divsA, divsB, low, high, k) ? "YES" : "NO") << endl;
}

int main() {
  precalc();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}