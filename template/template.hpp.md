---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/IO.hpp
    title: IO
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/verify-aoj-alds/example.test.cpp
    title: verify/verify-aoj-alds/example.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
    links: []
  bundledCode: "#line 2 \"template/template.hpp\"\n// #pragma GCC target(\"avx2\"\
    )\n// #pragma GCC optimize(\"O3\",\"unroll-loops\")\n#include <bits/stdc++.h>\n\
    #line 3 \"template/IO.hpp\"\n#define INT(...) int __VA_ARGS__;scan(__VA_ARGS__)\n\
    #define LL(...) long long __VA_ARGS__;scan(__VA_ARGS__)\n#define STR(...) string\
    \ __VA_ARGS__;scan(__VA_ARGS__)\n#define CHR(...) char __VA_ARGS__;scan(__VA_ARGS__)\n\
    #define DBL(...) double __VA_ARGS__;scan(__VA_ARGS__)\n#define LD(...) long double\
    \ __VA_ARGS__;scan(__VA_ARGS__)\n#define END(...) {print(__VA_ARGS__);return;}\n\
    using namespace std;\ntemplate<typename T, typename U>\nostream &operator<<(ostream\
    \ &os, pair<T, U> &p) {\n  os << p.first << \" \" << p.second;\n  return os;\n\
    }\ntemplate<typename T, typename U>\nistream &operator>>(istream &is, pair<T,\
    \ U> &p) {\n  is >> p.first >> p.second;\n  return is;\n}\ntemplate<typename T>\n\
    ostream &operator<<(ostream &os, vector<T> &v) {\n  for (auto it = v.begin();\
    \ it != v.end();) {\n    os << *it << ((++it) != v.end() ? \" \" : \"\");\n  }\n\
    \  return os;\n}\ntemplate<typename T>\nistream &operator>>(istream &is, vector<T>\
    \ &v) {\n  for (T &e : v)is >> e;\n  return is;\n}\nvoid scan() {}\ntemplate<class\
    \ T, class...U>\nvoid scan(T &t, U &...u) {\n  cin >> t;\n  scan(u...);\n}\ntemplate<class\
    \ T>\nvoid print(const T &t) { cout << t << '\\n'; }\ntemplate<class T, class...U>\n\
    void print(const T &t, const U &...u) {\n  cout << t << ' ';\n  print(u...);\n\
    }\ntemplate<class...T>\nvoid fin(const T &...a) {\n  print(a...);\n  exit(0);\n\
    }\nstruct Nyan {\n  Nyan() {\n    cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n\
    \    cout.tie(nullptr);\n    cout << fixed << setprecision(12);\n    cerr << fixed\
    \ << setprecision(12);\n  }\n};\n/**\n * @brief IO\n*/\n#line 6 \"template/template.hpp\"\
    \n#define overload4(a, b, c, d, e, ...) e\n#define overload3(a, b, c, d, ...)\
    \ d\n#define rep1(a) for(ll i=0;i<(ll)(a);i++)\n#define rep2(i, a) for(ll i=0;i<(ll)(a);i++)\n\
    #define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)\n#define rep4(i, a, b, c)\
    \ for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))\n#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\n\
    #define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)\n#define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)\n\
    #define rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)\n#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)\n\
    #define fore(...) for(auto&&__VA_ARGS__)\n#define all1(i) begin(i),end(i)\n#define\
    \ all2(i, a) begin(i),begin(i)+a\n#define all3(i, a, b) begin(i)+a,begin(i)+b\n\
    #define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)\n#define rall(n)\
    \ (n).rbegin(),(n).rend()\n#define pb push_back\n#define eb emplace_back\nusing\
    \ namespace std;\nusing ll = long long;\nusing ull= unsigned long long;\nusing\
    \ ld = long double;\nusing vl = vector<ll>;\nusing vi = vector<int>;\nusing vs\
    \ = vector<string>;\nusing vc = vector<char>;\nusing vvl= vector<vl>;\nusing pi\
    \ = pair<int, int>;\nusing pl = pair<ll, ll>;\nusing vvc= vector<vc>;\nusing vd\
    \ = vector<double>;\nusing vp = vector<pl>;\nusing vb = vector<bool>;\nconstexpr\
    \ int dx[]{+0, +1, +0, -1, +1, +1, -1, -1};\nconstexpr int dy[]{+1, +0, -1, +0,\
    \ +1, -1, -1, +1};\ntemplate<typename T, typename U>\ninline bool chmax(T &a,\
    \ U b) { return a < b && (a = b, true); }\ntemplate<typename T, typename U>\n\
    inline bool chmin(T &a, U b) { return a > b && (a = b, true); }\ntemplate<class\
    \ T> using maxheap = priority_queue<T, vector<T>, less<T>>;\ntemplate<class T>\
    \ using minheap = priority_queue<T, vector<T>, greater<T>>;\n/**\n * @brief Template(\u30C6\
    \u30F3\u30D7\u30EC\u30FC\u30C8)\n*/\n"
  code: "#pragma once\n// #pragma GCC target(\"avx2\")\n// #pragma GCC optimize(\"\
    O3\",\"unroll-loops\")\n#include <bits/stdc++.h>\n#include \"IO.hpp\"\n#define\
    \ overload4(a, b, c, d, e, ...) e\n#define overload3(a, b, c, d, ...) d\n#define\
    \ rep1(a) for(ll i=0;i<(ll)(a);i++)\n#define rep2(i, a) for(ll i=0;i<(ll)(a);i++)\n\
    #define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)\n#define rep4(i, a, b, c)\
    \ for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))\n#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\n\
    #define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)\n#define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)\n\
    #define rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)\n#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)\n\
    #define fore(...) for(auto&&__VA_ARGS__)\n#define all1(i) begin(i),end(i)\n#define\
    \ all2(i, a) begin(i),begin(i)+a\n#define all3(i, a, b) begin(i)+a,begin(i)+b\n\
    #define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)\n#define rall(n)\
    \ (n).rbegin(),(n).rend()\n#define pb push_back\n#define eb emplace_back\nusing\
    \ namespace std;\nusing ll = long long;\nusing ull= unsigned long long;\nusing\
    \ ld = long double;\nusing vl = vector<ll>;\nusing vi = vector<int>;\nusing vs\
    \ = vector<string>;\nusing vc = vector<char>;\nusing vvl= vector<vl>;\nusing pi\
    \ = pair<int, int>;\nusing pl = pair<ll, ll>;\nusing vvc= vector<vc>;\nusing vd\
    \ = vector<double>;\nusing vp = vector<pl>;\nusing vb = vector<bool>;\nconstexpr\
    \ int dx[]{+0, +1, +0, -1, +1, +1, -1, -1};\nconstexpr int dy[]{+1, +0, -1, +0,\
    \ +1, -1, -1, +1};\ntemplate<typename T, typename U>\ninline bool chmax(T &a,\
    \ U b) { return a < b && (a = b, true); }\ntemplate<typename T, typename U>\n\
    inline bool chmin(T &a, U b) { return a > b && (a = b, true); }\ntemplate<class\
    \ T> using maxheap = priority_queue<T, vector<T>, less<T>>;\ntemplate<class T>\
    \ using minheap = priority_queue<T, vector<T>, greater<T>>;\n/**\n * @brief Template(\u30C6\
    \u30F3\u30D7\u30EC\u30FC\u30C8)\n*/"
  dependsOn:
  - template/IO.hpp
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2022-12-05 15:41:22+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/verify-aoj-alds/example.test.cpp
documentation_of: template/template.hpp
layout: document
title: Template
---

- [x] in-stream and out-stream overloading
- [x] variable initialization

credits: [MtSaka](https://github.com/MtSaka/library)