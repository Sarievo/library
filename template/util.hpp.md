---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: "template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
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

    inline long long Sum(const vector<T> &v) { return accumulate(begin(v), end(v),
    0LL); }

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

    '
  code: 'namespace Nyan {

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

    inline long long Sum(const vector<T> &v) { return accumulate(begin(v), end(v),
    0LL); }

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

    '
  dependsOn: []
  isVerificationFile: false
  path: template/util.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2022-12-17 14:51:31+08:00'
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
