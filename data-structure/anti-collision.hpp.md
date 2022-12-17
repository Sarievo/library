---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: anti-collision hashset/hashmap
    links:
    - http://xorshift.di.unimi.it/splitmix64.c
    - https://codeforces.com/blog/entry/62393
  bundledCode: "#line 2 \"data-structure/anti-collision.hpp\"\nstruct custom_hash\
    \ {\n  // https://codeforces.com/blog/entry/62393\n  static uint64_t splitmix64(uint64_t\
    \ x) {\n    // http://xorshift.di.unimi.it/splitmix64.c\n    x += 0x9e3779b97f4a7c15;\n\
    \    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;\n    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;\n\
    \    return x ^ (x >> 31);\n  }\n  size_t operator()(uint64_t x) const {\n   \
    \ static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();\n\
    \    return splitmix64(x + FIXED_RANDOM);\n  }\n};\ntemplate<class T> using hashset\
    \ = unordered_set<T, custom_hash>;\ntemplate<class T, class U> using hashmap =\
    \ unordered_map<T, U, custom_hash>;\n/**\n* @brief anti-collision hashset/hashmap\n\
    */\n"
  code: "#pragma once\nstruct custom_hash {\n  // https://codeforces.com/blog/entry/62393\n\
    \  static uint64_t splitmix64(uint64_t x) {\n    // http://xorshift.di.unimi.it/splitmix64.c\n\
    \    x += 0x9e3779b97f4a7c15;\n    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;\n\
    \    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;\n    return x ^ (x >> 31);\n  }\n\
    \  size_t operator()(uint64_t x) const {\n    static const uint64_t FIXED_RANDOM\
    \ = chrono::steady_clock::now().time_since_epoch().count();\n    return splitmix64(x\
    \ + FIXED_RANDOM);\n  }\n};\ntemplate<class T> using hashset = unordered_set<T,\
    \ custom_hash>;\ntemplate<class T, class U> using hashmap = unordered_map<T, U,\
    \ custom_hash>;\n/**\n* @brief anti-collision hashset/hashmap\n*/"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/anti-collision.hpp
  requiredBy: []
  timestamp: '2022-12-17 14:51:31+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/anti-collision.hpp
layout: document
redirect_from:
- /library/data-structure/anti-collision.hpp
- /library/data-structure/anti-collision.hpp.html
title: anti-collision hashset/hashmap
---
