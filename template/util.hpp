using ll = long long;
using ull= unsigned long long;
using ld = long double;
using vl = vector<ll>;
using vi = vector<int>;
using vs = vector<string>;
using vc = vector<char>;
using vvl= vector<vl>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vvc= vector<vc>;
using vd = vector<double>;
using vp = vector<pl>;
using vb = vector<bool>;
constexpr int dx[]{+0, +1, +0, -1, +1, +1, -1, -1};
constexpr int dy[]{+1, +0, -1, +0, +1, -1, -1, +1};
template<typename T, typename U>
inline bool chmax(T &a, U b) { return a < b && (a = b, true); }
template<typename T, typename U>
inline bool chmin(T &a, U b) { return a > b && (a = b, true); }
template<class T> using maxheap = priority_queue<T, vector<T>, less<T>>;
template<class T> using minheap = priority_queue<T, vector<T>, greater<T>>;
void yes(bool x) { std::cout << (x ? "yes" : "no") << endl; }
void Yes(bool x) { std::cout << (x ? "Yes" : "No") << endl; }
void YES(bool x) { std::cout << (x ? "YES" : "NO") << endl; }
