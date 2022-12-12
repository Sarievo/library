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

    #define fi first

    #define se second

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

    #define all(i) begin(i),end(i)

    #define rall(n) (n).rbegin(),(n).rend()

    #define ini(...) int __VA_ARGS__;in(__VA_ARGS__)

    #define inl(...) long long __VA_ARGS__;in(__VA_ARGS__)

    #define ins(...) string __VA_ARGS__;in(__VA_ARGS__)

    #define in2(s, t) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i]); }

    #define in3(s, t, u) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i],
    u[i]); }

    #define in4(s, t, u, v) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i],
    u[i], v[i]); }

    #define fin(...) { out(__VA_ARGS__);return; }

    #define dump(x) cerr << #x << ":" << x << "\n";

    #define vdump(x) rep(idx, size(x)) cerr << idx << ":" << x[idx] << "\n";

    '
  code: '#define fi first

    #define se second

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

    #define all(i) begin(i),end(i)

    #define rall(n) (n).rbegin(),(n).rend()

    #define ini(...) int __VA_ARGS__;in(__VA_ARGS__)

    #define inl(...) long long __VA_ARGS__;in(__VA_ARGS__)

    #define ins(...) string __VA_ARGS__;in(__VA_ARGS__)

    #define in2(s, t) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i]); }

    #define in3(s, t, u) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i],
    u[i]); }

    #define in4(s, t, u, v) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i],
    u[i], v[i]); }

    #define fin(...) { out(__VA_ARGS__);return; }

    #define dump(x) cerr << #x << ":" << x << "\n";

    #define vdump(x) rep(idx, size(x)) cerr << idx << ":" << x[idx] << "\n";'
  dependsOn: []
  isVerificationFile: false
  path: template/macro.hpp
  requiredBy:
  - magic/astar.hpp
  - template/template.hpp
  timestamp: '2022-12-12 22:58:55+08:00'
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