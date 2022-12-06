---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
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
  bundledCode: "#line 1 \"template/io.hpp\"\nnamespace Nyan{\ntemplate<typename T,typename\
    \ U>\nostream&operator<<(ostream&os,pair<T,U>&p){os<<p.first<<\" \"<<p.second;return\
    \ os;}\ntemplate<typename T,typename U>\nistream&operator>>(istream&is,pair<T,U>&p){is>>p.first>>p.second;return\
    \ is;}\ntemplate<typename T>\nostream&operator<<(ostream&os,vector<T>&v){for(auto\
    \ it=v.begin();it!=v.end();){os<<*it<<((++it)!=v.end()?\" \":\"\");}return os;}\n\
    template<typename T>\nistream&operator>>(istream&is,vector<T>&v){for(T&e:v)is>>e;return\
    \ is;}\nvoid scan(){}\ntemplate<class T,class...U>\nvoid scan(T&t,U&...u){cin>>t;scan(u...);}\n\
    template<class T>\nvoid print(const T&t){cout<<t<<'\\n';}\ntemplate<class T,class...U>\n\
    void print(const T&t,const U&...u){cout<<t<<' ';print(u...);}\ntemplate<class...T>\n\
    void fin(const T&...a){print(a...);exit(0);}\nstruct Nyan{\n  Nyan(){\n    cin.tie(nullptr);\n\
    \    ios::sync_with_stdio(false);\n    cout.tie(nullptr);\n    cout<<fixed<<setprecision(12);\n\
    \    cerr<<fixed<<setprecision(12);\n  }\n}nyan;\n\n}  // namespace Nyan\n"
  code: "namespace Nyan{\ntemplate<typename T,typename U>\nostream&operator<<(ostream&os,pair<T,U>&p){os<<p.first<<\"\
    \ \"<<p.second;return os;}\ntemplate<typename T,typename U>\nistream&operator>>(istream&is,pair<T,U>&p){is>>p.first>>p.second;return\
    \ is;}\ntemplate<typename T>\nostream&operator<<(ostream&os,vector<T>&v){for(auto\
    \ it=v.begin();it!=v.end();){os<<*it<<((++it)!=v.end()?\" \":\"\");}return os;}\n\
    template<typename T>\nistream&operator>>(istream&is,vector<T>&v){for(T&e:v)is>>e;return\
    \ is;}\nvoid scan(){}\ntemplate<class T,class...U>\nvoid scan(T&t,U&...u){cin>>t;scan(u...);}\n\
    template<class T>\nvoid print(const T&t){cout<<t<<'\\n';}\ntemplate<class T,class...U>\n\
    void print(const T&t,const U&...u){cout<<t<<' ';print(u...);}\ntemplate<class...T>\n\
    void fin(const T&...a){print(a...);exit(0);}\nstruct Nyan{\n  Nyan(){\n    cin.tie(nullptr);\n\
    \    ios::sync_with_stdio(false);\n    cout.tie(nullptr);\n    cout<<fixed<<setprecision(12);\n\
    \    cerr<<fixed<<setprecision(12);\n  }\n}nyan;\n\n}  // namespace Nyan\n"
  dependsOn: []
  isVerificationFile: false
  path: template/io.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2022-12-06 17:12:26+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/verify-aoj-alds/example.test.cpp
documentation_of: template/io.hpp
layout: document
---

- [x] in-stream and out-stream overloading
- [ ] easy debugging

credits: [MtSaka](https://github.com/MtSaka/library)