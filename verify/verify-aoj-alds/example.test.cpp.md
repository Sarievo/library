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
    \ \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\n#line\
    \ 2 \"template/template.hpp\"\n// #pragma GCC target(\"avx2\")\n// #pragma GCC\
    \ optimize(\"O3\",\"unroll-loops\")\n#include <bits/stdc++.h>\n#define overload4(a,b,c,d,e,...)\
    \ e\n#define overload3(a,b,c,d,...) d\n#define rep1(a) for(ll i=0;i<(ll)(a);i++)\n\
    #define rep2(i,a) for(ll i=0;i<(ll)(a);i++)\n#define rep3(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)\n\
    #define rep4(i,a,b,c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))\n#define rep(...)\
    \ overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\n#define rrep1(a) for(ll\
    \ i=(ll)(a)-1;i>=0;i--)\n#define rrep2(i,a) for(ll i=(ll)(a)-1;i>=0;i--)\n#define\
    \ rrep3(i,a,b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)\n#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)\n\
    #define fore(...) for(auto&&__VA_ARGS__)\n#define all1(i) begin(i),end(i)\n#define\
    \ all2(i,a) begin(i),begin(i)+a\n#define all3(i,a,b) begin(i)+a,begin(i)+b\n#define\
    \ all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)\n#define rall(n)\
    \ (n).rbegin(),(n).rend()\n#define INT(...) int __VA_ARGS__;scan(__VA_ARGS__)\n\
    #define LL(...) ll __VA_ARGS__;scan(__VA_ARGS__)\n#define STR(...) string __VA_ARGS__;scan(__VA_ARGS__)\n\
    #define CHR(...) char __VA_ARGS__;scan(__VA_ARGS__)\n#define DBL(...) double __VA_ARGS__;scan(__VA_ARGS__)\n\
    #define LD(...) ld __VA_ARGS__;scan(__VA_ARGS__)\n#define pb push_back\n#define\
    \ eb emplace_back\n#define END(...) {print(__VA_ARGS__);return;}\n#if __has_include(<atcoder/all>)\n\
    #include <atcoder/all>\nusing namespace atcoder;\n// using mint=modint1000000007;\n\
    // using mint=modint998244353;\n#endif\nusing namespace std;\nusing ll =long long;\n\
    using ull=unsigned long long;\nusing ld =long double;\nusing vl =vector<ll>;\n\
    using vi =vector<int>;\nusing vs =vector<string>;\nusing vc =vector<char>;\nusing\
    \ vvl=vector<vl>;\nusing pi =pair<int,int>;\nusing pl =pair<ll,ll>;\nusing vvc=vector<vc>;\n\
    using vd =vector<double>;\nusing vp =vector<pl>;\nusing vb =vector<bool>;\nconstexpr\
    \ int dx[]{+0,+1,+0,-1,+1,+1,-1,-1};\nconstexpr int dy[]{+1,+0,-1,+0,+1,-1,-1,+1};\n\
    template<typename T,typename U>\nostream&operator<<(ostream&os,pair<T,U>&p){os<<p.first<<\"\
    \ \"<<p.second;return os;}\ntemplate<typename T,typename U>\nistream&operator>>(istream&is,pair<T,U>&p){is>>p.first>>p.second;return\
    \ is;}\ntemplate<typename T>\nostream&operator<<(ostream&os,vector<T>&v){for(auto\
    \ it=v.begin();it!=v.end();){os<<*it<<((++it)!=v.end()?\" \":\"\");}return os;}\n\
    template<typename T>\nistream&operator>>(istream&is,vector<T>&v){for(T&e:v)is>>e;return\
    \ is;}\nvoid scan(){}\ntemplate<class T,class...U>\nvoid scan(T&t,U&...u){cin>>t;scan(u...);}\n\
    template<class T>\nvoid print(const T&t){cout<<t<<'\\n';}\ntemplate<class T, class...U>\n\
    void print(const T&t,const U&...u){cout<<t<<' ';print(u...);}\ntemplate<class...T>\n\
    void fin(const T&...a){print(a...);exit(0);}\ntemplate<typename T,typename U>\n\
    inline bool chmax(T&a,U b){return a<b&&(a=b,true);}\ntemplate<typename T,typename\
    \ U>\ninline bool chmin(T&a,U b){return a>b&&(a=b,true);}\ntemplate<class T> using\
    \ maxheap=priority_queue<T,vector<T>,less<T>>;\ntemplate<class T> using minheap=priority_queue<T,vector<T>,greater<T>>;\n\
    struct Nyan{Nyan(){cin.tie(nullptr);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(12);cerr<<fixed<<setprecision(12);}};\n\
    /**\n * @brief Template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)\n*/\n#line 3 \"\
    verify/verify-aoj-alds/example.test.cpp\"\n\nint main() {\n  INT(n);\n  vi s(n);\
    \ cin >> s;\n  INT(q);\n  int cnt = 0;\n  rep(_, q) {\n    int t_i; cin >> t_i;\n\
    \    cnt += binary_search(all(s), t_i);\n  }\n  cout << cnt << endl;\n  return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include \"../../template/template.hpp\"\n\nint main() {\n  INT(n);\n  vi s(n);\
    \ cin >> s;\n  INT(q);\n  int cnt = 0;\n  rep(_, q) {\n    int t_i; cin >> t_i;\n\
    \    cnt += binary_search(all(s), t_i);\n  }\n  cout << cnt << endl;\n  return\
    \ 0;\n}\n"
  dependsOn:
  - template/template.hpp
  isVerificationFile: true
  path: verify/verify-aoj-alds/example.test.cpp
  requiredBy: []
  timestamp: '2022-12-05 00:13:06+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/verify-aoj-alds/example.test.cpp
layout: document
redirect_from:
- /verify/verify/verify-aoj-alds/example.test.cpp
- /verify/verify/verify-aoj-alds/example.test.cpp.html
title: verify/verify-aoj-alds/example.test.cpp
---
