---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: Template
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/verify-aoj-alds/example.test.cpp
    title: verify/verify-aoj-alds/example.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template/IO.hpp\"\ntemplate<typename T, typename U>\nostream\
    \ &operator<<(ostream &os, pair<T, U> &p) {\n  os << p.first << \" \" << p.second;\n\
    \  return os;\n}\ntemplate<typename T, typename U>\nistream &operator>>(istream\
    \ &is, pair<T, U> &p) {\n  is >> p.first >> p.second;\n  return is;\n}\ntemplate<typename\
    \ T>\nostream &operator<<(ostream &os, vector<T> &v) {\n  for (auto it = v.begin();\
    \ it != v.end();) {\n    os << *it << ((++it) != v.end() ? \" \" : \"\");\n  }\n\
    \  return os;\n}\ntemplate<typename T>\nistream &operator>>(istream &is, vector<T>\
    \ &v) {\n  for (T &e : v)is >> e;\n  return is;\n}\nvoid scan() {}\ntemplate<class\
    \ T, class...U>\nvoid scan(T &t, U &...u) {\n  cin >> t;\n  scan(u...);\n}\ntemplate<class\
    \ T>\nvoid print(const T &t) { cout << t << '\\n'; }\ntemplate<class T, class...U>\n\
    void print(const T &t, const U &...u) {\n  cout << t << ' ';\n  print(u...);\n\
    }\ntemplate<class...T>\nvoid fin(const T &...a) {\n  print(a...);\n  exit(0);\n\
    }\nstruct Nyan {\n  Nyan() {\n    cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n\
    \    cout.tie(nullptr);\n    cout << fixed << setprecision(12);\n    cerr << fixed\
    \ << setprecision(12);\n  }\n} nyan;\n"
  code: "template<typename T, typename U>\nostream &operator<<(ostream &os, pair<T,\
    \ U> &p) {\n  os << p.first << \" \" << p.second;\n  return os;\n}\ntemplate<typename\
    \ T, typename U>\nistream &operator>>(istream &is, pair<T, U> &p) {\n  is >> p.first\
    \ >> p.second;\n  return is;\n}\ntemplate<typename T>\nostream &operator<<(ostream\
    \ &os, vector<T> &v) {\n  for (auto it = v.begin(); it != v.end();) {\n    os\
    \ << *it << ((++it) != v.end() ? \" \" : \"\");\n  }\n  return os;\n}\ntemplate<typename\
    \ T>\nistream &operator>>(istream &is, vector<T> &v) {\n  for (T &e : v)is >>\
    \ e;\n  return is;\n}\nvoid scan() {}\ntemplate<class T, class...U>\nvoid scan(T\
    \ &t, U &...u) {\n  cin >> t;\n  scan(u...);\n}\ntemplate<class T>\nvoid print(const\
    \ T &t) { cout << t << '\\n'; }\ntemplate<class T, class...U>\nvoid print(const\
    \ T &t, const U &...u) {\n  cout << t << ' ';\n  print(u...);\n}\ntemplate<class...T>\n\
    void fin(const T &...a) {\n  print(a...);\n  exit(0);\n}\nstruct Nyan {\n  Nyan()\
    \ {\n    cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n    cout.tie(nullptr);\n\
    \    cout << fixed << setprecision(12);\n    cerr << fixed << setprecision(12);\n\
    \  }\n} nyan;\n"
  dependsOn: []
  isVerificationFile: false
  path: template/IO.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2022-12-05 17:44:29+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/verify-aoj-alds/example.test.cpp
documentation_of: template/IO.hpp
layout: document
title: IO
---

- [x] in-stream and out-stream overloading
- [x] variable initialization

credits: [MtSaka](https://github.com/MtSaka/library)