#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned int uint;
typedef long long int ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
 
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define MSV(X, V) memset((X), V, sizeof((X)))
#define LEN(X) strlen(X + 1)
#define SIZ(X) ((int)X.size())
#define MP make_pair
#define PB push_back
#define EB emplace_back
 
/* SORT_AND_UNIQUE */
 
template <class T>
void REV (T *a, int n) {
    reverse (a + 1, a + 1 + n);
}
template <class T>
void SRT (T *a, int n) {
    sort (a + 1, a + 1 + n);
}
template <class T>
int UNI (T *a, int n) {
    sort (a + 1, a + 1 + n);
    return unique (a + 1, a + 1 + n) - (a + 1);
}
template <class T>
int POS (T *a, int n, T v) {
    return lower_bound (a + 1, a + 1 + n, v) - a;
}
template <class T>
int fisrtGe (T *a, int n, T v) {
    return lower_bound (a + 1, a + 1 + n, v) - a;
}
template <class T>
int lastLe (T *a, int n, T v) {
    return upper_bound (a + 1, a + 1 + n, v) - a - 1;
}
 
/* READ_AND_WRITE */
 
template <class T>
void _RD (T &x) {
    cin >> x;
}
void _RD (int &x) {
    scanf ("%d", &x);
}
void _RD (uint &x) {
    scanf ("%u", &x);
}
void _RD (ll &x) {
    scanf ("%lld", &x);
}
void _RD (ull &x) {
    scanf ("%llu", &x);
}
void _RD (double &x) {
    scanf ("%lf", &x);
}
void _RD (char &x) {
    scanf (" %c", &x);
}
void _RD (char *x) {
    scanf ("%s", x + 1);
}
template<class T, class U>
void _RD (pair<T, U> &x) {
    _RD (x.first);
    _RD (x.second);
}
void RD() {
}
template <class T, class... U>
void RD (T &head, U &...tail) {
    _RD (head);
    RD (tail...);
}
template <class T>
void RDN (T *a, int n) {
    for (int i = 1; i <= n; ++i)
        _RD (a[i]);
}
 
template <class T>
void _WT (const T &x) {
    cout << x;
}
void _WT (const int &x) {
    printf ("%d", x);
}
void _WT (const uint &x) {
    printf ("%u", x);
}
void _WT (const ll &x) {
    printf ("%lld", x);
}
void _WT (const ull &x) {
    printf ("%llu", x);
}
void _WT (const double &x) {
    printf ("%.12f", x);
}
void _WT (const char &x) {
    putchar (x);
}
void _WT (const char *x) {
    printf ("%s", x + 1);
}
template <class T, class U>
void _WT (const pair<T, U> &x) {
    _WT (x.first);
    putchar (' ');
    _WT (x.second);
}
void WT() {
}
template <class T, class... U>
void WT (const T &head, const U &...tail) {
    _WT (head);
    putchar (sizeof... (tail) ? ' ' : '\n');
    WT (tail...);
}
template <class T>
void WTN (T *a, int n) {
    for (int i = 1; i <= n; ++i) {
        _WT (a[i]);
        putchar (" \n"[i == n]);
    }
}
 
template <class T>
void WTV (const vector<T> &x, bool ln = false) {
    WT (x.size());
    for (auto i = x.begin(); i != x.end(); ++i) {
        _WT (*i);
        putchar (ln ? '\n' : ' ');
    }
    if (!ln)
        putchar ('\n');
}
 
#ifdef LOCAL
#define D1(a)           cerr << #a << " = " << (a) << endl
#define D2(a, b)        cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define D3(a, b, c)     cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " \
                             << #c << " = " << (c) << endl
#define D4(a, b, c, d)  cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " \
                             << #c << " = " << (c) << ", " << #d << " = " << (d) << endl
#define ASSERT(x) assert(x)
#else
#define D1(a)
#define D2(a, b)
#define D3(a, b, c)
#define D4(a, b, c, d)
#define ASSERT(x)
#endif
 
/* CMIN_AND_CMAX */
 
template <typename T>
void cmin (T &x, T y) {
    if (y < x)
        x = y;
}
 
template <typename T>
void cmax (T &x, T y) {
    if (y > x)
        x = y;
}
 
//#ifdef LOCAL
//uint rnd_seed = 19937;
//#else
uint rnd_seed = chrono::duration_cast<chrono::nanoseconds> (
                    chrono::steady_clock::now().time_since_epoch()).count();
//#endif // LOCAL
 
mt19937 rnd (rnd_seed);
 
const int INF = 0x3F3F3F3F;
const ll LINF = 0x3F3F3F3F3F3F3F3FLL;
int MOD = 998244353;
/* MOD must be a prime. if not, don't use inv() */
 
