---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: "Template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
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
    \ \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\r\n\
    #line 2 \"template/template.hpp\"\n// #pragma GCC target(\"avx2\")\r\n// #pragma\
    \ GCC optimize(\"O3\",\"unroll-loops\")\r\n#include <bits/stdc++.h>\r\n#define\
    \ overload4(a,b,c,d,e,...) e\r\n#define overload3(a,b,c,d,...) d\r\n#define rep1(a)\
    \ for(ll i=0;i<(ll)(a);i++)\r\n#define rep2(i,a) for(ll i=0;i<(ll)(a);i++)\r\n\
    #define rep3(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)\r\n#define rep4(i,a,b,c) for(ll\
    \ i=(ll)(a);i<(ll)(b);i+=(ll)(c))\r\n#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\r\
    \n#define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)\r\n#define rrep2(i,a) for(ll i=(ll)(a)-1;i>=0;i--)\r\
    \n#define rrep3(i,a,b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)\r\n#define rrep(...)\
    \ overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)\r\n#define fore(...) for(auto&&__VA_ARGS__)\r\
    \n#define all1(i) begin(i),end(i)\r\n#define all2(i,a) begin(i),begin(i)+a\r\n\
    #define all3(i,a,b) begin(i)+a,begin(i)+b\r\n#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)\r\
    \n#define rall(n) (n).rbegin(),(n).rend()\r\n#define INT(...) int __VA_ARGS__;scan(__VA_ARGS__)\r\
    \n#define LL(...) ll __VA_ARGS__;scan(__VA_ARGS__)\r\n#define STR(...) string\
    \ __VA_ARGS__;scan(__VA_ARGS__)\r\n#define CHR(...) char __VA_ARGS__;scan(__VA_ARGS__)\r\
    \n#define DBL(...) double __VA_ARGS__;scan(__VA_ARGS__)\r\n#define LD(...) ld\
    \ __VA_ARGS__;scan(__VA_ARGS__)\r\n#define pb push_back\r\n#define eb emplace_back\r\
    \n#define END(...) {print(__VA_ARGS__);return;}\r\n#if __has_include(<atcoder/all>)\r\
    \n#include <atcoder/all>\r\nusing namespace atcoder;\r\n// using mint=modint1000000007;\r\
    \n// using mint=modint998244353;\r\n#endif\r\nusing namespace std;\r\nusing ll\
    \ =long long;\r\nusing ull=unsigned long long;\r\nusing ld =long double;\r\nusing\
    \ vl =vector<ll>;\r\nusing vi =vector<int>;\r\nusing vs =vector<string>;\r\nusing\
    \ vc =vector<char>;\r\nusing vvl=vector<vl>;\r\nusing pi =pair<int,int>;\r\nusing\
    \ pl =pair<ll,ll>;\r\nusing vvc=vector<vc>;\r\nusing vd =vector<double>;\r\nusing\
    \ vp =vector<pl>;\r\nusing vb =vector<bool>;\r\nconstexpr int dx[]{+0,+1,+0,-1,+1,+1,-1,-1};\r\
    \nconstexpr int dy[]{+1,+0,-1,+0,+1,-1,-1,+1};\r\ntemplate<typename T,typename\
    \ U>\r\nostream&operator<<(ostream&os,pair<T,U>&p){os<<p.first<<\" \"<<p.second;return\
    \ os;}\r\ntemplate<typename T,typename U>\r\nistream&operator>>(istream&is,pair<T,U>&p){is>>p.first>>p.second;return\
    \ is;}\r\ntemplate<typename T>\r\nostream&operator<<(ostream&os,vector<T>&v){for(auto\
    \ it=v.begin();it!=v.end();){os<<*it<<((++it)!=v.end()?\" \":\"\");}return os;}\r\
    \ntemplate<typename T>\r\nistream&operator>>(istream&is,vector<T>&v){for(T&e:v)is>>e;return\
    \ is;}\r\nvoid scan(){}\r\ntemplate<class T,class...U>\r\nvoid scan(T&t,U&...u){cin>>t;scan(u...);}\r\
    \ntemplate<class T>\r\nvoid print(const T&t){cout<<t<<'\\n';}\r\ntemplate<class\
    \ T, class...U>\r\nvoid print(const T&t,const U&...u){cout<<t<<' ';print(u...);}\r\
    \ntemplate<class...T>\r\nvoid fin(const T&...a){print(a...);exit(0);}\r\ntemplate<typename\
    \ T,typename U>\r\ninline bool chmax(T&a,U b){return a<b&&(a=b,true);}\r\ntemplate<typename\
    \ T,typename U>\r\ninline bool chmin(T&a,U b){return a>b&&(a=b,true);}\r\ntemplate<class\
    \ T> using maxheap=priority_queue<T,vector<T>,less<T>>;\r\ntemplate<class T> using\
    \ minheap=priority_queue<T,vector<T>,greater<T>>;\r\nstruct Nyan{Nyan(){cin.tie(nullptr);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(12);cerr<<fixed<<setprecision(12);}};\r\
    \n/**\r\n * @brief Template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)\r\n*/\n#line\
    \ 3 \"verify/verify-aoj-alds/example.test.cpp\"\n\r\nint main() {\r\n  INT(n);\r\
    \n  vi s(n); cin >> s;\r\n  INT(q);\r\n  int cnt = 0;\r\n  rep(_, q) {\r\n   \
    \ int t_i; cin >> t_i;\r\n    cnt += binary_search(all(s), t_i);\r\n  }\r\n  cout\
    \ << cnt << endl;\r\n  return 0;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \r\n#include \"../../template/template.hpp\"\r\n\r\nint main() {\r\n  INT(n);\r\
    \n  vi s(n); cin >> s;\r\n  INT(q);\r\n  int cnt = 0;\r\n  rep(_, q) {\r\n   \
    \ int t_i; cin >> t_i;\r\n    cnt += binary_search(all(s), t_i);\r\n  }\r\n  cout\
    \ << cnt << endl;\r\n  return 0;\r\n}\r\n"
  dependsOn:
  - template/template.hpp
  isVerificationFile: true
  path: verify/verify-aoj-alds/example.test.cpp
  requiredBy: []
  timestamp: '2022-12-04 23:23:08+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/verify-aoj-alds/example.test.cpp
layout: document
redirect_from:
- /verify/verify/verify-aoj-alds/example.test.cpp
- /verify/verify/verify-aoj-alds/example.test.cpp.html
title: verify/verify-aoj-alds/example.test.cpp
---
