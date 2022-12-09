---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/io.hpp
    title: template/io.hpp
  - icon: ':heavy_check_mark:'
    path: template/macro.hpp
    title: template/macro.hpp
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: "Template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  - icon: ':heavy_check_mark:'
    path: template/util.hpp
    title: template/util.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
  bundledCode: "#line 1 \"verify/verify-aoj-alds/example.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\n#line\
    \ 2 \"template/template.hpp\"\n// #pragma GCC target(\"avx2\")\n// #pragma GCC\
    \ optimize(\"O3\",\"unroll-loops\")\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n// macros\n#line 1 \"template/macro.hpp\"\n#define fi first\n#define\
    \ se second\n#define overload4(a, b, c, d, e, ...) e\n#define overload3(a, b,\
    \ c, d, ...) d\n#define rep1(a) for(ll i=0;i<(ll)(a);i++)\n#define rep2(i, a)\
    \ for(ll i=0;i<(ll)(a);i++)\n#define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)\n\
    #define rep4(i, a, b, c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))\n#define rep(...)\
    \ overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\n#define rrep1(a) for(ll\
    \ i=(ll)(a)-1;i>=0;i--)\n#define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)\n#define\
    \ rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)\n#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)\n\
    #define fore(...) for(auto&&__VA_ARGS__)\n#define all(i) begin(i),end(i)\n#define\
    \ rall(n) (n).rbegin(),(n).rend()\n#define ini(...) int __VA_ARGS__;in(__VA_ARGS__)\n\
    #define inl(...) long long __VA_ARGS__;in(__VA_ARGS__)\n#define ins(...) string\
    \ __VA_ARGS__;in(__VA_ARGS__)\n#define in2(s, t) for (int i = 0; i < (int)s.size();\
    \ i++) { in(s[i], t[i]); }\n#define in3(s, t, u) for (int i = 0; i < (int)s.size();\
    \ i++) { in(s[i], t[i], u[i]); }\n#define in4(s, t, u, v) for (int i = 0; i <\
    \ (int)s.size(); i++) { in(s[i], t[i], u[i], v[i]); }\n#define fin(...) { out(__VA_ARGS__);return;\
    \ }\n#line 9 \"template/template.hpp\"\n\n// utilities\n#line 1 \"template/util.hpp\"\
    \nnamespace Nyan {\nusing ll = long long;\nusing ld = long double;\nusing vi =\
    \ vector<int>;\nusing vl = vector<ll>;\nusing vc = vector<char>;\nusing vs = vector<string>;\n\
    using vb = vector<bool>;\nusing vd = vector<double>;\nusing vvi= vector<vi>;\n\
    using vvl= vector<vl>;\nusing vvc= vector<vc>;\nusing pi = pair<int, int>;\nusing\
    \ pl = pair<ll, ll>;\nusing vp = vector<pl>;\ntemplate<typename T> using V = vector<T>;\n\
    template<typename T> using VV= vector<vector<T>>;\ntemplate<typename T, typename\
    \ U>\ninline bool chmax(T &a, U b) { return a < b && (a = b, true); }\ntemplate<typename\
    \ T, typename U>\ninline bool chmin(T &a, U b) { return a > b && (a = b, true);\
    \ }\ntemplate<typename T>\ninline T Max(const vector<T> &v) { return *max_element(begin(v),\
    \ end(v)); }\ntemplate<typename T>\ninline T Min(const vector<T> &v) { return\
    \ *min_element(begin(v), end(v)); }\ntemplate<typename T>\ninline long long Sum(const\
    \ vector<T> &v) { return accumulate(begin(v), end(v), 0LL); }\ntemplate<class\
    \ T> using maxheap = priority_queue<T>;\ntemplate<class T> using minheap = priority_queue<T,\
    \ vector<T>, greater<T>>;\nconstexpr ll MOD = 1000000007;\nconstexpr ll mod =\
    \ 998244353;\nconstexpr int dx[]{+0, +1, +0, -1, +1, +1, -1, -1};\nconstexpr int\
    \ dy[]{+1, +0, -1, +0, +1, -1, -1, +1};\nvoid yes(bool x) { cout << (x ? \"yes\"\
    \ : \"no\") << endl; }\nvoid Yes(bool x) { cout << (x ? \"Yes\" : \"No\") << endl;\
    \ }\nvoid YES(bool x) { cout << (x ? \"YES\" : \"NO\") << endl; }\n\n}  // namespace\
    \ Nyan\n#line 12 \"template/template.hpp\"\n\n// input/output\n#line 1 \"template/io.hpp\"\
    \nnamespace Nyan {\ntemplate<typename T, typename U>\nostream &operator<<(ostream\
    \ &os, pair<T, U> &p) {\n  os << p.first << \" \" << p.second;\n  return os;\n\
    }\ntemplate<typename T, typename U>\nistream &operator>>(istream &is, pair<T,\
    \ U> &p) {\n  is >> p.first >> p.second;\n  return is;\n}\ntemplate<typename T>\n\
    ostream &operator<<(ostream &os, vector<T> &v) {\n  for (auto it = v.begin();\
    \ it != v.end();) { os << *it << ((++it) != v.end() ? \" \" : \"\"); }\n  return\
    \ os;\n}\ntemplate<typename T>\nistream &operator>>(istream &is, vector<T> &v)\
    \ {\n  for (T &e : v) is >> e;\n  return is;\n}\nvoid in() {}\ntemplate<class\
    \ T, class... U>\nvoid in(T &t, U &...u) {\n  cin >> t;\n  in(u...);\n}\nvoid\
    \ out() { cout << \"\\n\"; }\ntemplate<typename T, class... U, char sep = ' '>\n\
    void out(const T &t, const U &...u) {\n  cout << t;\n  if (sizeof...(u)) cout\
    \ << sep;\n  out(u...);\n}\nstruct Nyan {\n  Nyan() {\n    cin.tie(nullptr);\n\
    \    ios::sync_with_stdio(false);\n    cout.tie(nullptr);\n    cout << fixed <<\
    \ setprecision(12);\n    cerr << fixed << setprecision(12);\n  }\n} nyan;\n\n\
    }  // namespace Nyan\n#line 15 \"template/template.hpp\"\nnamespace Nyan { void\
    \ solve(); }\nsigned main() { Nyan::solve(); }\n/**\n * @brief Template(\u30C6\
    \u30F3\u30D7\u30EC\u30FC\u30C8)\n*/\n#line 3 \"verify/verify-aoj-alds/example.test.cpp\"\
    \n\nvoid Nyan::solve() {\n  ini(n);\n  vl a(n); in(a);\n  ini(q);\n  int cnt =\
    \ 0;\n  rep(_, q) {\n    ini(x);\n    cnt += binary_search(all(a), x);\n  }\n\
    \  out(cnt);\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include \"../../template/template.hpp\"\n\nvoid Nyan::solve() {\n  ini(n);\n\
    \  vl a(n); in(a);\n  ini(q);\n  int cnt = 0;\n  rep(_, q) {\n    ini(x);\n  \
    \  cnt += binary_search(all(a), x);\n  }\n  out(cnt);\n}\n"
  dependsOn:
  - template/template.hpp
  - template/macro.hpp
  - template/util.hpp
  - template/io.hpp
  isVerificationFile: true
  path: verify/verify-aoj-alds/example.test.cpp
  requiredBy: []
  timestamp: '2022-12-09 17:44:23+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/verify-aoj-alds/example.test.cpp
layout: document
redirect_from:
- /verify/verify/verify-aoj-alds/example.test.cpp
- /verify/verify/verify-aoj-alds/example.test.cpp.html
title: verify/verify-aoj-alds/example.test.cpp
---
