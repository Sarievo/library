---
data:
  _extendedDependsOn: []
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
  bundledCode: "#line 1 \"example/example.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \r\n#include <algorithm>\r\n#include <iostream>\r\n#include <vector>\r\n#define\
    \ REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))\r\n#define ALL(x) std::begin(x),\
    \ std::end(x)\r\nusing namespace std;\r\n\r\nint main() {\r\n    int n; cin >>\
    \ n;\r\n    vector<int> s(n);\r\n    REP (i, n) {\r\n        cin >> s[i];\r\n\
    \    }\r\n    int q; cin >> q;\r\n    int cnt = 0;\r\n    while (q --) {\r\n \
    \       int t_i; cin >> t_i;\r\n        cnt += binary_search(ALL(s), t_i);\r\n\
    \    }\r\n    cout << cnt << endl;\r\n    return 0;\r\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \r\n#include <algorithm>\r\n#include <iostream>\r\n#include <vector>\r\n#define\
    \ REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))\r\n#define ALL(x) std::begin(x),\
    \ std::end(x)\r\nusing namespace std;\r\n\r\nint main() {\r\n    int n; cin >>\
    \ n;\r\n    vector<int> s(n);\r\n    REP (i, n) {\r\n        cin >> s[i];\r\n\
    \    }\r\n    int q; cin >> q;\r\n    int cnt = 0;\r\n    while (q --) {\r\n \
    \       int t_i; cin >> t_i;\r\n        cnt += binary_search(ALL(s), t_i);\r\n\
    \    }\r\n    cout << cnt << endl;\r\n    return 0;\r\n}"
  dependsOn: []
  isVerificationFile: true
  path: example/example.test.cpp
  requiredBy: []
  timestamp: '2022-12-04 02:50:53+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: example/example.test.cpp
layout: document
redirect_from:
- /verify/example/example.test.cpp
- /verify/example/example.test.cpp.html
title: example/example.test.cpp
---