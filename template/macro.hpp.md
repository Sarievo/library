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
  bundledCode: '#line 1 "template/macro.hpp"

    #define ini(...) int __VA_ARGS__;in(__VA_ARGS__)

    #define inl(...) long long __VA_ARGS__;in(__VA_ARGS__)

    #define ins(...) string __VA_ARGS__;in(__VA_ARGS__)

    #define inc(...) char __VA_ARGS__;in(__VA_ARGS__)

    #define ind(...) double __VA_ARGS__;in(__VA_ARGS__)

    #define fin(...) {out(__VA_ARGS__);return;}

    #define overload4(a, b, c, d, e, ...) e

    #define overload3(a, b, c, d, ...) d

    #define rep1(a) for(ll i=0;i<(ll)(a);i++)

    #define rep2(i, a) for(ll i=0;i<(ll)(a);i++)

    #define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)

    #define rep4(i, a, b, c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))

    #define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)

    #define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)

    #define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)

    #define rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)

    #define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)

    #define fore(...) for(auto&&__VA_ARGS__)

    #define all1(i) begin(i),end(i)

    #define all2(i, a) begin(i),begin(i)+a

    #define all3(i, a, b) begin(i)+a,begin(i)+b

    #define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)

    #define rall(n) (n).rbegin(),(n).rend()

    #define pb push_back

    #define eb emplace_back

    #define a first

    #define b second

    '
  code: '#define ini(...) int __VA_ARGS__;in(__VA_ARGS__)

    #define inl(...) long long __VA_ARGS__;in(__VA_ARGS__)

    #define ins(...) string __VA_ARGS__;in(__VA_ARGS__)

    #define inc(...) char __VA_ARGS__;in(__VA_ARGS__)

    #define ind(...) double __VA_ARGS__;in(__VA_ARGS__)

    #define fin(...) {out(__VA_ARGS__);return;}

    #define overload4(a, b, c, d, e, ...) e

    #define overload3(a, b, c, d, ...) d

    #define rep1(a) for(ll i=0;i<(ll)(a);i++)

    #define rep2(i, a) for(ll i=0;i<(ll)(a);i++)

    #define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)

    #define rep4(i, a, b, c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))

    #define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)

    #define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)

    #define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)

    #define rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)

    #define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)

    #define fore(...) for(auto&&__VA_ARGS__)

    #define all1(i) begin(i),end(i)

    #define all2(i, a) begin(i),begin(i)+a

    #define all3(i, a, b) begin(i)+a,begin(i)+b

    #define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)

    #define rall(n) (n).rbegin(),(n).rend()

    #define pb push_back

    #define eb emplace_back

    #define a first

    #define b second

    '
  dependsOn: []
  isVerificationFile: false
  path: template/macro.hpp
  requiredBy:
  - magic/astar.hpp
  - template/template.hpp
  timestamp: '2022-12-08 16:39:15+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/verify-aoj-alds/example.test.cpp
documentation_of: template/macro.hpp
layout: document
---

- [x] 'rep' and 'rrep' overloading
  - substitutes the need of classical 'ascending for-loops' and 'descending for-loops'
  - supports step-by-x in 'ascending for-loops'

```c++
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define rep1(a) for(ll i=0;i<(ll)(a);i++)
#define rep2(i, a) for(ll i=0;i<(ll)(a);i++)
#define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep4(i, a, b, c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)
#define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)
#define rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)
#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)
```

credits: [MtSaka](https://github.com/MtSaka/library)