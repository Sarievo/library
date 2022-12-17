namespace Nyan {
typedef long long ll;
typedef long double ld;
typedef __int128_t i128;
using vl = vector<ll>;
using pl = pair<ll, ll>;
using vp = vector<pl>;
template<typename T> using v = vector<T>;
template<typename T> using vv = vector<vector<T>>;
template<typename T>
inline T sqr(const T &x) { return (x * x); }
template<typename T, typename U>
inline bool chmax(T &a, U b) { return a < b && (a = b, true); }
template<typename T, typename U>
inline bool chmin(T &a, U b) { return a > b && (a = b, true); }
template<typename T>
inline T Max(const vector<T> &v) { return *max_element(begin(v), end(v)); }
template<typename T>
inline T Min(const vector<T> &v) { return *min_element(begin(v), end(v)); }
template<typename T>
inline long long Sum(const vector<T> &v) { return accumulate(begin(v), end(v), 0LL); }
template<class T> using maxheap = priority_queue<T>;
template<class T> using minheap = priority_queue<T, vector<T>, greater<T>>;
constexpr ll MOD = 1000000007;
constexpr ll mod = 998244353;
const int INF32 = INT_MAX / 2;
const ll INF64 = 1LL << 60;
void Yes(bool b = true) { cout << (b ? "Yes" : "No") << "\n"; }
void YES(bool b = true) { cout << (b ? "YES" : "NO") << "\n"; }
vector<int> dx{+0, +1, +0, -1, +1, +1, -1, -1};
vector<int> dy{+1, +0, -1, +0, +1, -1, -1, +1};

}  // namespace Nyan
