---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: magic/astar.hpp
    title: A* Pathfinding
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: "Template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/verify-aoj-alds/example.test.cpp
    title: verify/verify-aoj-alds/example.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "template/util.hpp"

    namespace Nyan {

    using ll = long long;

    using ld = long double;

    using vi = vector<int>;

    using vl = vector<ll>;

    using vc = vector<char>;

    using vs = vector<string>;

    using vb = vector<bool>;

    using vd = vector<double>;

    using vvi = vector<vi>;

    using vvl = vector<vl>;

    using vvc = vector<vc>;

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

    inline long long Sum(const vector<T> &v) { return accumulate(begin(v), end(v),
    0LL); }

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

    '
  code: 'namespace Nyan {

    using ll = long long;

    using ld = long double;

    using vi = vector<int>;

    using vl = vector<ll>;

    using vc = vector<char>;

    using vs = vector<string>;

    using vb = vector<bool>;

    using vd = vector<double>;

    using vvi = vector<vi>;

    using vvl = vector<vl>;

    using vvc = vector<vc>;

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

    inline long long Sum(const vector<T> &v) { return accumulate(begin(v), end(v),
    0LL); }

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

    '
  dependsOn: []
  isVerificationFile: false
  path: template/util.hpp
  requiredBy:
  - magic/astar.hpp
  - template/template.hpp
  timestamp: '2022-12-11 16:58:12+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/verify-aoj-alds/example.test.cpp
documentation_of: template/util.hpp
layout: document
redirect_from:
- /library/template/util.hpp
- /library/template/util.hpp.html
title: template/util.hpp
---