struct ModularIntegers {
#define mint ModularIntegers
    int num;
    mint() {
        num = 0;
    }
    template <typename T>
    mint (const T& x) {
        ll tmp = x;
        if (tmp >= MOD) {
            if (tmp < (MOD << 1)) tmp -= MOD;
            else tmp %= MOD;
        } else if (tmp < 0) {
            if (tmp >= -MOD) tmp += MOD;
            else if (tmp %= MOD) tmp += MOD;
        }
        num = tmp;
    }
    friend mint operator+ (const mint &x, const mint &y) {
        mint res;
        res.num = x.num + y.num;
        if (res.num >= MOD) res.num -= MOD;
        return move (res);
    }
    friend mint operator- (const mint &x, const mint &y) {
        mint res;
        res.num = x.num - y.num;
        if (res.num < 0) res.num += MOD;
        return move (res);
    }
    friend mint operator* (const mint &x, const mint &y) {
        mint res;
        res.num = 1LL * x.num * y.num % MOD;
        return move (res);
    }
    friend mint operator/ (const mint &x, const mint &y) {
        return x * y.inv();
    }
    friend bool operator== (const mint &x, const mint &y) {
        return x.num == y.num;
    }
    friend bool operator!= (const mint &x, const mint &y) {
        return x.num != y.num;
    }
    mint operator+() {
        return +this->num;
    }
    mint operator-() {
        return -this->num;
    }
    mint& operator+= (const mint &x) {
        if ( (this->num += x.num) >= MOD) this->num -= MOD;
        return *this;
    }
    mint& operator-= (const mint &x) {
        if ( (this->num -= x.num) < 0) this->num += MOD;
        return *this;
    }
    mint& operator*= (const mint &x) {
        this->num = 1LL * this->num * x.num % MOD;
        return *this;
    }
    mint& operator/= (const mint &x) {
        this->num = ( (*this) * x.inv()).num;
        return *this;
    }
    mint pow (ll x) const {
        mint res (1), cur (this->num);
        for (; x; cur *= cur, x >>= 1)
            if (x & 1) res *= cur;
        return res;
    }
    mint inv() const {
        return pow (MOD - 2);
    }
    operator int() {
        return num;
    }
    operator uint() {
        return num;
    }
    operator ll() {
        return num;
    }
    operator ull() {
        return num;
    }
#undef mint
};
 
typedef ModularIntegers mint;
 
void _RD (mint &x) {
    scanf ("%d", &x.num);
}
void _WT (const mint &x) {
    printf ("%d", x.num);
}
 
