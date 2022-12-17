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
  bundledCode: "#line 1 \"template/io.hpp\"\nnamespace Nyan {\ntemplate<typename T,\
    \ typename U>\nostream &operator<<(ostream &os, pair<T, U> &p) {\n  os << p.first\
    \ << \" \" << p.second;\n  return os;\n}\ntemplate<typename T, typename U>\nistream\
    \ &operator>>(istream &is, pair<T, U> &p) {\n  is >> p.first >> p.second;\n  return\
    \ is;\n}\ntemplate<typename T>\nostream &operator<<(ostream &os, vector<T> &v)\
    \ {\n  for (auto it = v.begin(); it != v.end();) { os << *it << ((++it) != v.end()\
    \ ? \" \" : \"\"); }\n  return os;\n}\ntemplate<typename T>\nistream &operator>>(istream\
    \ &is, vector<T> &v) {\n  for (T &e : v) is >> e;\n  return is;\n}\nvoid in()\
    \ {}\ntemplate<class T, class... U>\nvoid in(T &t, U &...u) {\n  cin >> t;\n \
    \ in(u...);\n}\nvoid out() { cout << \"\\n\"; }\ntemplate<typename T, class...\
    \ U, char sep = ' '>\nvoid out(const T &t, const U &...u) {\n  cout << t;\n  if\
    \ (sizeof...(u)) cout << sep;\n  out(u...);\n}\nstruct Nyan {\n  Nyan() {\n  \
    \  cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n    cout.tie(nullptr);\n\
    \    cout << fixed << setprecision(12);\n    cerr << fixed << setprecision(12);\n\
    \  }\n} nyan;\n\n}  // namespace Nyan\n"
  code: "namespace Nyan {\ntemplate<typename T, typename U>\nostream &operator<<(ostream\
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
    }  // namespace Nyan\n"
  dependsOn: []
  isVerificationFile: false
  path: template/io.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2022-12-08 18:41:17+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/verify-aoj-alds/example.test.cpp
documentation_of: template/io.hpp
layout: document
---

- [x] in-stream and out-stream overloading
- [ ] easy debugging

credits: [MtSaka](https://github.com/MtSaka/library)