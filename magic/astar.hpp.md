---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/util.hpp
    title: template/util.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: A* Pathfinding
    links: []
  bundledCode: "#line 1 \"template/util.hpp\"\nnamespace Nyan{\nusing ll=long long;\n\
    using ull=unsigned long long;\nusing ld=long double;\nusing vl=vector<ll>;\nusing\
    \ vi=vector<int>;\nusing vs=vector<string>;\nusing vc=vector<char>;\nusing vvl=vector<vl>;\n\
    using vvi=vector<vi>;\nusing pl=pair<ll,ll>;\nusing pi=pair<int,int>;\nusing vvc=vector<vc>;\n\
    using vd=vector<double>;\nusing vp=vector<pl>;\nusing vb=vector<bool>;\ntemplate<class\
    \ T>\nauto max(const T&a){return *max_element(all(a));}\ntemplate<class T>\nauto\
    \ min(const T&a){return *min_element(all(a));}\ntemplate<typename T,typename U>\n\
    inline bool chmax(T&a,U b){return a<b&&(a=b,true);}\ntemplate<typename T,typename\
    \ U>\ninline bool chmin(T&a,U b){return a>b&&(a=b,true);}\ntemplate<class T> using\
    \ maxheap=priority_queue<T,vector<T>,less<T>>;\ntemplate<class T> using minheap=priority_queue<T,vector<T>,greater<T>>;\n\
    constexpr ll MOD=1000000007;\nconstexpr ll mod=998244353;\nconstexpr int dx[]{+0,+1,+0,-1,+1,+1,-1,-1};\n\
    constexpr int dy[]{+1,+0,-1,+0,+1,-1,-1,+1};\nvoid yes(bool x){cout<<(x?\"yes\"\
    :\"no\")<<endl;}\nvoid Yes(bool x){cout<<(x?\"Yes\":\"No\")<<endl;}\nvoid YES(bool\
    \ x){cout<<(x?\"YES\":\"NO\")<<endl;}\n\n}  // namespace Nyan\n#line 3 \"magic/astar.hpp\"\
    \nstruct Node{\n  // (x, y) coordinate of the node\n  int x,y;\n  /*\n   * f =\
    \ g + h, where g is the cost of the path from the start node to the current node\n\
    \   * and h is the estimated cost of the path from the current node to the goal\
    \ node\n   */\n  int f,g,h;\n\n  // Overloading the \"<\" operator for the priority\
    \ queue\n  bool operator<(const Node&n) const{\n    return f>n.f;\n  }\n};\n\n\
    // Helper function to calculate the heuristic (h) value for a given node\n// In\
    \ this case, the heuristic is the Manhattan distance between the current node\
    \ and the goal node\nint heuristic(int x,int y,int goal_x,int goal_y){\n  return\
    \ abs(goal_x-x)+abs(goal_y-y);\n}\n\n// Returns the list of coordinates for the\
    \ path from the start node to the goal node,\n// using the A* algorithm\nvector<pair<int,int>>\
    \ AStar(vector<vector<int>>&grid,int start_x,int start_y,int goal_x,int goal_y){\n\
    \  // Sanity check: make sure the start and goal coordinates are valid\n  if(start_x<0||start_x>=grid.size()||start_y<0||start_y>=grid[0].size()||\n\
    \      goal_x<0||goal_x>=grid.size()||goal_y<0||goal_y>=grid[0].size()||\n   \
    \   grid[start_x][start_y]==1||grid[goal_x][goal_y]==1){\n    return {};\n  }\n\
    \n  // The set of discovered nodes that may need to be (re-)expanded\n  // At\
    \ the beginning, only the start node is in this set\n  priority_queue<Node> open_set;\n\
    \  open_set.push({start_x,start_y,0,0,0});\n\n  // The set of nodes already evaluated\n\
    \  unordered_map<int,unordered_map<int,bool>> closed_set;\n\n  // The map of navigated\
    \ nodes\n  unordered_map<int,unordered_map<int,pair<int,int>>> came_from;\n\n\
    \  // The cost of each node, including the start node\n  unordered_map<int,unordered_map<int,int>>\
    \ cost_so_far;\n  cost_so_far[start_x][start_y]=0;\n\n  // The list of coordinates\
    \ for the path from the start node to the goal node\n  vector<pair<int,int>> path;\n\
    \n  // Loop until the open set is empty\n  while(!open_set.empty()){\n    // Get\
    \ the node with the lowest f value (i.e., the node that is closest to the goal)\n\
    \    Node current=open_set.top();\n    open_set.pop();\n\n    // Check if we have\
    \ reached the goal node\n    if(current.x==goal_x&&current.y==goal_y){\n     \
    \ // Retrace the path from the goal node to the start node\n      pair<int,int>\
    \ curr={current.x,current.y};\n      while(curr.first!=start_x||curr.second!=start_y){\n\
    \        path.push_back(curr);\n        curr=came_from[curr.first][curr.second];\n\
    \      }\n      path.emplace_back(start_x,start_y);\n      reverse(path.begin(),path.end());\n\
    \      return path;\n    }\n\n    // Mark the current node as visited\n    closed_set[current.x][current.y]=true;\n\
    \n    // Explore the neighbors of the current node\n    for(int i=0;i<4;++i){\n\
    \      // Check if the coordinates are valid and not visited\n      int x=current.x+NYAN::dx[i];\n\
    \      int y=current.y+NYAN::dy[i];\n      if(x<0||x>=grid.size()||y<0||y>=grid[0].size()\n\
    \          ||grid[x][y]==1||closed_set[x][y]){\n        continue;\n      }\n\n\
    \      // Calculate the new f, g, and h values\n      int g=current.g+1;\n   \
    \   int h=heuristic(x,y,goal_x,goal_y);\n      int f=g+h;\n\n      // If the current\
    \ neighbour has not been visited or has a higher f value, update its values\n\
    \      if(!cost_so_far.count(x)||!cost_so_far[x].count(y)||cost_so_far[x][y]>g){\n\
    \        cost_so_far[x][y]=g;\n        came_from[x][y]={current.x,current.y};\n\
    \        open_set.push({x,y,f,g,h});\n      }\n    }\n  }\n  // If the open set\
    \ is empty, and we haven't reached the goal, then there is no path\n  return {};\n\
    }\n/**\n * @brief A* Pathfinding\n*/\n"
  code: "#pragma once\n#include \"../template/util.hpp\"\nstruct Node{\n  // (x, y)\
    \ coordinate of the node\n  int x,y;\n  /*\n   * f = g + h, where g is the cost\
    \ of the path from the start node to the current node\n   * and h is the estimated\
    \ cost of the path from the current node to the goal node\n   */\n  int f,g,h;\n\
    \n  // Overloading the \"<\" operator for the priority queue\n  bool operator<(const\
    \ Node&n) const{\n    return f>n.f;\n  }\n};\n\n// Helper function to calculate\
    \ the heuristic (h) value for a given node\n// In this case, the heuristic is\
    \ the Manhattan distance between the current node and the goal node\nint heuristic(int\
    \ x,int y,int goal_x,int goal_y){\n  return abs(goal_x-x)+abs(goal_y-y);\n}\n\n\
    // Returns the list of coordinates for the path from the start node to the goal\
    \ node,\n// using the A* algorithm\nvector<pair<int,int>> AStar(vector<vector<int>>&grid,int\
    \ start_x,int start_y,int goal_x,int goal_y){\n  // Sanity check: make sure the\
    \ start and goal coordinates are valid\n  if(start_x<0||start_x>=grid.size()||start_y<0||start_y>=grid[0].size()||\n\
    \      goal_x<0||goal_x>=grid.size()||goal_y<0||goal_y>=grid[0].size()||\n   \
    \   grid[start_x][start_y]==1||grid[goal_x][goal_y]==1){\n    return {};\n  }\n\
    \n  // The set of discovered nodes that may need to be (re-)expanded\n  // At\
    \ the beginning, only the start node is in this set\n  priority_queue<Node> open_set;\n\
    \  open_set.push({start_x,start_y,0,0,0});\n\n  // The set of nodes already evaluated\n\
    \  unordered_map<int,unordered_map<int,bool>> closed_set;\n\n  // The map of navigated\
    \ nodes\n  unordered_map<int,unordered_map<int,pair<int,int>>> came_from;\n\n\
    \  // The cost of each node, including the start node\n  unordered_map<int,unordered_map<int,int>>\
    \ cost_so_far;\n  cost_so_far[start_x][start_y]=0;\n\n  // The list of coordinates\
    \ for the path from the start node to the goal node\n  vector<pair<int,int>> path;\n\
    \n  // Loop until the open set is empty\n  while(!open_set.empty()){\n    // Get\
    \ the node with the lowest f value (i.e., the node that is closest to the goal)\n\
    \    Node current=open_set.top();\n    open_set.pop();\n\n    // Check if we have\
    \ reached the goal node\n    if(current.x==goal_x&&current.y==goal_y){\n     \
    \ // Retrace the path from the goal node to the start node\n      pair<int,int>\
    \ curr={current.x,current.y};\n      while(curr.first!=start_x||curr.second!=start_y){\n\
    \        path.push_back(curr);\n        curr=came_from[curr.first][curr.second];\n\
    \      }\n      path.emplace_back(start_x,start_y);\n      reverse(path.begin(),path.end());\n\
    \      return path;\n    }\n\n    // Mark the current node as visited\n    closed_set[current.x][current.y]=true;\n\
    \n    // Explore the neighbors of the current node\n    for(int i=0;i<4;++i){\n\
    \      // Check if the coordinates are valid and not visited\n      int x=current.x+NYAN::dx[i];\n\
    \      int y=current.y+NYAN::dy[i];\n      if(x<0||x>=grid.size()||y<0||y>=grid[0].size()\n\
    \          ||grid[x][y]==1||closed_set[x][y]){\n        continue;\n      }\n\n\
    \      // Calculate the new f, g, and h values\n      int g=current.g+1;\n   \
    \   int h=heuristic(x,y,goal_x,goal_y);\n      int f=g+h;\n\n      // If the current\
    \ neighbour has not been visited or has a higher f value, update its values\n\
    \      if(!cost_so_far.count(x)||!cost_so_far[x].count(y)||cost_so_far[x][y]>g){\n\
    \        cost_so_far[x][y]=g;\n        came_from[x][y]={current.x,current.y};\n\
    \        open_set.push({x,y,f,g,h});\n      }\n    }\n  }\n  // If the open set\
    \ is empty, and we haven't reached the goal, then there is no path\n  return {};\n\
    }\n/**\n * @brief A* Pathfinding\n*/"
  dependsOn:
  - template/util.hpp
  isVerificationFile: false
  path: magic/astar.hpp
  requiredBy: []
  timestamp: '2022-12-06 17:28:59+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: magic/astar.hpp
layout: document
redirect_from:
- /library/magic/astar.hpp
- /library/magic/astar.hpp.html
title: A* Pathfinding
---
