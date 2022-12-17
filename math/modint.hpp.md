---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: modint
    links: []
  bundledCode: "#line 2 \"math/modint.hpp\"\ntemplate<int m>\nstruct modint {\n private:\n\
    \  unsigned int x;\n  static constexpr unsigned int umod() { return m; }\n public:\n\
    \  static modint raw(int v) {\n    modint ret;\n    ret.x = v;\n    return ret;\n\
    \  }\n  constexpr modint() : x(0) {}\n  constexpr modint(int y) {\n    int v =\
    \ y % m;\n    if (v < 0) v += m;\n    x = (unsigned int) v;\n  }\n  constexpr\
    \ modint(long long y) {\n    long long v = y % (long long) m;\n    if (v < 0)\
    \ v += m;\n    x = (unsigned int) v;\n  }\n  constexpr modint(unsigned int y)\
    \ { x = (unsigned int) (y % umod()); }\n  modint &operator++() {\n    x++;\n \
    \   if (x == umod()) x = 0;\n    return *this;\n  }\n  modint &operator--() {\n\
    \    if (x == 0) x = umod();\n    x--;\n    return *this;\n  }\n  modint operator++(int)\
    \ {\n    modint ret = *this;\n    ++*this;\n    return ret;\n  }\n  modint operator--(int)\
    \ {\n    modint ret = *this;\n    --*this;\n    return ret;\n  }\n  modint &operator+=(const\
    \ modint &p) {\n    if ((x += p.x) >= umod()) x -= umod();\n    return *this;\n\
    \  }\n  modint &operator-=(const modint &p) {\n    if ((x -= p.x) >= umod()) x\
    \ += umod();\n    return *this;\n  }\n  modint &operator*=(const modint &p) {\n\
    \    unsigned long long y = x;\n    y *= p.x;\n    x = (unsigned int) (y % umod());\n\
    \    return *this;\n  }\n  modint &operator/=(const modint &p) { return *this\
    \ *= p.inv(); }\n  modint operator+() const { return *this; }\n  modint operator-()\
    \ const { return modint() - *this; }\n  modint pow(long long n) const {\n    modint\
    \ ret(1), mul = *this;\n    while (n) {\n      if (n & 1) ret *= mul;\n      mul\
    \ *= mul;\n      n >>= 1;\n    }\n    return ret;\n  }\n  modint inv() const {\n\
    \    long long a = x, b = m, u = 1, v = 0;\n    while (b) {\n      long long t\
    \ = a / b;\n      swap(a -= t * b, b);\n      swap(u -= t * v, v);\n    }\n  \
    \  return modint(u);\n  }\n  friend modint operator+(const modint &l, const modint\
    \ &r) { return modint(l) += r; }\n  friend modint operator-(const modint &l, const\
    \ modint &r) { return modint(l) -= r; }\n  friend modint operator*(const modint\
    \ &l, const modint &r) { return modint(l) *= r; }\n  friend modint operator/(const\
    \ modint &l, const modint &r) { return modint(l) /= r; }\n  friend bool operator==(const\
    \ modint &l, const modint &r) { return l.x == r.x; }\n  friend bool operator!=(const\
    \ modint &l, const modint &r) { return l.x != r.x; }\n  friend ostream &operator<<(ostream\
    \ &os, const modint &p) { return os << p.val(); }\n  friend istream &operator>>(istream\
    \ &is, modint &a) {\n    long long t;\n    is >> t;\n    a = modint(t);\n    return\
    \ (is);\n  }\n  static constexpr int get_mod() { return m; }\n  [[nodiscard]]\
    \ int val() const { return (int) x; }\n};\n/**\n * @brief modint\n*/\n"
  code: "#pragma once\ntemplate<int m>\nstruct modint {\n private:\n  unsigned int\
    \ x;\n  static constexpr unsigned int umod() { return m; }\n public:\n  static\
    \ modint raw(int v) {\n    modint ret;\n    ret.x = v;\n    return ret;\n  }\n\
    \  constexpr modint() : x(0) {}\n  constexpr modint(int y) {\n    int v = y %\
    \ m;\n    if (v < 0) v += m;\n    x = (unsigned int) v;\n  }\n  constexpr modint(long\
    \ long y) {\n    long long v = y % (long long) m;\n    if (v < 0) v += m;\n  \
    \  x = (unsigned int) v;\n  }\n  constexpr modint(unsigned int y) { x = (unsigned\
    \ int) (y % umod()); }\n  modint &operator++() {\n    x++;\n    if (x == umod())\
    \ x = 0;\n    return *this;\n  }\n  modint &operator--() {\n    if (x == 0) x\
    \ = umod();\n    x--;\n    return *this;\n  }\n  modint operator++(int) {\n  \
    \  modint ret = *this;\n    ++*this;\n    return ret;\n  }\n  modint operator--(int)\
    \ {\n    modint ret = *this;\n    --*this;\n    return ret;\n  }\n  modint &operator+=(const\
    \ modint &p) {\n    if ((x += p.x) >= umod()) x -= umod();\n    return *this;\n\
    \  }\n  modint &operator-=(const modint &p) {\n    if ((x -= p.x) >= umod()) x\
    \ += umod();\n    return *this;\n  }\n  modint &operator*=(const modint &p) {\n\
    \    unsigned long long y = x;\n    y *= p.x;\n    x = (unsigned int) (y % umod());\n\
    \    return *this;\n  }\n  modint &operator/=(const modint &p) { return *this\
    \ *= p.inv(); }\n  modint operator+() const { return *this; }\n  modint operator-()\
    \ const { return modint() - *this; }\n  modint pow(long long n) const {\n    modint\
    \ ret(1), mul = *this;\n    while (n) {\n      if (n & 1) ret *= mul;\n      mul\
    \ *= mul;\n      n >>= 1;\n    }\n    return ret;\n  }\n  modint inv() const {\n\
    \    long long a = x, b = m, u = 1, v = 0;\n    while (b) {\n      long long t\
    \ = a / b;\n      swap(a -= t * b, b);\n      swap(u -= t * v, v);\n    }\n  \
    \  return modint(u);\n  }\n  friend modint operator+(const modint &l, const modint\
    \ &r) { return modint(l) += r; }\n  friend modint operator-(const modint &l, const\
    \ modint &r) { return modint(l) -= r; }\n  friend modint operator*(const modint\
    \ &l, const modint &r) { return modint(l) *= r; }\n  friend modint operator/(const\
    \ modint &l, const modint &r) { return modint(l) /= r; }\n  friend bool operator==(const\
    \ modint &l, const modint &r) { return l.x == r.x; }\n  friend bool operator!=(const\
    \ modint &l, const modint &r) { return l.x != r.x; }\n  friend ostream &operator<<(ostream\
    \ &os, const modint &p) { return os << p.val(); }\n  friend istream &operator>>(istream\
    \ &is, modint &a) {\n    long long t;\n    is >> t;\n    a = modint(t);\n    return\
    \ (is);\n  }\n  static constexpr int get_mod() { return m; }\n  [[nodiscard]]\
    \ int val() const { return (int) x; }\n};\n/**\n * @brief modint\n*/"
  dependsOn: []
  isVerificationFile: false
  path: math/modint.hpp
  requiredBy: []
  timestamp: '2022-12-17 14:52:42+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/modint.hpp
layout: document
redirect_from:
- /library/math/modint.hpp
- /library/math/modint.hpp.html
title: modint
---