struct custom_hash {
    static uint64_t splitmix64 (uint64_t x) {
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        return x;
    }
    size_t operator () (uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count(); // 时间戳
        return splitmix64 (x + FIXED_RANDOM);
    }
};
int check(vector<string>v,int n,int m,int i,int j){
    if(i>(n-9) || j>(m-9)){
        return 0;
    }
    for(int i1=i;i1<i+3;i1++){
        for(int j1=j;j1<j+3;j1++){
            if(v[i1][j1]=='#'){

            }
            else{
            // cout<<"--";
                return 0;
            }
        }
    }
    for(int i1=i+6;i1<i+9;i1++){
        for(int j1=j+6;j1<j+9;j1++){
            if(v[i1][j1]=='#'){

            }
            else{
                return 0;
            }
        }
    }
    return 1;
}
int check2(vector<string>v,int n,int m,int i,int j){
    int i1=i+3;
    for(int k=j;k<4+j;k++){
        if(v[i1][k]!='.'){
            return 0;
        }
    }
    i1=j+3;
    for(int k=i;k<4+i;k++){
            if(v[k][i1]!='.'){
                return 0;
            }
    }
    i=i+6-1;
    j=j+6-1;
    for(int k=i;k<i+4;k++){
        if(v[k][j]!='.'){
            return 0;
        }
    }
    // ..................
    // cout<<"-> "<<i<<" "<<j<<endl;
    for(int k=j;k<j+4;k++){
        if(v[i][k]!='.'){
            cout<<"---";
            return 0;
        }
    }
    return 1;
}
int partition(vector<int>arr, int low, int high,ll &nm , vector<vector<int>>&ans)
{
    // Choosing the pivot
    int pivot = arr[high];
 
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
 
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
 
            // Increment index of smaller element
            i++;
            swap(arr[i], arr[j]);
            nm++;
            ans.push_back({i+1,j+1});
            // cout<<i<<" "<<j<<endl;
        }
    }
    swap(arr[i + 1], arr[high]);
            nm++;
            ans.push_back({i+1,high+1});
    return (i + 1);
}
void quickSort(vector<int>arr, int low, int high,ll &nm , vector<vector<int>>&v)
{
    if (low < high) {
 
        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high,nm,v);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1,nm,v);
        quickSort(arr, pi + 1, high,nm,v);
    }
}
void selectionSort(vector<ll> &arr, int n, ll &nm, vector<vector<ll>>&ans)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (min_idx != i){
            swap(arr[min_idx], arr[i]);
            ans.push_back({min_idx+1,i+1});
            }
    }
}
void bubbleSort(vector<ll> &arr, int n,ll &nm,vector<vector<ll>>&ans)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                ans.push_back({j+1,j+2});
                swapped = true;
            }
        }
  
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        ll nm=0;
        int n;
        cin>>n;
        vector<ll>v(n);
        vector<vector<ll>>v2(n);
        priority_queue<vector<ll>>pq;
        ll pmax=-99;
        ll mmin=90;
        ll lar=-100;
        ll sma=100;
        ll si=0;
        ll mi=0;
        ll nc=0;
        ll pc=0;
        ll zc=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0){
                nc++;
            }
            else if(v[i]>0){
                pc++;
            }
            else{
                zc++;
            }
            pmax=max(pmax,v[i]);
            mmin=min(mmin,v[i]);
            if(lar<=v[i]){
                lar=v[i];
                mi=i+1;
            }if(sma>=v[i]){
                sma=v[i];
                si=i+1;
            }
            lar=max(lar,v[i]);
            sma=min(sma,v[i]);
            v2[i]={v[i],i};
            pq.push({v[i],i});
        }
        // cout<<si<<endl;
        if(pmax<=0){

        }
        int ucnt=0;
        for(int i=n-1;i>=0;i--){
            ll maxi=-22;
            ll mini=21;
            for( int j=0;j<n;j++){
                maxi=max(maxi,v[j]);
                mini=max(mini,v[i]);
            }
            if(maxi==mini){
                ucnt=1;
            }
        }

        vector<vector<ll>>ans;
        vector<vector<ll>>ans2;
            // int i=0;
            // int j=i-1;
            // cout<<ans.size()<<endl;
            // for(i=0;i<ans.size();i++){
            //     cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
            // }
 
    if(ucnt){ 
        cout<<"0\n";continue;; 
    } 
    if(mmin>=0){ 
        cout<<n-1<<"\n"; 
        for(ll i=0;i<n-1;i++){ 
            cout<<i+2<<" "<<i+1<<"\n"; 
        } 
        continue;
   }
   else if(pmax<=0){ 
        cout<<n-1<<"\n"; 
        for(ll i=n-2;i>=0;i--){ 
            cout<<i+1<<" "<<i+2<<"\n"; 
        } 
        continue;; 
    } 
    else{
        // cout<<"--<<"<<pmax<<endl;
        if(pmax>abs(mmin)){
            if(pc<nc){
                
            }
            for(int i=0;i<n;i++){
                if(v[i]<0){
                    v[i]=v[i]+pmax;
                    ans.push_back({i+1,mi});
                }
            }
            for(ll i=0;i<n-1;i++){ 
                ans.push_back({i+2,i+1});
            } 
        }
        // 20 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
        else{
            // cout<<si<<"000\n";
            for(int i=0;i<n;i++){
                if(v[i]>0){
                    v[i]=v[i]+mmin;
                    ans.push_back({i+1,si});
                }
            }
            for(ll i=n-2;i>=0;i--){ 
                
                ans.push_back({i+1,i+2});
                // cout<<i+1<<" "<<i+2<<"\n"; 
            } 
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }

    }

    // ll pct=0,nct=0; 
    // for(ll i=0;i<n;i++){ 
    //     if(v[i]>=0){ 
    //         pct++; 
    //     } 
    //     else{ 
    //         nct++; 
    //     } 
    // } 
    



    // if(pmax>=abs(mmin)){ 
    //     ll l=0; 
    //     for(ll i=0;i<n;i++){ 
    //         if(v[i]==pmax){ 
    //             l=i+1; 
    //         } 
    //     } 
    //     vector<pair<ll,ll>> pe; 
    //     for(ll i=0;i<n;i++){ 
    //         if(pmax!=v[i] && v[i]<0){ 
    //             pe.push_back({i+1,l}); 
    //             v[i]+=pmax; 
    //         } 
    //     } 
    //     for(ll i=0;i<n-1;i++){ 
    //         pe.push_back({i+2,i+1}); 
    //     } 
    //     cout<<v.size()<<"\n"; 
    //     for(ll i=0;i<v.size();i++){ 
    //         cout<<pe[i].first<<" "<<pe[i].second<<"\n"; 
    //     } 
    // } 
    // else{ 
    //     ll l=0; 
    //     for(ll i=0;i<n;i++){ 
    //         if(v[i]==mmin){ 
    //             l=i+1; 
    //         } 
    //     } 
    //     vector<pair<ll,ll>> pe; 
    //     for(ll i=0;i<n;i++){ 
    //         if(mmin!=v[i] && v[i]>0){ 
    //             pe.push_back({i+1,l}); 
    //             v[i]+=mmin; 
    //         } 
    //     } 
    //     for(ll i=n-2;i>=0;i--){ 
    //         pe.push_back({i+1,i+2}); 
    //     } 
    //     cout<<v.size()<<"\n"; 
    //     for(ll i=0;i<v.size();i++){ 
    //         cout<<pe[i].first<<" "<<pe[i].second<<"\n"; 
    //     } 
    // } 

    }
    return 0;
}
/*
9 9
###......
###......
###......
.........
.........
.........
......###
......###
......###
*/