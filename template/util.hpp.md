---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: magic/astar.hpp
    title: A Star (A*) Path-Finding
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
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

    namespace NYAN {

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


    }  // namespace NYAN

    '
  code: 'namespace NYAN {

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


    }  // namespace NYAN

    '
  dependsOn: []
  isVerificationFile: false
  path: template/util.hpp
  requiredBy:
  - magic/astar.hpp
  - template/template.hpp
  timestamp: '2022-12-05 21:00:34+08:00'
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
