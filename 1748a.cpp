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
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        ll a,b,n,k;
        cin>>n;
        vector<ll>v(n);
        ll sum=0;
        ll ans=0;
        bool flag=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0 && i>=1){
                ans+=1;
                sum=0;
            }
            else if(v[i]==0){
                ans++;
                sum=0;
            }
            else{
                sum+=v[i];
                if(sum==0){
                    ans++;
                }
            }
        


        // cout<<i<<" "<<ans<<", ";
        }
        sum=0;
        ll ans2=0;
        for(int i=n-1;i>=0;i--){
            // cin>>v[i];
            if(v[i]==0 && i>=1){
                ans2+=1;
                sum=0;
            }
            else if(v[i]==0){
                ans2++;
                sum=0;
            }
            else{
                sum+=v[i];
                if(sum==0){
                    ans2++;
                }
            }
        


            // cout<<i<<" "<<ans2<<", ";
        }
        // cout<<endl;
        cout<<max(ans,ans2)<<endl;

    }
    return 0;
}