namespace Nyan {
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
using vb = vector<bool>;
using vd = vector<double>;
using vvi= vector<vi>;
using vvl= vector<vl>;
using vvc= vector<vc>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vp = vector<pl>;
template<typename T> using V = vector<T>;
template<typename T> using VV = vector<vector<T>>;
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
constexpr int dx[]{+0, +1, +0, -1, +1, +1, -1, -1};
constexpr int dy[]{+1, +0, -1, +0, +1, -1, -1, +1};
void Yes(bool b = true) { cout << (b ? "Yes" : "No") << "\n"; }
void YES(bool b = true) { cout << (b ? "YES" : "NO") << "\n"; }
void No(bool b = true) { cout << (b ? "No" : "Yes") << "\n"; }
void NO(bool b = true) { cout << (b ? "NO" : "YES") << "\n"; }

}  // namespace Nyan
