---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/io.hpp
    title: template/io.hpp
  - icon: ':heavy_check_mark:'
    path: template/macro.hpp
    title: template/macro.hpp
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: "template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  - icon: ':heavy_check_mark:'
    path: template/util.hpp
    title: template/util.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: a* search
    links: []
  bundledCode: "#line 2 \"template/template.hpp\"\n#pragma GCC target(\"avx2\")\n\
    #pragma GCC optimize(\"O3\",\"unroll-loops\")\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n// macros\n#line 1 \"template/macro.hpp\"\n#define fi first\n\
    #define se second\n#define overload4(a, b, c, d, e, ...) e\n#define overload3(a,\
    \ b, c, d, ...) d\n#define rep1(a) for(ll i=0;i<(ll)(a);i++)\n#define rep2(i,\
    \ a) for(ll i=0;i<(ll)(a);i++)\n#define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)\n\
    #define rep4(i, a, b, c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))\n#define rep(...)\
    \ overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\n#define rrep1(a) for(ll\
    \ i=(ll)(a)-1;i>=0;i--)\n#define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)\n#define\
    \ rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)\n#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)\n\
    #define fore(...) for(auto&&__VA_ARGS__)\n#define all(i) begin(i),end(i)\n#define\
    \ rall(n) (n).rbegin(),(n).rend()\n#define ini(...) int __VA_ARGS__;in(__VA_ARGS__)\n\
    #define inl(...) long long __VA_ARGS__;in(__VA_ARGS__)\n#define ins(...) string\
    \ __VA_ARGS__;in(__VA_ARGS__)\n#define in2(s, t) for (int i = 0; i < (int)s.size();\
    \ i++) { in(s[i], t[i]); }\n#define in3(s, t, u) for (int i = 0; i < (int)s.size();\
    \ i++) { in(s[i], t[i], u[i]); }\n#define in4(s, t, u, v) for (int i = 0; i <\
    \ (int)s.size(); i++) { in(s[i], t[i], u[i], v[i]); }\n#define fin(...) { out(__VA_ARGS__);return;\
    \ }\n#line 9 \"template/template.hpp\"\n\n// utilities\n#line 1 \"template/util.hpp\"\
    \nnamespace Nyan {\ntypedef long long ll;\ntypedef long double ld;\ntypedef __int128_t\
    \ i128;\nusing vl = vector<ll>;\nusing pl = pair<ll, ll>;\nusing vp = vector<pl>;\n\
    template<typename T> using v = vector<T>;\ntemplate<typename T> using vv = vector<vector<T>>;\n\
    template<typename T>\ninline T sqr(const T &x) { return (x * x); }\ntemplate<typename\
    \ T, typename U>\ninline bool chmax(T &a, U b) { return a < b && (a = b, true);\
    \ }\ntemplate<typename T, typename U>\ninline bool chmin(T &a, U b) { return a\
    \ > b && (a = b, true); }\ntemplate<typename T>\ninline T Max(const vector<T>\
    \ &v) { return *max_element(begin(v), end(v)); }\ntemplate<typename T>\ninline\
    \ T Min(const vector<T> &v) { return *min_element(begin(v), end(v)); }\ntemplate<typename\
    \ T>\ninline long long Sum(const vector<T> &v) { return accumulate(begin(v), end(v),\
    \ 0LL); }\ntemplate<class T> using maxheap = priority_queue<T>;\ntemplate<class\
    \ T> using minheap = priority_queue<T, vector<T>, greater<T>>;\nconstexpr ll MOD\
    \ = 1000000007;\nconstexpr ll mod = 998244353;\nconst int INF32 = INT_MAX / 2;\n\
    const ll INF64 = 1LL << 60;\nvoid Yes(bool b = true) { cout << (b ? \"Yes\" :\
    \ \"No\") << \"\\n\"; }\nvoid YES(bool b = true) { cout << (b ? \"YES\" : \"NO\"\
    ) << \"\\n\"; }\nvector<int> dx{+0, +1, +0, -1, +1, +1, -1, -1};\nvector<int>\
    \ dy{+1, +0, -1, +0, +1, -1, -1, +1};\n\n}  // namespace Nyan\n#line 12 \"template/template.hpp\"\
    \n\n// input/output\n#line 1 \"template/io.hpp\"\nnamespace Nyan {\ntemplate<typename\
    \ T, typename U>\nostream &operator<<(ostream &os, pair<T, U> &p) {\n  os << p.first\
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
    \  }\n} nyan;\n\n}  // namespace Nyan\n#line 15 \"template/template.hpp\"\nnamespace\
    \ Nyan { void solve(); }\nsigned main() { Nyan::solve(); }\n/**\n * @brief template(\u30C6\
    \u30F3\u30D7\u30EC\u30FC\u30C8)\n*/\n#line 3 \"magic/astar.hpp\"\nstruct Node\
    \ {\n  // (x, y) coordinate of the node\n  int x, y;\n  /*\n   * f = g + h, where\
    \ g is the cost of the path from the start node to the current node\n   * and\
    \ h is the estimated cost of the path from the current node to the goal node\n\
    \   */\n  int f, g, h;\n\n  // Overloading the \"<\" operator for the priority\
    \ queue\n  bool operator<(const Node &n) const {\n    return f > n.f;\n  }\n};\n\
    \n// Helper function to calculate the heuristic (h) value for a given node\n//\
    \ In this case, the heuristic is the Manhattan distance between the current node\
    \ and the goal node\nint heuristic(int x, int y, int goal_x, int goal_y) {\n \
    \ return abs(goal_x - x) + abs(goal_y - y);\n}\n\n// Returns the list of coordinates\
    \ for the path from the start node to the goal node,\n// using the A* algorithm\n\
    vector<pair<int, int>> AStar(vector<vector<int>> &grid, int start_x, int start_y,\
    \ int goal_x, int goal_y) {\n  // Sanity check: make sure the start and goal coordinates\
    \ are valid\n  if (start_x < 0 || start_x >= grid.size() || start_y < 0 || start_y\
    \ >= grid[0].size() ||\n      goal_x < 0 || goal_x >= grid.size() || goal_y <\
    \ 0 || goal_y >= grid[0].size() ||\n      grid[start_x][start_y] == 1 || grid[goal_x][goal_y]\
    \ == 1) {\n    return {};\n  }\n\n  // The set of discovered nodes that may need\
    \ to be (re-)expanded\n  // At the beginning, only the start node is in this set\n\
    \  priority_queue<Node> open_set;\n  open_set.push({start_x, start_y, 0, 0, 0});\n\
    \n  // The set of nodes already evaluated\n  unordered_map<int, unordered_map<int,\
    \ bool>> closed_set;\n\n  // The map of navigated nodes\n  unordered_map<int,\
    \ unordered_map<int, pair<int, int>>> came_from;\n\n  // The cost of each node,\
    \ including the start node\n  unordered_map<int, unordered_map<int, int>> cost_so_far;\n\
    \  cost_so_far[start_x][start_y] = 0;\n\n  // The list of coordinates for the\
    \ path from the start node to the goal node\n  vector<pair<int, int>> path;\n\n\
    \  // Loop until the open set is empty\n  while (!open_set.empty()) {\n    //\
    \ Get the node with the lowest f value (i.e., the node that is closest to the\
    \ goal)\n    Node current = open_set.top();\n    open_set.pop();\n\n    // Check\
    \ if we have reached the goal node\n    if (current.x == goal_x && current.y ==\
    \ goal_y) {\n      // Retrace the path from the goal node to the start node\n\
    \      pair<int, int> curr = {current.x, current.y};\n      while (curr.first\
    \ != start_x || curr.second != start_y) {\n        path.push_back(curr);\n   \
    \     curr = came_from[curr.first][curr.second];\n      }\n      path.emplace_back(start_x,\
    \ start_y);\n      reverse(path.begin(), path.end());\n      return path;\n  \
    \  }\n\n    // Mark the current node as visited\n    closed_set[current.x][current.y]\
    \ = true;\n\n    // Explore the neighbors of the current node\n    for (int i\
    \ = 0; i < 4; ++i) {\n      // Check if the coordinates are valid and not visited\n\
    \      int x = current.x + Nyan::dx[i];\n      int y = current.y + Nyan::dy[i];\n\
    \      if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size()\n       \
    \   || grid[x][y] == 1 || closed_set[x][y]) {\n        continue;\n      }\n\n\
    \      // Calculate the new f, g, and h values\n      int g = current.g + 1;\n\
    \      int h = heuristic(x, y, goal_x, goal_y);\n      int f = g + h;\n\n    \
    \  // If the current neighbour has not been visited or has a higher f value, update\
    \ its values\n      if (!cost_so_far.count(x) || !cost_so_far[x].count(y) || cost_so_far[x][y]\
    \ > g) {\n        cost_so_far[x][y] = g;\n        came_from[x][y] = {current.x,\
    \ current.y};\n        open_set.push({x, y, f, g, h});\n      }\n    }\n  }\n\
    \  // If the open set is empty, and we haven't reached the goal, then there is\
    \ no path\n  return {};\n}\n/**\n * @brief a* search\n*/\n"
  code: "#pragma once\n#include \"../template/template.hpp\"\nstruct Node {\n  //\
    \ (x, y) coordinate of the node\n  int x, y;\n  /*\n   * f = g + h, where g is\
    \ the cost of the path from the start node to the current node\n   * and h is\
    \ the estimated cost of the path from the current node to the goal node\n   */\n\
    \  int f, g, h;\n\n  // Overloading the \"<\" operator for the priority queue\n\
    \  bool operator<(const Node &n) const {\n    return f > n.f;\n  }\n};\n\n// Helper\
    \ function to calculate the heuristic (h) value for a given node\n// In this case,\
    \ the heuristic is the Manhattan distance between the current node and the goal\
    \ node\nint heuristic(int x, int y, int goal_x, int goal_y) {\n  return abs(goal_x\
    \ - x) + abs(goal_y - y);\n}\n\n// Returns the list of coordinates for the path\
    \ from the start node to the goal node,\n// using the A* algorithm\nvector<pair<int,\
    \ int>> AStar(vector<vector<int>> &grid, int start_x, int start_y, int goal_x,\
    \ int goal_y) {\n  // Sanity check: make sure the start and goal coordinates are\
    \ valid\n  if (start_x < 0 || start_x >= grid.size() || start_y < 0 || start_y\
    \ >= grid[0].size() ||\n      goal_x < 0 || goal_x >= grid.size() || goal_y <\
    \ 0 || goal_y >= grid[0].size() ||\n      grid[start_x][start_y] == 1 || grid[goal_x][goal_y]\
    \ == 1) {\n    return {};\n  }\n\n  // The set of discovered nodes that may need\
    \ to be (re-)expanded\n  // At the beginning, only the start node is in this set\n\
    \  priority_queue<Node> open_set;\n  open_set.push({start_x, start_y, 0, 0, 0});\n\
    \n  // The set of nodes already evaluated\n  unordered_map<int, unordered_map<int,\
    \ bool>> closed_set;\n\n  // The map of navigated nodes\n  unordered_map<int,\
    \ unordered_map<int, pair<int, int>>> came_from;\n\n  // The cost of each node,\
    \ including the start node\n  unordered_map<int, unordered_map<int, int>> cost_so_far;\n\
    \  cost_so_far[start_x][start_y] = 0;\n\n  // The list of coordinates for the\
    \ path from the start node to the goal node\n  vector<pair<int, int>> path;\n\n\
    \  // Loop until the open set is empty\n  while (!open_set.empty()) {\n    //\
    \ Get the node with the lowest f value (i.e., the node that is closest to the\
    \ goal)\n    Node current = open_set.top();\n    open_set.pop();\n\n    // Check\
    \ if we have reached the goal node\n    if (current.x == goal_x && current.y ==\
    \ goal_y) {\n      // Retrace the path from the goal node to the start node\n\
    \      pair<int, int> curr = {current.x, current.y};\n      while (curr.first\
    \ != start_x || curr.second != start_y) {\n        path.push_back(curr);\n   \
    \     curr = came_from[curr.first][curr.second];\n      }\n      path.emplace_back(start_x,\
    \ start_y);\n      reverse(path.begin(), path.end());\n      return path;\n  \
    \  }\n\n    // Mark the current node as visited\n    closed_set[current.x][current.y]\
    \ = true;\n\n    // Explore the neighbors of the current node\n    for (int i\
    \ = 0; i < 4; ++i) {\n      // Check if the coordinates are valid and not visited\n\
    \      int x = current.x + Nyan::dx[i];\n      int y = current.y + Nyan::dy[i];\n\
    \      if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size()\n       \
    \   || grid[x][y] == 1 || closed_set[x][y]) {\n        continue;\n      }\n\n\
    \      // Calculate the new f, g, and h values\n      int g = current.g + 1;\n\
    \      int h = heuristic(x, y, goal_x, goal_y);\n      int f = g + h;\n\n    \
    \  // If the current neighbour has not been visited or has a higher f value, update\
    \ its values\n      if (!cost_so_far.count(x) || !cost_so_far[x].count(y) || cost_so_far[x][y]\
    \ > g) {\n        cost_so_far[x][y] = g;\n        came_from[x][y] = {current.x,\
    \ current.y};\n        open_set.push({x, y, f, g, h});\n      }\n    }\n  }\n\
    \  // If the open set is empty, and we haven't reached the goal, then there is\
    \ no path\n  return {};\n}\n/**\n * @brief a* search\n*/"
  dependsOn:
  - template/template.hpp
  - template/macro.hpp
  - template/util.hpp
  - template/io.hpp
  isVerificationFile: false
  path: magic/astar.hpp
  requiredBy: []
  timestamp: '2022-12-17 14:59:24+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: magic/astar.hpp
layout: document
redirect_from:
- /library/magic/astar.hpp
- /library/magic/astar.hpp.html
title: a* search
---